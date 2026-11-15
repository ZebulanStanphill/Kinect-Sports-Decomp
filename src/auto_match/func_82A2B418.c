typedef struct TimeFields_82A2B418 {
    unsigned short year;         /* 0x00 */
    unsigned short month;        /* 0x02 */
    unsigned short day;          /* 0x04 */
    unsigned short hour;         /* 0x06 */
    unsigned short minute;       /* 0x08 */
    unsigned short second;       /* 0x0a */
    unsigned short milliseconds; /* 0x0c */
    unsigned short weekday;      /* 0x0e */
} TimeFields_82A2B418;

typedef struct Time_82A2B418 {
    unsigned int high; /* 0x00 */
    unsigned int low;  /* 0x04 */
} Time_82A2B418;

extern unsigned char RtlTimeFieldsToTime(TimeFields_82A2B418 *, Time_82A2B418 *);
extern void fn_82A2B760(unsigned int);

int fn_82A2B418(const unsigned short *input, Time_82A2B418 *out)
{
    TimeFields_82A2B418 fields;
    Time_82A2B418 time;
    fields.year = input[0];
    fields.month = input[1];
    fields.day = input[3];
    fields.hour = input[4];
    fields.minute = input[5];
    fields.second = input[6];
    fields.milliseconds = input[7];
    if (RtlTimeFieldsToTime(&fields, &time) == 0) {
        fn_82A2B760(0xc000000d);
        return 0;
    }
    out->low = time.low;
    out->high = time.high;
    return 1;
}
