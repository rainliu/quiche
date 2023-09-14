// Copyright (c) 2023 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by the QUICHE Copybara export script.

#ifdef QUIC_FLAG

QUIC_FLAG(quic_restart_flag_quic_offload_pacing_to_usps2, false)
// A testonly reloadable flag that will always default to false.
QUIC_FLAG(quic_reloadable_flag_quic_testonly_default_false, false)
// A testonly reloadable flag that will always default to true.
QUIC_FLAG(quic_reloadable_flag_quic_testonly_default_true, true)
// A testonly restart flag that will always default to false.
QUIC_FLAG(quic_restart_flag_quic_testonly_default_false, false)
// A testonly restart flag that will always default to true.
QUIC_FLAG(quic_restart_flag_quic_testonly_default_true, true)
// If enabled and a BSUS connection is received, blocks server connections until SETTINGS frame is received.
QUIC_FLAG(quic_reloadable_flag_quic_block_until_settings_received_copt, true)
// If trrue, early return before write control frame in OnCanWrite() if the connection is already closed.
QUIC_FLAG(quic_reloadable_flag_quic_no_write_control_frame_upon_connection_close, true)
// If true and defer_send_in_response_to_packets is enabled, QuicConnection will schedule send alarms at the end of packet processing only if it\'s necessary.
QUIC_FLAG(quic_reloadable_flag_quic_no_send_alarm_unless_necessary, false)
// If true, HTTP/3 client will allow host header in HTTP/3 response.
QUIC_FLAG(quic_reloadable_flag_quic_allow_host_header_in_response, true)
// If true, QUIC server will not respond to gQUIC probing packet(PING + PADDING) but treat it as a regular packet.
QUIC_FLAG(quic_reloadable_flag_quic_ignore_gquic_probing, true)
// If true, QUIC will default enable MTU discovery at server, with a target of 1450 bytes.
QUIC_FLAG(quic_reloadable_flag_quic_enable_mtu_discovery_at_server, false)
// If true, QuicGsoBatchWriter will support release time if it is available and the process has the permission to do so.
QUIC_FLAG(quic_restart_flag_quic_support_release_time_for_gso, false)
// If true, a duplicate NEW_CID frame will be ignore during QUIC packet processing.
QUIC_FLAG(quic_reloadable_flag_quic_ignore_duplicate_new_cid_frame, true)
// If true, ack frequency frame can be sent from server to client.
QUIC_FLAG(quic_reloadable_flag_quic_can_send_ack_frequency, true)
// If true, allow client to enable BBRv2 on server via connection option \'B2ON\'.
QUIC_FLAG(quic_reloadable_flag_quic_allow_client_enabled_bbr_v2, true)
// If true, always bundle qpack decoder data with other frames opportunistically.
QUIC_FLAG(quic_restart_flag_quic_opport_bundle_qpack_decoder_data, false)
// If true, an endpoint does not detect path degrading or blackholing until handshake gets confirmed.
QUIC_FLAG(quic_reloadable_flag_quic_no_path_degrading_before_handshake_confirmed, true)
// If true, check connected at the beginning of TlsHandshaker::SetReadSecret.
QUIC_FLAG(quic_reloadable_flag_quic_check_connected_before_set_read_secret, true)
// If true, consider write blocked when destination CID is required but missing on the default path.
QUIC_FLAG(quic_reloadable_flag_quic_write_is_blocked_when_cid_is_missing, true)
// If true, default-enable 5RTO blachole detection.
QUIC_FLAG(quic_reloadable_flag_quic_default_enable_5rto_blackhole_detection2, true)
// If true, disable QUIC version Q046.
QUIC_FLAG(quic_reloadable_flag_quic_disable_version_q046, true)
// If true, disable QUIC version Q050.
QUIC_FLAG(quic_reloadable_flag_quic_disable_version_q050, true)
// If true, disable QUIC version h3 (RFCv1).
QUIC_FLAG(quic_reloadable_flag_quic_disable_version_rfcv1, false)
// If true, disable QUIC version h3-29.
QUIC_FLAG(quic_reloadable_flag_quic_disable_version_draft_29, false)
// If true, disable blackhole detection on server side.
QUIC_FLAG(quic_reloadable_flag_quic_disable_server_blackhole_detection, false)
// If true, disable resumption when receiving NRES connection option.
QUIC_FLAG(quic_reloadable_flag_quic_enable_disable_resumption, true)
// If true, discard INITIAL packet if the key has been dropped.
QUIC_FLAG(quic_reloadable_flag_quic_discard_initial_packet_with_key_dropped, true)
// If true, dispatcher sends error code QUIC_HANDSHAKE_FAILED_PACKETS_BUFFERED_TOO_LONG when handshake fails due to packets buffered for too long.
QUIC_FLAG(quic_reloadable_flag_quic_new_error_code_when_packets_buffered_too_long, true)
// If true, do not write when client CID is requried but missing in the packet creator.
QUIC_FLAG(quic_reloadable_flag_quic_do_not_write_when_no_client_cid_available, true)
// If true, enable server retransmittable on wire PING.
QUIC_FLAG(quic_reloadable_flag_quic_enable_server_on_wire_ping, true)
// If true, flush ACK frame in QuicConnection::MaybeBundleOpportunistically.
QUIC_FLAG(quic_reloadable_flag_quic_flush_ack_in_maybe_bundle, true)
// If true, include stream information in idle timeout connection close detail.
QUIC_FLAG(quic_reloadable_flag_quic_add_stream_info_to_idle_close_detail, true)
// If true, reject or send error response code upon receiving invalid request or response headers.
QUIC_FLAG(quic_reloadable_flag_quic_act_upon_invalid_header, true)
// If true, remove the non-initial burst in QUIC PacingSender.
QUIC_FLAG(quic_reloadable_flag_quic_pacing_remove_non_initial_burst, false)
// If true, require handshake confirmation for QUIC connections, functionally disabling 0-rtt handshakes.
QUIC_FLAG(quic_reloadable_flag_quic_require_handshake_confirmation, true)
// If true, respect the incremental parameter of each stream in QuicWriteBlockedList.
QUIC_FLAG(quic_reloadable_flag_quic_priority_respect_incremental, false)
// If true, round-robin stream writes instead of batching in QuicWriteBlockedList.
QUIC_FLAG(quic_reloadable_flag_quic_disable_batch_write, false)
// If true, server sends bandwidth eastimate when network is idle for a while.
QUIC_FLAG(quic_restart_flag_quic_enable_sending_bandwidth_estimate_when_network_idle_v2, false)
// If true, set burst token to 2 in cwnd bootstrapping experiment.
QUIC_FLAG(quic_reloadable_flag_quic_conservative_bursts, false)
// If true, use BBRv2 as the default congestion controller. Takes precedence over --quic_default_to_bbr.
QUIC_FLAG(quic_reloadable_flag_quic_default_to_bbr_v2, false)
// If true, use a LRU cache to record client addresses of packets received on server\'s original address.
QUIC_FLAG(quic_reloadable_flag_quic_use_received_client_addresses_cache, true)
// If true, uses conservative cwnd gain and pacing gain when cwnd gets bootstrapped.
QUIC_FLAG(quic_reloadable_flag_quic_conservative_cwnd_and_pacing_gains, false)
// If true, when TicketCrypter fails to encrypt a session ticket, quic::TlsServerHandshaker will send a placeholder ticket, instead of an empty one, to the client.
QUIC_FLAG(quic_reloadable_flag_quic_send_placeholder_ticket_when_encrypt_ticket_fails, true)
// When true, check what sockopt is used to set the IP TOS byte on the platform.
QUIC_FLAG(quic_restart_flag_quic_platform_tos_sockopt, false)
// When true, defaults to BBR congestion control instead of Cubic.
QUIC_FLAG(quic_reloadable_flag_quic_default_to_bbr, false)
// When true, report received ECN markings to the peer. Replaces quic_receive_ecn2 to use correct codepoints.
QUIC_FLAG(quic_restart_flag_quic_receive_ecn3, false)
// When true, sends QUIC packets marked ECT(1).
QUIC_FLAG(quic_reloadable_flag_quic_send_ect1, false)
// When true, support RFC9369.
QUIC_FLAG(quic_reloadable_flag_quic_enable_version_rfcv2, false)
// When true, the BB2U copt causes BBR2 to wait two rounds with out draining the queue before exiting PROBE_UP and BB2S has the same effect in STARTUP.
QUIC_FLAG(quic_reloadable_flag_quic_bbr2_probe_two_rounds, true)
// When true, the BBHI copt causes QUIC BBRv2 to use a simpler algorithm for raising inflight_hi in PROBE_UP.
QUIC_FLAG(quic_reloadable_flag_quic_bbr2_simplify_inflight_hi, true)
// When true, the BBR4 copt sets the extra_acked window to 20 RTTs and BBR5 sets it to 40 RTTs.
QUIC_FLAG(quic_reloadable_flag_quic_bbr2_extra_acked_window, true)

#endif

