typedef struct Handler_828BE8C0 {
    unsigned int id;
    void (*handler)(void);
    unsigned int a;
    unsigned char b;
    unsigned char c;
    const char *name;
    unsigned int sendMask;
    unsigned int recvMask;
} Handler_828BE8C0;

extern Handler_828BE8C0 lbl_83214058[27];
unsigned char fn_828BE8C0(int id, unsigned char send)
{
    if (send)
        return (lbl_83214058[id].sendMask & 4) > 0;
    return (lbl_83214058[id].recvMask & 4) > 0;
}
