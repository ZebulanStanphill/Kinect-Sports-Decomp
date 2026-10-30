typedef struct { int w[4]; } Blk_82862868;
typedef struct { float f; Blk_82862868 *blks; unsigned short tail; } Ent_82862868;
typedef struct { char pad[10]; unsigned short cnt; int pad2; int base; } Hdr_82862868;
typedef struct { char pad[8]; int off; } Ref_82862868;

void fn_82862868(Hdr_82862868 *h, Ref_82862868 *src, Ref_82862868 *dst)
{
    Ent_82862868 *s = (Ent_82862868 *)(src->off + h->base);
    Ent_82862868 *d = (Ent_82862868 *)(dst->off + h->base);
    int i = 0;
    d->f = s->f;
    d->blks = s->blks;
    if (h->cnt + 2 > 0) {
        do {
            d->blks[i] = s->blks[i];
            i++;
        } while (i < h->cnt + 2);
    }
    d->tail = s->tail;
}
