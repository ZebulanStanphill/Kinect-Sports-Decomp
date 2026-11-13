typedef void (*AssertFn)(int, int, int, const char *, const char *, int);
typedef struct { int a; AssertFn fn; } AssertHooks;
extern AssertHooks lbl_83276774;

int fn_82493A18(char *p)
{
  *(int *)(p + 0x3c) += 1;
  if (lbl_83276774.fn != 0) {
    lbl_83276774.fn(0, 0, 1, "olympus::replay::AthleticsRaceEvent::Finished", "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\replay\\event\\athletics\\replay_event_athletics_race.cpp", 0x87);
  }
  return 1;
}
