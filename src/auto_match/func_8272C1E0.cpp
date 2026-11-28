typedef struct Value_8272C1E0 {
    unsigned char type; /* 0x0 */
    unsigned char pad1[15];
} Value_8272C1E0;

typedef struct StringNode_8272C1E0 {
    const char *text; /* 0x0 */
    int pad4;
    int refCount; /* 0x8 */
} StringNode_8272C1E0;

typedef struct Target_8272C1E0 {
    char pad0[0x10];
    unsigned int size; /* 0x10 */
} Target_8272C1E0;

class Self_8272C1E0
{
  public:
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void *GetEnvironment(); /* 0x5c */
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void v74();
    virtual void v78();
    virtual void v7c();
    virtual void v80();
    virtual void v84();
    virtual void v88();
    virtual void v8c();
    virtual void v90();
    virtual void v94();
    virtual void v98();
    virtual void v9c();
    virtual void va0();
    virtual void va4();
    virtual void va8();
    virtual void vac();
    virtual void vb0();
    virtual void vb4();
    virtual void vb8();
    virtual void vbc();
    virtual void vc0();
    virtual void vc4();
    virtual void vc8();
    virtual void vcc();
    virtual void vd0();
    virtual void vd4();
    virtual void vd8();
    virtual void vdc();
    virtual void ve0();
    virtual void ve4();
    virtual void ve8();
    virtual void vec();
    virtual void vf0();
    virtual void vf4();
    virtual void vf8();
    virtual void vfc();
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
    virtual void v134();
    virtual void v138();
    virtual void v13c();
    virtual void v140();
    virtual void v144();
    virtual void v148();
    virtual void v14c();
    virtual void v150();
    virtual void v154();
    virtual void v158();
    virtual void v15c();
    virtual void v160();
    virtual void v164();
    virtual void v168();
    virtual void v16c();
    virtual void v170();
    virtual void v174();
    virtual void v178();
    virtual void v17c();
    virtual void v180();
    virtual void v184();
    virtual void v188();
    virtual void v18c();
    virtual void v190();
    virtual void v194();
    virtual void v198();
    virtual void v19c();
    virtual void v1a0();
    virtual void v1a4();
    virtual void v1a8();
    virtual void SetText(const char *text, int a, int b); /* 0x1ac */

    char pad4[0xb4 - 4];
    Target_8272C1E0 *variableName; /* 0xb4 */
    Value_8272C1E0 lastValue;      /* 0xb8 */
};

extern "C" {
extern char lbl_82196582[];
extern unsigned char fn_826B44A0(void *env, Target_8272C1E0 **name, Value_8272C1E0 *value, int a, int b,
                                 int c, int d);
extern unsigned char fn_82698190(Value_8272C1E0 *value, void *env, Value_8272C1E0 *other);
extern void fn_82695FA0(Value_8272C1E0 *dst, Value_8272C1E0 *src);
extern void fn_82696D38(StringNode_8272C1E0 **out, Value_8272C1E0 *value, void *env, int length, int flags);
extern void fn_826944C8(StringNode_8272C1E0 *node);
extern void fn_82696330(Value_8272C1E0 *value);
}

extern "C" int fn_8272C1E0(Self_8272C1E0 *self)
{
    void *env;

    if (self->variableName->size != 0) {
        env = self->GetEnvironment();
        if (env != 0) {
            Value_8272C1E0 value;

            value.type = 0;
            if (fn_826B44A0(env, &self->variableName, &value, 0, 0, 0, 0)) {
                if (!fn_82698190(&value, env, &self->lastValue)) {
                    StringNode_8272C1E0 *text;
                    StringNode_8272C1E0 *held;

                    fn_82695FA0(&self->lastValue, &value);
                    fn_82696D38(&text, &value, env, -1, 0);
                    self->SetText(text->text, 0, 0);
                    held = text;
                    if (--held->refCount == 0) {
                        fn_826944C8(held);
                    }
                    fn_82696330(&value);
                    return 1;
                }
            } else {
                self->SetText(lbl_82196582, 0, 0);
            }
            fn_82696330(&value);
        }
        return 0;
    }
    return 1;
}
