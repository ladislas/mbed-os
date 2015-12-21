/*
 * Copyright (c) 2013-2015 ARM Limited. All rights reserved.
 */
#include "config.h"
#include "ns_types.h"
#include "string.h"
#include "ns_trace.h"
#include "NWK_INTERFACE/Include/protocol.h"
#ifdef HAVE_RPL
#include "6LoWPAN/RPL/rpl.h"
#endif
#include "6LoWPAN/ND/icmp.h"
#include "Common_Protocols/icmpv6.h"
#include "Common_Protocols/icmpv6_prefix.h"
#include "Common_Protocols/icmpv6_radv.h"
#include "Common_Protocols/ipv6.h"
#include "ipv6_stack/protocol_ipv6.h"
#include "ip_fsc.h"
#include "ipv6_stack/ipv6_routing_table.h"
#ifdef NVM_BORDER_ROUTER
#include "br_list_nvm_api.h"
#endif
#include "Service_Libs/whiteboard/whiteboard.h"
#include "NWK_INTERFACE/Include/protocol_stats.h"
#include "common_functions.h"
#include "6LoWPAN/ND/nd_router_object.h"
#include "6LoWPAN/Bootstraps/protocol_6lowpan.h"

#define TRACE_GROUP_ICMPTv6  "icmp"

buffer_t *icmpv6_error(buffer_t *buf, protocol_interface_info_entry_t *cur, uint8_t type, uint8_t code, uint32_t aux)
{
    return NULL;
}

#ifndef NO_IPV6_PMTUD

buffer_t *icmpv6_packet_too_big_handler(buffer_t *buf)
{
    return NULL;
}
#endif

buffer_t *icmpv6_echo_request_handler(buffer_t *buf)
{
    return NULL;
}

buffer_t *icmpv6_ns_handler(buffer_t *buf)
{
    return NULL;
}

int icmpv6_slaac_prefix_update(struct protocol_interface_info_entry *cur, uint8_t *prefix_ptr, uint8_t prefix_len, uint32_t valid_lifetime, uint32_t preferred_lifetime)
{
    return 0;
}

if_address_entry_t *icmpv6_slaac_address_add(protocol_interface_info_entry_t *cur, uint8_t *prefix_ptr, uint8_t prefix_len, uint32_t valid_lifetime, uint32_t preferred_lifetime, bool skip_dad, slaac_src_e slaac_src)
{
    return NULL;
}

buffer_t *icmpv6_up(buffer_t *buf)
{
    return NULL;
}

buffer_t *icmpv6_down(buffer_t *buf)
{
    return NULL;
}

buffer_t *icmpv6_build_rs(protocol_interface_info_entry_t *cur, const uint8_t *dest)
{
    return NULL;
}

uint8_t *icmpv6_write_icmp_lla(protocol_interface_info_entry_t *cur, uint8_t *dptr, uint8_t icmp_opt)
{
    return NULL;
}

/*
 * Write either an ICMPv6 Prefix Information Option for a Router Advertisement
 * (RFC4861+6275), or an RPL Prefix Information Option (RFC6550).
 * Same payload, different type/len.
 */
uint8_t *icmpv6_write_prefix_option(const prefix_list_t *prefixes,  uint8_t *dptr, uint8_t rpl_prefix, protocol_interface_info_entry_t *cur)
{
    return NULL;
}

buffer_t *icmpv6_build_ns(protocol_interface_info_entry_t *cur, const uint8_t target_addr[16], const uint8_t *prompting_src_addr, bool unicast, bool unspecified_source, const aro_t *aro)
{
    return NULL;
}

void icmpv6_build_echo_req(protocol_interface_info_entry_t *cur, const uint8_t target_addr[16])
{
}

buffer_t *icmpv6_build_dad(protocol_interface_info_entry_t *cur, buffer_t *buf, uint8_t type, const uint8_t dest_addr[16], const uint8_t eui64[8], const uint8_t reg_addr[16], uint8_t status, uint16_t lifetime)
{
    return NULL;
}

buffer_t *icmpv6_build_na(buffer_t *buf, bool solicited, bool override, const uint8_t target[static 16], const aro_t *aro)
{
    return NULL;
}

buffer_t *icmpv6_na_handler(buffer_t *buf)
{
    return NULL;
}

buffer_t *icmpv6_build_mld(protocol_interface_info_entry_t *cur, buffer_t *buf, uint8_t type, uint16_t max_response_delay, const uint8_t address[static 16])
{
    return NULL;
}

bool icmpv6_options_well_formed(const uint8_t *dptr, uint_fast16_t dlen)
{
    return false;
}

bool icmpv6_options_well_formed_in_buffer(const buffer_t *buf, uint16_t offset)
{
    return false;
}

const uint8_t *icmpv6_find_option(const uint8_t *dptr, uint_fast16_t dlen, uint8_t option, uint8_t optlen)
{
    return NULL;
}

const uint8_t *icmpv6_find_option_in_buffer(const buffer_t *buf, uint_fast16_t offset, uint8_t option, uint8_t optlen)
{
    return NULL;
}
