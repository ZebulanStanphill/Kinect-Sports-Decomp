typedef struct { char pad[0x68]; unsigned short flags; } Node;
typedef struct { char pad[0x114]; int node; } Inner;
typedef struct { char pad[0xa0]; Inner *inner; } Self;

void fn_8272CE88(Self *s, unsigned char on)
{
    int n = s->inner->node;
    if (n == 0) return;
    if (on) {
        ((Node *)n)->flags |= 0x80;
    } else {
        ((Node *)n)->flags &= 0xff7f;
    }
}
