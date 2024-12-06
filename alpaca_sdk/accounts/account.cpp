#include "account.h"
#include <curl/curl.h>

static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    userp->append((char*)contents, size * nmemb);
    return size * nmemb;
}

void Account::getAccountInfo(const std::string &apiKey, const std::string &apiSecret)
{
    CURL *hnd = curl_easy_init();

    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "GET");
    curl_easy_setopt(hnd, CURLOPT_URL, "https://paper-api.alpaca.markets/v2/account");

    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "accept: application/json");
    
    // Add authentication headers
    std::string auth = "APCA-API-KEY-ID: " + apiKey;
    headers = curl_slist_append(headers, auth.c_str());
    auth = "APCA-API-SECRET-KEY: " + apiSecret;
    headers = curl_slist_append(headers, auth.c_str());
    
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

    // Set up response handling
    std::string response;
    curl_easy_setopt(hnd, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(hnd, CURLOPT_WRITEDATA, &response);

    CURLcode ret = curl_easy_perform(hnd);
    
    // Clean up
    curl_slist_free_all(headers);
    curl_easy_cleanup(hnd);

    if (ret != CURLE_OK) {
        throw std::runtime_error("Failed to get account info: " + std::string(curl_easy_strerror(ret)));
    }

    //print account info

    std::cout << response;


}
