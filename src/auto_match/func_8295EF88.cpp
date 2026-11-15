struct Selection_8295EF88 {
    unsigned int flags;
    int unknown;
    unsigned int *indices;
    unsigned int count;
    unsigned int *alternate;
};

struct Device_8295EF88 {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual void v034();
    virtual void v038();
    virtual void v03c();
    virtual void v040();
    virtual void v044();
    virtual void v048();
    virtual void v04c();
    virtual void v050();
    virtual void v054();
    virtual void v058();
    virtual void v05c();
    virtual void v060();
    virtual void v064();
    virtual void v068();
    virtual void v06c();
    virtual void v070();
    virtual void v074();
    virtual void v078();
    virtual void v07c();
    virtual void v080();
    virtual void v084();
    virtual void v088();
    virtual void v08c();
    virtual void v090();
    virtual void v094();
    virtual void v098();
    virtual void v09c();
    virtual void v0a0();
    virtual void v0a4();
    virtual void v0a8();
    virtual void v0ac();
    virtual void v0b0();
    virtual void v0b4();
    virtual void v0b8();
    virtual void v0bc();
    virtual void v0c0();
    virtual void v0c4();
    virtual void v0c8();
    virtual void v0cc();
    virtual void v0d0();
    virtual void v0d4();
    virtual void v0d8();
    virtual void v0dc();
    virtual void v0e0();
    virtual void v0e4();
    virtual void v0e8();
    virtual void v0ec();
    virtual void v0f0();
    virtual void v0f4();
    virtual void v0f8();
    virtual void v0fc();
    virtual void v100();
    virtual void v104();
    virtual void v108();
    virtual void v10c();
    virtual void v110();
    virtual void v114();
    virtual void v118();
    virtual void v11c();
    virtual void v120();
    virtual void v124();
    virtual void v128();
    virtual void v12c();
    virtual void v130();
    virtual int Finish();
    virtual int Configure(unsigned int value, unsigned int mask, unsigned int flags);
    virtual int Set(unsigned int value, unsigned int mode, unsigned int extra);
    virtual int Query(unsigned int value, unsigned int *out, unsigned int *extra, unsigned int *count);
    virtual int QueryRange(unsigned int *, unsigned int, unsigned int *, unsigned int);
    virtual int Get(unsigned int value, unsigned int *out, unsigned int *extra);
    virtual int Select(unsigned int *index, unsigned int slot, unsigned int mask, unsigned int *out);
    char pad[0x14 - 4];
    unsigned int *table; /* 0x14 */
    char pad18[0x104 - 0x18];
    Selection_8295EF88 *selection; /* 0x104 */
};

extern "C" int fn_8295D0A8(Device_8295EF88 *self, int mode);
extern "C" int fn_829548C8(Device_8295EF88 *self);

extern "C" int fn_8295EF88(Device_8295EF88 *self)
{
    unsigned int value;
    unsigned int range;
    unsigned int selected;
    unsigned int extra;
    unsigned int count;
    unsigned int alternateExtra;
    int result = fn_8295D0A8(self, 1);
    if (result < 0)
        goto done;
    result = self->Query(self->table[*self->selection->alternate], &value, &alternateExtra, &count);
    if (result < 0)
        goto done;
    result = self->QueryRange(self->selection->alternate, self->selection->count, &range, count);
    if (result < 0)
        goto done;
    result = self->Configure(value, range, alternateExtra);
    if (result < 0)
        goto done;
    result = self->Get(self->table[*self->selection->indices], &value, &extra);
    if (result < 0)
        goto done;
    result = self->Select(self->selection->indices, self->selection->count, range, &selected);
    if (result < 0)
        goto done;
    if ((value & 0xf000000) == 0xb000000) {
        result = self->Set(value & 0xf4ffffff, selected | 0xc000000, extra);
    } else {
        result = self->Set(value, selected | 0x1000000, extra);
    }
    if (result < 0)
        goto done;
    result = self->Finish();
    if (result < 0)
        goto done;
    result = fn_829548C8(self);
    if (result < 0)
        goto done;
    return 0;
done:
    return result;
}
