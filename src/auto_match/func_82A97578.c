typedef void (*Handler_82A97578)(void);

extern void fn_82A963C0(void);
extern void fn_82A963C8(void);
extern void fn_82A96418(void);
extern void fn_82A96460(void);
extern void fn_82A964A8(void);
extern void fn_82A964B0(void);
extern void fn_82A964B8(void);
extern void fn_82A964C8(void);
extern void fn_82A964D8(void);
extern void fn_82A96550(void);
extern void fn_82A97418(void);
extern void fn_82A97470(void);
extern void fn_82A974C0(void);
extern void fn_82A97510(void);

/* picks the handler for an operation, a variant chosen by two flag bits */
Handler_82A97578 fn_82A97578(unsigned int op, unsigned int flags)
{
    switch (op) {
    case 0xb:
        if (flags & 8)
            return fn_82A964C8;
        return fn_82A964D8;
    case 0xc:
        if (flags & 8)
            return fn_82A964B8;
        return fn_82A96550;
    case 0x12:
    case 0x33:
        return fn_82A963C0;
    case 0x13:
    case 0x34:
        if (flags & 2)
            return fn_82A963C8;
        return fn_82A96418;
    case 0x14:
    case 0x35:
        if (flags & 2)
            return fn_82A97418;
        return fn_82A97470;
    case 0x31:
        return fn_82A97510;
    case 0x3a:
        return fn_82A96460;
    case 0x3b:
        return fn_82A974C0;
    case 0x3c:
        return fn_82A964B0;
    case 0x3d:
        return fn_82A964A8;
    default:
        __debugbreak();
        return 0;
    }
}
