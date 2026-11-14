typedef struct Converter_82EDF318 Converter_82EDF318;

typedef void (*Plain_82EDF318)(void *src, void *dst, int flags, int pitch,
                               Converter_82EDF318 *self);
typedef void (*Planar_82EDF318)(void *src, void *y, void *u, void *v, int flags, int pitch,
                                Converter_82EDF318 *self);
typedef void (*FromPlanar_82EDF318)(void *dst, void *y, void *u, void *v, int flags, int pitch,
                                    Converter_82EDF318 *self);
typedef void (*PlanarToPlanar_82EDF318)(void *sy, void *su, void *sv, void *dy, void *du,
                                        void *dv, int flags, int pitch,
                                        Converter_82EDF318 *self);

struct Converter_82EDF318 {
    char pad0[0xc];
    int srcPlanar;
    int dstPlanar;
    void *src;
    void *srcY;
    void *srcU;
    void *srcV;
    void *dst;
    void *dstY;
    void *dstU;
    void *dstV;
    char pad34[0x50 - 0x34];
    int pitch;
    char pad54[0x3970 - 0x54];
    Plain_82EDF318 plain;
    Planar_82EDF318 toPlanar;
    PlanarToPlanar_82EDF318 planarToPlanar;
    FromPlanar_82EDF318 fromPlanar;
};

void fn_82EDF318(Converter_82EDF318 *self)
{
    if (self->srcPlanar == 0) {
        if (self->dstPlanar == 0) {
            self->plain(self->src, self->dst, 0, self->pitch, self);
        } else {
            self->toPlanar(self->src, self->dstY, self->dstU, self->dstV, 0, self->pitch, self);
        }
    } else {
        if (self->dstPlanar == 0) {
            self->fromPlanar(self->dst, self->srcY, self->srcU, self->srcV, 0, self->pitch,
                             self);
        } else {
            self->planarToPlanar(self->srcY, self->srcU, self->srcV, self->dstY, self->dstU,
                                 self->dstV, 0, self->pitch, self);
        }
    }
}
