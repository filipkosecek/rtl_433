/** @file
    Declaration of all available decoders.
*/

#ifndef INCLUDE_RTL_433_DEVICES_H_
#define INCLUDE_RTL_433_DEVICES_H_

#include "r_device.h"

#define DEVICES \
    DECL(silvercrest) \
    DECL(rubicson) \
    DECL(prologue) \
    DECL(waveman) \
    DECL(new_template) \
    DECL(elv_em1000) \
    DECL(elv_ws2000) \
    DECL(lacrossetx) \
    DECL(new_template) \
    DECL(acurite_rain_896) \
    DECL(acurite_th) \
    DECL(oregon_scientific) \
    DECL(mebus433) \
    DECL(intertechno) \
    DECL(newkaku) \
    DECL(alectov1) \
    DECL(cardin) \
    DECL(fineoffset_WH2) \
    DECL(nexus) \
    DECL(ambient_weather) \
    DECL(calibeur_RF104) \
    DECL(X10_RF) \
    DECL(dsc_security) \
    DECL(brennenstuhl_rcs_2044) \
    DECL(gt_wt_02) \
    DECL(danfoss_CFR) \
    DECL(new_template) \
    DECL(new_template) \
    DECL(chuango) \
    DECL(generic_remote) \
    DECL(tfa_twin_plus_303049) \
    DECL(fineoffset_wh1080) \
    DECL(wt450) \
    DECL(lacrossews) \
    DECL(esperanza_ews) \
    DECL(efergy_e2_classic) \
    DECL(kw9015b) \
    DECL(generic_temperature_sensor) \
    DECL(wg_pb12v1) \
    DECL(acurite_txr) \
    DECL(acurite_986) \
    DECL(hideki_ts04) \
    DECL(oil_watchman) \
    DECL(current_cost) \
    DECL(emontx) \
    DECL(ht680) \
    DECL(s3318p) \
    DECL(akhan_100F14) \
    DECL(quhwa) \
    DECL(oregon_scientific_v1) \
    DECL(proove) \
    DECL(bresser_3ch) \
    DECL(springfield) \
    DECL(oregon_scientific_sl109h) \
    DECL(acurite_606) \
    DECL(tfa_pool_thermometer) \
    DECL(kedsum) \
    DECL(blyss) \
    DECL(steelmate) \
    DECL(schraeder) \
    DECL(lightwave_rf) \
    DECL(elro_db286a) \
    DECL(efergy_optical) \
    DECL(hondaremote) \
    DECL(new_template) \
    DECL(new_template) \
    DECL(radiohead_ask) \
    DECL(kerui) \
    DECL(fineoffset_wh1050) \
    DECL(honeywell) \
    DECL(maverick_et73x) \
    DECL(rftech) \
    DECL(lacrosse_tx141x) \
    DECL(acurite_00275rm) \
    DECL(lacrosse_tx35) \
    DECL(lacrosse_tx29) \
    DECL(vaillant_vrt340f) \
    DECL(fineoffset_WH25) \
    DECL(fineoffset_WH0530) \
    DECL(ibis_beacon) \
    DECL(oil_standard) \
    DECL(tpms_citroen) \
    DECL(oil_standard_ask) \
    DECL(thermopro_tp11) \
    DECL(solight_te44) \
    DECL(smoke_gs558) \
    DECL(generic_motion) \
    DECL(tpms_toyota) \
    DECL(tpms_ford) \
    DECL(tpms_renault) \
    DECL(infactory) \
    DECL(ft004b) \
    DECL(fordremote) \
    DECL(philips_aj3650) \
    DECL(schrader_EG53MA4) \
    DECL(nexa) \
    DECL(thermopro_tp12) \
    DECL(ge_coloreffects) \
    DECL(x10_sec) \
    DECL(interlogix) \
    DECL(dish_remote_6_3) \
    DECL(ss_sensor) \
    DECL(sensible_living) \
    DECL(m_bus_mode_c_t) \
    DECL(m_bus_mode_s) \
    DECL(m_bus_mode_r) \
    DECL(m_bus_mode_f) \
    DECL(wssensor) \
    DECL(wt1024) \
    DECL(tpms_pmv107j) \
    DECL(ttx201) \
    DECL(ambientweather_tx8300) \
    DECL(ambientweather_wh31e) \
    DECL(maverick_et73) \
    DECL(honeywell_wdb) \
    DECL(honeywell_wdb_fsk) \
    DECL(esa_energy) \
    DECL(bt_rain) \
    DECL(bresser_5in1) \
    DECL(digitech_xc0324) \
    DECL(opus_xt300) \
    DECL(fs20) \
    DECL(tpms_jansite) \
    DECL(lacrosse_ws7000) \
    DECL(ts_ft002) \
    DECL(companion_wtr001) \
    DECL(ecowitt) \
    DECL(directv) \
    DECL(eurochron) \
    DECL(ikea_sparsnas) \
    DECL(hcs200) \
    DECL(tfa_303196) \
    DECL(rubicson_48659) \
    DECL(holman_ws5029pcm) \
    DECL(philips_aj7010) \
    DECL(esic_emt7110) \
    DECL(gt_tmbbq05) \
    DECL(gt_wt_03) \
    DECL(norgo) \
    DECL(tpms_elantra2012) \
    DECL(auriol_hg02832) \
    DECL(fineoffset_WH51) \
    DECL(holman_ws5029pwm) \
    DECL(archos_tbh) \
    DECL(ws2032) \
    DECL(auriol_afw2a1) \
    DECL(tfa_drop_303233) \
    DECL(dsc_security_ws4945) \
    DECL(ert_scm) \
    DECL(klimalogg) \
    DECL(visonic_powercode) \
    DECL(eurochron_efth800) \
    DECL(cotech_36_7959) \
    DECL(scmplus) \
    DECL(fineoffset_wh1080_fsk) \
    DECL(tpms_abarth124) \
    DECL(missil_ml0757) \
    DECL(sharp_spc775) \
    DECL(insteon) \
    DECL(ert_idm) \
    DECL(ert_netidm) \
    DECL(thermopro_tx2) \
    DECL(acurite_590tx) \
    DECL(secplus_v2) \
    DECL(tfa_30_3221) \
    DECL(lacrosse_breezepro) \
    DECL(somfy_rts) \
    DECL(schrader_SMD3MA4) \
    DECL(nice_flor_s) \
    DECL(lacrosse_wr1) \
    DECL(lacrosse_th3) \
    DECL(bresser_6in1) \
    DECL(bresser_7in1) \
    DECL(ecodhome) \
    DECL(lacrosse_r1) \
    DECL(blueline) \
    DECL(burnhardbbq) \
    DECL(secplus_v1) \
    DECL(cavius) \
    DECL(tpms_jansite_solar) \
    DECL(abmt) \
    DECL(tfa_marbella) \
    DECL(auriol_ahfl) \
    DECL(auriol_aft77b2) \
    DECL(honeywell_cm921) \
    DECL(tpms_hyundai_vdo) \
    DECL(rojaflex) \
    DECL(marlec_solar) \
    DECL(somfy_iohc) \
    DECL(fineoffset_wh31l) \
    DECL(markisol) \
    DECL(govee) \
    DECL(cmr113) \
    DECL(inkbird_ith20r) \

    /* Add new decoders here. */

#define DECL(name) extern r_device name;
DEVICES
#undef DECL

#endif /* INCLUDE_RTL_433_DEVICES_H_ */
