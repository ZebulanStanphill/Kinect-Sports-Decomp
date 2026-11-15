typedef struct Settings_827B74F8 {
    unsigned int first;  /* 0x00 */
    unsigned int second; /* 0x04 */
    unsigned int third;  /* 0x08 */
    unsigned int fourth; /* 0x0c */
    unsigned int fifth;  /* 0x10 */
} Settings_827B74F8;

extern void fn_827B6420(Settings_827B74F8 *, float, void *, void *);
extern void fn_827B6880(Settings_827B74F8 *, float, void *, void *);

void fn_827B74F8(char *self, unsigned int first, unsigned int second, unsigned int third, unsigned int fourth,
                 unsigned int fifth, float start, float end)
{
    Settings_827B74F8 settings;
    settings.second = second;
    settings.third = third;
    settings.first = first;
    settings.fourth = fourth;
    settings.fifth = fifth;
    fn_827B6420(&settings, start, self + 0x2e0, self + 0x2d4);
    settings.first = first;
    settings.second = second;
    settings.third = third;
    settings.fourth = fourth;
    settings.fifth = fifth;
    fn_827B6880(&settings, end, self + 0x2e0, self + 0x2d4);
}
