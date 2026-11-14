
typedef struct Settings_82E81948 {
    int enabled;
    int value;
    char rest[48];
} Settings_82E81948;

void fn_82E81948(int *self, Settings_82E81948 settings)
{
    self[0x888 / 4] = -1;
    if (self[0xa0c / 4])
        self[0x888 / 4] = 3;
    else {
        int v = self[0x1fac / 4];
        if (v == 0)
            self[0x888 / 4] = 0;
        else if (v == 1)
            self[0x888 / 4] = 1;
        else
            self[0x888 / 4] = (v == 2) + 1;
    }
    if (self[0xb08 / 4])
        self[0x888 / 4] = 1;
    if (settings.enabled)
        self[0x888 / 4] = settings.value;
}
