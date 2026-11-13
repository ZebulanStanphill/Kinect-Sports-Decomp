typedef void (*HookFn)(const char *func, const char *file, int line);
extern HookFn lbl_83276774[];

void fn_8242D468(int param_1)
{
    if (*(int *)(*(int *)(param_1 + 0x174) + 300) != 0) {
        if (lbl_83276774[2]) {
            lbl_83276774[2]("olympus::sport::athletics::AthleticsController::CloseReplayEndLoadingWipe",
                            "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\controller\\athletics\\sport_controller_athletics.cpp",
                            0x74a);
        }
        *(int *)(*(int *)(param_1 + 0x174) + 300) = 0;
    }
}
