#include <stdio.h>
#include "nvs_flash.h"
#include "wifi_softap.h"

void app_main(void)
{
    // init NVS for Wi-Fi
    ESP_ERROR_CHECK(nvs_flash_init());

    //  Wi-Fi AP mosw
    wifi_init_softap();
}
