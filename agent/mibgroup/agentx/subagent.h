#ifndef _AGENTX_SUBAGENT_H
#define _AGENTX_SUBAGENT_H

config_require(agentx/protocol)
config_require(agentx/client)
config_require(agentx/agentx_config)

int subagent_pre_init(void);
int handle_agentx_packet(int, struct snmp_session *, int, struct snmp_pdu *, void *);
SNMPCallback agentx_register_callback;
SNMPCallback agentx_unregister_callback;
SNMPAlarmCallback agentx_check_session;

extern struct snmp_session *agentx_session;

#endif /* _AGENTX_SUBAGENT_H */

