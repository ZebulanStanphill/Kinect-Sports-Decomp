typedef struct Stream_82AA1BA8 {
    void *ctx;
    void (*callback)(void *ctx, int code, int type, char *text);
    unsigned short length;
    unsigned short pad0a;
    int code;
    char text[1];
} Stream_82AA1BA8;

int fn_82AA1BA8(Stream_82AA1BA8 *s)
{
    s->text[s->length] = 0;
    s->callback(s->ctx, s->code, (s->code == 0) + 0x1bbd, s->text);
    s->length = 0;
    return 0;
}
