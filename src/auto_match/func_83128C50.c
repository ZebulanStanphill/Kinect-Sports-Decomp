typedef struct Handler_83128C50 {
    unsigned int id;
    void (*handler)(void);
    unsigned int a;
    unsigned char b;
    unsigned char c;
    const char *name;
    unsigned int d;
    unsigned int e;
} Handler_83128C50;

extern Handler_83128C50 lbl_83214058[27];
extern void fn_828B0300(Handler_83128C50 *h, unsigned int id, void (*handler)(void), unsigned int a, unsigned char b,
                        unsigned char c, const char *name, unsigned int d, unsigned int e);
extern void fn_828BE9C8(void);
extern void fn_828BEA10(void);
extern void fn_828BEA58(void);
extern void fn_828BEAC8(void);
extern void fn_828BEB38(void);
extern void fn_828BEBA8(void);
extern void fn_828BEC20(void);
extern void fn_828BEC68(void);
extern void fn_828BECE8(void);
extern void fn_828BED58(void);
extern void fn_828BEDA0(void);
extern void fn_828BEE10(void);
extern void fn_828BEE88(void);
extern void fn_828BEEF8(void);
extern void fn_828BF070(void);
extern void fn_828BF0E0(void);
extern void fn_828BF200(void);
extern void fn_828BF380(void);
extern void fn_828BF408(void);
extern void fn_828BF608(void);
extern void fn_828BF650(void);
extern void fn_828BF840(void);
extern void fn_828BF8C0(void);
extern void fn_828BF908(void);
extern void fn_828BFB90(void);
extern void fn_828BFC10(void);
extern void fn_828BFFF0(void);

void fn_83128C50(void)
{
    fn_828B0300(&lbl_83214058[0], 0, fn_828BE9C8, 0, 0, 1, "SL Find>", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[1], 1, fn_828BEA10, 0, 0, 1, "SL Find<", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[2], 2, fn_828BF070, 0, 0, 0, "Auto-Req", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[3], 3, fn_828BF0E0, 0, 0, 0, "Auto-Rcpt", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[4], 4, fn_828BF380, 0, 0, 0, "Join Req", 2, 0x1f);
    fn_828B0300(&lbl_83214058[5], 5, fn_828BFFF0, 0, 0, 0, "Join Reply", 0x10, 2);
    fn_828B0300(&lbl_83214058[6], 6, fn_828BEA58, 0, 0, 0, "Ping", 2, 0x1f);
    fn_828B0300(&lbl_83214058[7], 7, fn_828BEAC8, 0, 0, 0, "Conn Err", 2, 0);
    fn_828B0300(&lbl_83214058[8], 8, fn_828BF408, 0, 0, 0, "Sync Mach", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[9], 9, fn_828BF840, 0, 0, 0, "Sync Mach List", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[10], 0xa, fn_828BEB38, 0, 0, 0, "Leave Game", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[11], 0xb, fn_828BFB90, 0, 0, 0, "Conn Query", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[12], 0xc, fn_828BF200, 0, 0, 0, "Net Vars", 2, 2);
    fn_828B0300(&lbl_83214058[13], 0xd, fn_828BF8C0, 0, 0, 0, "Net Obj", 2, 2);
    fn_828B0300(&lbl_83214058[14], 0xe, fn_828BF908, 0, 0, 0, "Net Spam", 2, 2);
    fn_828B0300(&lbl_83214058[15], 0xf, fn_828BEBA8, 0, 0, 0, "Owner Request", 2, 2);
    fn_828B0300(&lbl_83214058[16], 0x10, fn_828BF608, 0, 0, 0, "Owner Transfer", 2, 2);
    fn_828B0300(&lbl_83214058[17], 0x11, fn_828BEC20, 0, 0, 0, "New Owner", 2, 2);
    fn_828B0300(&lbl_83214058[18], 0x12, fn_828BF650, 0, 0, 0, "Owner VarState sync", 2, 2);
    fn_828B0300(&lbl_83214058[19], 0x13, fn_828BEC68, 0, 0, 0, "Forward Net Obj Msg", 2, 2);
    fn_828B0300(&lbl_83214058[20], 0x14, fn_828BFC10, 0, 0, 0, "Voice", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[21], 0x15, fn_828BECE8, 0, 0, 0, "Voice Mute", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[22], 0x16, fn_828BED58, 0, 0, 0, "Party QOS", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[23], 0x17, fn_828BEDA0, 0, 0, 0, "Sync Time", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[24], 0x18, fn_828BEE10, 0, 0, 0, "Arbitration", 0, 0);
    fn_828B0300(&lbl_83214058[25], 0x19, fn_828BEE88, 0, 0, 1, "Terminator", 0x1f, 0x1f);
    fn_828B0300(&lbl_83214058[26], 0x1a, fn_828BEEF8, 0, 0, 0, "Split", 0x1f, 0x1f);
}
