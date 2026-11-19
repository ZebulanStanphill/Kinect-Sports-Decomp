typedef void (*ReportFunc_82AA3B58)(void *context, int severity, int code, const char *message);

extern int fn_82AA3148(unsigned int *code, unsigned int size, void *param_3, void *param_4, void *param_5,
                       void *param_6, void *context, ReportFunc_82AA3B58 report, void *param_9,
                       void *param_10);

int fn_82AA3B58(unsigned int *code, unsigned int size, void *param_3, void *param_4, void *param_5,
                void *param_6, void *context, ReportFunc_82AA3B58 report, void *param_9, void *param_10)
{
    int hr;

    if (code == 0) {
        return (int)0x80070057;
    }
    if (size < 4) {
        return (int)0x80070057;
    }
    if (param_3 == 0) {
        return (int)0x80070057;
    }
    if (param_5 == 0) {
        return (int)0x80070057;
    }
    __try {
        hr = fn_82AA3148(code, size, param_3, param_4, param_5, param_6, context, report, param_9, param_10);
        if (hr < 0 && hr == (int)0x88760B69) {
            report(context, 1, 0x30, "Shader required too many Final GPU microcode instructions.\n");
        }
    } __except (1) {
        report(context, 1, 0x2f, "Internal Exception while assembling Final GPU shader.\n");
        hr = (int)0x80004005;
    }
    return hr;
}
