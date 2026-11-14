typedef struct SystemTime_82E229F0 {
    unsigned short year;
    unsigned short month;
    unsigned short dayOfWeek;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned short milliseconds;
} SystemTime_82E229F0;

extern unsigned int fn_82A1F2F8(void);
extern void fn_82A29A40(SystemTime_82E229F0 *time);

unsigned int fn_82E229F0(void)
{
    unsigned int seed = fn_82A1F2F8() ^ 0x45732698;
    SystemTime_82E229F0 time;

    fn_82A29A40(&time);
    return ((((time.hour << 8) ^ time.minute) << 8 ^ time.second) << 8 ^ time.milliseconds) ^ seed;
}
