typedef unsigned short wchar_t;

struct Vector_82665960 {
    void *data;
    void *end;
    void *capacity;
};

struct Globals_82665960 {
    int unused;
    struct Vector_82665960 languages;
};
extern struct Globals_82665960 lbl_831E7A70;
extern char lbl_831E7A1C[];
extern void fn_8266C340(const wchar_t *format, ...);
extern unsigned int fn_8265D3F0(struct Vector_82665960 *self);
extern void **fn_8265CF50(void *self, unsigned int index);
extern void fn_826660E8(struct Vector_82665960 *self, void *source);
extern unsigned int fn_8265ED50(const char *language);
extern void fn_8266C438(const wchar_t *format, ...);
extern int fn_82665A98(const char *language);
extern void *fn_82668738(unsigned int size);
extern void *fn_826686F8(void *self, const char *language);
extern void fn_8265F608(struct Vector_82665960 *self, void **element);
extern unsigned int fn_8265CF70(struct Vector_82665960 *self);

int fn_82665960(const char *language)
{
    int index;
    void *languageObject;
    void *storage;
    void *object;
    if (language == 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 0x39d,
                    L"pcszLanguage");
    }
    if (fn_8265D3F0(&lbl_831E7A70.languages) == 0) {
        fn_826660E8(&lbl_831E7A70.languages, *fn_8265CF50(lbl_831E7A1C, 5));
    }
    if (fn_8265ED50(language) == 0) {
        fn_8266C438(L"The language \"%S\" is not a supported culture", language);
        return -1;
    }
    index = fn_82665A98(language);
    if (index >= 0) {
        return index;
    }
    storage = fn_82668738(0x2c);
    if (storage != 0) {
        object = fn_826686F8(storage, language);
    } else {
        object = 0;
    }
    languageObject = object;
    fn_8265F608(&lbl_831E7A70.languages, &languageObject);
    return fn_8265CF70(&lbl_831E7A70.languages) - 1;
}
