#pragma once

#ifdef ENABLE_PLAYFABENTITY_API

#include "playfab/PlayFabHttp.h"
#include "playfab/PlayFabEventsDataModels.h"

namespace PlayFab
{
    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Events APIs
    /// </summary>
    class PlayFabEventsAPI
    {
    public:
        static size_t Update();
        static void ForgetAllCredentials();


        // ------------ Generated API calls
        static void WriteEvents(EventsModels::WriteEventsRequest& request, ProcessApiCallback<EventsModels::WriteEventsResponse> callback, ErrorCallback errorCallback = nullptr, void* customData = nullptr);

    private:
        PlayFabEventsAPI(); // Private constructor, static class should never have an instance
        PlayFabEventsAPI(const PlayFabEventsAPI& other); // Private copy-constructor, static class should never have an instance

        // ------------ Generated result handlers
        static void OnWriteEventsResult(CallRequestContainer& request);

    };
}

#endif
