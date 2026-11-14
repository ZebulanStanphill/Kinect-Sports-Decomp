typedef struct Time_82E20380 {
    unsigned short year;
    unsigned short month;
    unsigned short dayOfWeek;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned short milliseconds;
} Time_82E20380;

extern void fn_8306C4F8(Time_82E20380 *time);
extern int fn_82F64068(char *buffer, unsigned int size, unsigned int count, const char *format, ...);
extern void fn_82E1F690(const char *text);

void fn_82E20380(void)
{
    Time_82E20380 now;
    char text[30];

    fn_8306C4F8(&now);
    fn_82F64068(text, 30, 29, "%d/%d/%d %d:%2.2d:%2.2d", now.month, now.day, now.year, now.hour,
                now.minute, now.second);
    text[29] = 0;
    fn_82E1F690(text);
}
