extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP(void *, const SteamNetworkingIPAddr *, int, const SteamNetworkingConfigValue_t *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress(void *, const SteamNetworkingIPAddr *, int, const SteamNetworkingConfigValue_t *);
extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P(void *, int, int, const SteamNetworkingConfigValue_t *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P(void *, const SteamNetworkingIdentity *, int, int, const SteamNetworkingConfigValue_t *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection(void *, HSteamNetConnection);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection(void *, HSteamNetConnection, int, const char *, bool);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket(void *, HSteamListenSocket);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData(void *, HSteamNetConnection, int64);
extern int64 cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData(void *, HSteamNetConnection);
extern void cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName(void *, HSteamNetConnection, const char *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName(void *, HSteamNetConnection, char *, int);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection(void *, HSteamNetConnection, const void *, uint32, int, int64 *);
extern void cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages(void *, int, winSteamNetworkingMessage_t_156 *const *, int64 *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection(void *, HSteamNetConnection);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection(void *, HSteamNetConnection, winSteamNetworkingMessage_t_156 **, int);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo(void *, HSteamNetConnection, SteamNetConnectionInfo_t *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus(void *, HSteamNetConnection, SteamNetConnectionRealTimeStatus_t *, int, SteamNetConnectionRealTimeLaneStatus_t *);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus(void *, HSteamNetConnection, char *, int);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress(void *, HSteamListenSocket, SteamNetworkingIPAddr *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair(void *, HSteamNetConnection *, HSteamNetConnection *, bool, const SteamNetworkingIdentity *, const SteamNetworkingIdentity *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes(void *, HSteamNetConnection, int, const int *, const uint16 *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity(void *, SteamNetworkingIdentity *);
extern ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication(void *);
extern ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus(void *, SteamNetAuthenticationStatus_t *);
extern HSteamNetPollGroup cppISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup(void *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup(void *, HSteamNetPollGroup);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup(void *, HSteamNetConnection, HSteamNetPollGroup);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup(void *, HSteamNetPollGroup, winSteamNetworkingMessage_t_156 **, int);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket(void *, const void *, int, SteamDatagramRelayAuthTicket *);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer(void *, const SteamNetworkingIdentity *, int, SteamDatagramRelayAuthTicket *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer(void *, const SteamNetworkingIdentity *, int, int, const SteamNetworkingConfigValue_t *);
extern uint16 cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort(void *);
extern SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID(void *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress(void *, SteamDatagramHostedAddress *);
extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket(void *, int, int, const SteamNetworkingConfigValue_t *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin(void *, SteamDatagramGameCoordinatorServerLogin *, int *, void *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling(void *, ISteamNetworkingConnectionSignaling *, const SteamNetworkingIdentity *, int, int, const SteamNetworkingConfigValue_t *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal(void *, const void *, int, ISteamNetworkingSignalingRecvContext *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest(void *, int *, void *, SteamNetworkingErrMsg *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate(void *, const void *, int, SteamNetworkingErrMsg *);
extern void cppISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity(void *, const SteamNetworkingIdentity *);
extern void cppISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks(void *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP(void *, int);
extern void cppISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP(void *, int, SteamNetworkingFakeIPResult_t *);
extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP(void *, int, int, const SteamNetworkingConfigValue_t *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection(void *, HSteamNetConnection, SteamNetworkingIPAddr *);
extern void *cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort(void *, int);
