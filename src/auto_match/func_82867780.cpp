#include "R1/Soundscape/BankEntryState.h"
#include "R1/Soundscape/EventHandleState.h"
#include "R1/Soundscape/ListenerBias.h"

// Singleton_c<ListenerBias_FULL_c>::GetInstance (see func_82869448.cpp).
extern "C" R1::Soundscape::ListenerBias_FULL_c *fn_82869448();
#include "R1/Soundscape/WwiseEventStates.h"

extern "C" {
void *fn_82868378();
void *fn_82868568();
void *fn_828684F8();
void *fn_82868438();
void *fn_828685D8();
void *fn_82868698();
void *fn_82868758();
void *fn_828682B8();
void *fn_82868E78();
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
    R1::Soundscape::Singleton_c<R1::Soundscape::ListenerBias_LEFT_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::ListenerBias_RIGHT_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::ListenerBias_TOP_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::ListenerBias_BOTTOM_c>::GetInstance();
    fn_82868438();
    fn_828685D8();
    fn_82868698();
    fn_82868758();
    fn_828682B8();
    fn_82868E78();
    R1::Soundscape::Singleton_c<R1::Soundscape::WwiseEventInitialising_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::WwiseEventRunning_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::WwiseEventPendingDestruction_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::WwiseEventPausedAndInitialised_c>::GetInstance();
    R1::Soundscape::Singleton_c<R1::Soundscape::WwiseEventPausedAndRunning_c>::GetInstance();
    fn_828681F8();
    fn_8286B080();
    fn_82865100();
    return 0x200A0000;
}
