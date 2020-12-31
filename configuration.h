#define CONFIG_NUMBER 18
#define CONFIG_STR_SIZE 64


extern char config_device_id[CONFIG_STR_SIZE];
extern char config_wifi_ap_password[CONFIG_STR_SIZE];
extern char config_wifi_ssid[CONFIG_STR_SIZE];
extern char config_wifi_password[CONFIG_STR_SIZE];
extern char config_mac_password[CONFIG_STR_SIZE];
extern char config_server_ip[CONFIG_STR_SIZE];

extern int config_power_phases;

extern float config_current_factors[2];
extern float config_voltage_factors[2];


int configuration_index_name(unsigned int index, char *buffer);
int configuration_index_value(unsigned int index, char *buffer, int external);
int configuration_read(const char *configuration_name, char *buffer, int external);
int configuration_write(const char *configuration_name, const char *buffer, int external);

void load_configuration();
