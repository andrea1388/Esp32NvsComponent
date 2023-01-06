#ifndef NvsParameters_hpp
#define NvsParameters_hpp
#include "nvs_flash.h"

class NvsParameters
{
    public:
        void Init();
        bool load(const char* paramname, char **out);
        bool load(const char* paramname, char **out, const char *defval);
        bool load(const char* paramname, uint8_t *out);
        bool load(const char* paramname, uint8_t *out, uint8_t defval);
        bool load(const char* paramname, uint32_t *out);
        esp_err_t save(const char* paramname, uint8_t val);
        esp_err_t save(const char* paramname, char *val);
    private:
        nvs_handle my_handle;
};
#endif