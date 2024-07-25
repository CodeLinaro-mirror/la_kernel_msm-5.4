/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2015-2016, The Linux Foundation. All rights reserved.
 */

#ifndef _EMAC_PTP_H_
#define _EMAC_PTP_H_

int emac_ptp_init(struct net_device *netdev);
void emac_ptp_remove(struct net_device *netdev);
int emac_ptp_config(struct emac_hw *hw);
int emac_ptp_stop(struct emac_hw *hw);
int emac_ptp_set_linkspeed(struct emac_hw *hw, u32 speed);
int emac_tstamp_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd);
void emac_ptp_intr(struct emac_hw *hw);

#endif /* _EMAC_PTP_H_ */
