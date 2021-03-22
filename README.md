# Esp32NvsComponent
C++ component for basic nvs handling (init, load and save)

Minimal usage

```
#include "nvsparameters.h"

static const char *TAG = "main";

void WiFiEvent(WiFi* wifi, uint8_t ev)
{
    switch(ev)
    {
        case WIFI_DISCONNECT: // disconnected
            ESP_LOGI(TAG,"Disconnected.");
            wifi->Connect();
            break;
        case WIFI_GOT_IP: // connected
            ESP_LOGI(TAG,"Connected.");
            break;
    }
}


extern "C" {

    void app_main(void)
    {
        NvsParameters nvs;
        nvs.Init();
        char *ssid=NULL;
        char *password=NULL;
        param.save("wifi_ssid","ssid");
        nvs.load("wifi_ssid",&ssid);
        nvs.load("wifi_password",&password);
        for(;;) {
            vTaskDelay(1);
        }
    }

}
```
