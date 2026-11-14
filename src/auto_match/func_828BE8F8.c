typedef struct Handler_828BE8F8 {
    unsigned int id;
    void (*handler)(void);
    unsigned int a;
    unsigned char b;
    unsigned char c;
    const char *name;
    unsigned int sendMask;
    unsigned int recvMask;
} Handler_828BE8F8;

extern Handler_828BE8F8 lbl_83214058[27];
unsigned char fn_828BE8F8(int id, unsigned char send)
{
    if (send)
        return (lbl_83214058[id].sendMask & 8) > 0;
    return (lbl_83214058[id].recvMask & 8) > 0;
}
