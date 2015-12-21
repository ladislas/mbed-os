/*
 * Copyright (c) 2014-2015 ARM Limited. All rights reserved.
 */

/*
 * \file thread_nd.c
 * \brief Add short description about this file!!!
 *
 */

#include "config.h"
#include <string.h>
#include <ns_types.h>
#include <nsdynmemLIB.h>
#include "eventOS_event.h"
#include "common_functions.h"
#include "socket_api.h"
#include "Core/include/socket.h"
#include "NWK_INTERFACE/Include/protocol.h"
#include "Common_Protocols/ipv6.h"
#include "6LoWPAN/Bootstraps/protocol_6lowpan.h"
#include "net_thread_test.h"
#include "libDHCPv6/libDHCPv6.h"
#include "randLIB.h"
#include "ns_trace.h"
#include "6LoWPAN/Thread/thread.h"
#include "6LoWPAN/Thread/thread_routing.h"
#include "6LoWPAN/Thread/thread_nd.h"
#include "6LoWPAN/Thread/thread_resolution_client.h"
#include "6LoWPAN/Thread/thread_resolution_server.h"
#include "Common_Protocols/icmpv6.h"
#include "MLE/mle.h"
#include "dhcp_service_api.h"

#define TRACE_GROUP "thdn"

static thread_resolution_server_addr_query_cb  thread_nd_address_query_lookup;

void thread_nd_service_delete(int8_t interfaceId)
{
}

int thread_nd_service_activate(int8_t interfaceId)
{
    return 0;
}

int thread_nd_service_disable(int8_t interfaceId)
{
    return 0;
}

bool thread_nd_ns_transmit(protocol_interface_info_entry_t *cur, ipv6_neighbour_t *entry,  bool unicast, uint8_t seq)
{
    return false;
}

void thread_nd_flush_neighbour_cache_for_short_addr(protocol_interface_info_entry_t *cur, uint16_t flushee, bool children)
{
}

buffer_t *thread_nd_snoop(protocol_interface_info_entry_t *cur, buffer_t *buf, const sockaddr_t *ll_src, bool *bounce)
{
    return NULL;
}

buffer_t *thread_nd_special_forwarding(protocol_interface_info_entry_t *cur, buffer_t *buf, const sockaddr_t *ll_src, bool *bounce)
{
    return NULL;
}

buffer_t *thread_nd_icmp_handler(protocol_interface_info_entry_t *cur, buffer_t *buf, bool *bounce)
{
    return NULL;
}

int thread_nd_address_registration(protocol_interface_info_entry_t *cur, const uint8_t *ipv6Address, uint16_t mac16, uint16_t panId, const uint8_t *mac64)
{
    return 0;
}

int thread_nd_map_anycast_address(protocol_interface_info_entry_t *cur, uint16_t *addr16)
{
    return -1;
}
