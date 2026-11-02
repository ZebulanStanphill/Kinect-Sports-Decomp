#include "R1/Soundscape/BankEntryState.h"
#include "R1/Soundscape/EventHandleState.h"

extern "C" {
void *fn_82868378();
void *fn_82868568();
void *fn_828684F8();
void *fn_82869448();
void *fn_828694C0();
void *fn_82869538();
void *fn_828695B0();
void *fn_82869628();
void *fn_82868438();
void *fn_828685D8();
void *fn_82868698();
void *fn_82868758();
void *fn_828682B8();
void *fn_82868E78();
void *fn_828691F0();
void *fn_82869268();
void *fn_828692E0();
void *fn_82869358();
void *fn_828693D0();
void *fn_828681F8();
void *fn_8286B080();
void *fn_82865100();
}

// Most of these calls are singleton getters, so this creates the Soundscape
// singletons.
extern "C" unsigned int fn_82867780()
{
    fn_82868378();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_TRIGGER_LOAD_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_WAITING_FOR_LOAD_TO_COMPLETE_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_LOADED_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_LOAD_FAILED_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_TRIGGER_UNLOAD_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_UNLOADED_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::BankEntry_UNLOAD_FAILED_c>::GetInstance();
    fn_82868568();
    R1::Soundscape::Singleton_c<R1::Soundscape::EventHandle_EMITTER_INVALIDATED_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::EventHandle_STOPPED_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::EventHandle_PLAYING_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::EventHandle_FAILED_TO_PLAY_c>::GetInstance();
    fn_828684F8();
    fn_82869448();
    fn_828694C0();
    fn_82869538();
    fn_828695B0();
    fn_82869628();
    fn_82868438();
    fn_828685D8();
    fn_82868698();
    fn_82868758();
    fn_828682B8();
    fn_82868E78();
    fn_828691F0();
    fn_82869268();
    fn_828692E0();
    fn_82869358();
    fn_828693D0();
    fn_828681F8();
    fn_8286B080();
    fn_82865100();
    return 0x200A0000;
}
