typedef struct State_82A20700 {
    char padding[0x10];
    int criticalSection[6]; /* 0x10 */
    char padding28[0x0c];
    int handle; /* 0x34 */
    char padding38[0x44];
    int pending;           /* 0x7c */
    unsigned int deadline; /* 0x80 */
    int state;             /* 0x84 */
    char padding88[0x40];
    int count; /* 0xc8 */
} State_82A20700;

extern State_82A20700 lbl_83219B90;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int fn_82A1F2F8(void);
extern void SetEvent(int);

void fn_82A20700(unsigned int delay)
{
    RtlEnterCriticalSection(lbl_83219B90.criticalSection);
    if (delay != 0) {
        unsigned int deadline = (fn_82A1F2F8() + delay) | 1;
        if (lbl_83219B90.deadline != 0 && lbl_83219B90.deadline - deadline >= 3600000) {
            lbl_83219B90.deadline = deadline;
        } else {
            lbl_83219B90.deadline = deadline;
            lbl_83219B90.state = 0;
            lbl_83219B90.pending = 1;
            SetEvent(lbl_83219B90.handle);
        }
    } else {
        lbl_83219B90.deadline = 0;
        lbl_83219B90.state = 0;
        lbl_83219B90.pending = lbl_83219B90.count == 0;
        SetEvent(lbl_83219B90.handle);
    }
    RtlLeaveCriticalSection(lbl_83219B90.criticalSection);
}
