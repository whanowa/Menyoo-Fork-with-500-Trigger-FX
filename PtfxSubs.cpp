/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
#include "PtfxSubs.h"

#include "..\macros.h"

#include "..\Menu\Menu.h"
#include "..\Menu\Routine.h"

#include "..\Natives\natives2.h"

#include "..\Submenus\WeaponOptions.h"

namespace sub
{
	namespace Ptfx_catind
	{
#pragma region ptfxvector
		const std::vector<PtfxS> vPTFX
		{
			{ "Starburst FW", "scr_indep_fireworks", "scr_indep_firework_starburst" },
			{ "Fountain FW", "scr_indep_fireworks", "scr_indep_firework_fountain" },
			{ "Shotburst FW", "scr_indep_fireworks", "scr_indep_firework_shotburst" },
			{ "Trailburst FW", "scr_indep_fireworks", "scr_indep_firework_trailburst" },
			{ "NYE FW", "proj_xmas_firework", "scr_firework_xmas_burst_rgw" },
			{ "Spiral FW", "proj_xmas_firework", "scr_firework_xmas_spiral_burst_rgw" },
			{ "Ring FW", "proj_xmas_firework", "scr_firework_xmas_ring_burst_rgw" },
			//{ "Flare Fuse", "core", "proj_flare_fuse" }, // Requires LOOPED_PTFX
			//{ "Flare", "scr_fbi5a", "scr_fbi5a_flare" },
			{ "Magical Flowers", "scr_rcbarry2", "scr_exp_clown" },
			//{ "Magical Stars", "scr_rcbarry2", "scr_clown_bull" },
			{ "Magical Smoke", "scr_rcbarry2", "scr_clown_appears" },
			{ "Magical Smoke 2", "scr_rcbarry2", "scr_clown_death" },
			{ "MoneySwap Smoke", "scr_tplaces", "scr_tplaces_team_swap" },
			{ "Firey Particles", "scr_rcbarry1", "scr_alien_teleport" },
			{ "Disintegration", "scr_rcbarry1", "scr_alien_disintegrate" },
			//{ "Charges", "scr_rcbarry1", "scr_alien_charging" },
			//{ "Beam", "scr_rcbarry1", "scr_alien_beam" },
			//{ "Impact", "scr_rcbarry1", "scr_alien_impact" },
			//{ "Door Heavy Stat", "scr_agencyheista", "scr_agency3a_door_hvy_stat" },
			//{ "Door Heavy Trigger", "scr_agencyheista", "scr_agency3a_door_hvy_trig" },
			//{ "Dry Ice", "scr_fbi5a", "scr_fbi5_dry_ice" },
			//{ "Blaze", "scr_agencyheist", "scr_fbi_ext_blaze" },
			{ "Mop Drips", "scr_agencyheist", "scr_fbi_mop_drips" },
			{ "Mop Squeeze", "scr_agencyheist", "scr_fbi_mop_squeeze" },
			//{ "Large Water Splash", "scr_exile3", "scr_ex3_water_dinghy_wash" },
			{ "Water Splash", "scr_fbi5a", "scr_fbi5_ped_water_splash" },
			//{ "Water Bubbles", "scr_fbi5a", "water_splash_ped_bubbles" },
			//{ "Puke", "scr_family5", "scr_trev_puke" },
			{ "Puke", "scr_familyscenem", "scr_trev_puke" },
			{ "Puke Ambient", "scr_familyscenem", "scr_trev_amb_puke" },
			//{ "Blood", "scr_finalec2", "scr_finale2_blood_entry" },
			//{ "Autopsy Blood", "scr_agencyheist", "scr_fbi_autopsy_blood" },
			{ "Blood Stab", "scr_michael2", "scr_mich2_blood_stab" },
			{ "Blood Impact", "scr_solomon3", "scr_trev4_747_blood_impact" },
			{ "Blood Spasm", "scr_michael2", "scr_abattoir_ped_sliced" },
			{ "Tyre Spiked", "scr_bigscore", "scr_bigscore_tyre_spiked" },
			{ "Tyre Smoke", "scr_mp_creator", "scr_mp_plane_landing_tyre_smoke" },
			//{ "Landing Tyre Smoke", "scr_fm_intro_cut_dev", "scr_mp_plane_landing_tyre_smoke" },
			{ "Gold Ball Trail", "scr_minigamegolf", "scr_golf_ball_trail" },
			{ "Sniper Impact", "scr_martin1", "scr_sol1_sniper_impact" },
			{ "Dirt Throw", "core_snow", "cs_mich1_spade_dirt_throw" },
			{ "Camera", "scr_rcpaparazzo1", "scr_rcpap1_camera" },
			//{ "Fire Ring", "scr_ie_export", "scr_ie_export_fire_ring" },
			{ "Meth Pipe Smoke", "scr_familyscenem", "scr_meth_pipe_smoke" },
			{ "Pipefall Debris", "scr_reconstructionaccident", "scr_reconstruct_pipefall_debris" },
			{ "Pipe Impact", "scr_reconstructionaccident", "scr_reconstruct_pipe_impact" },
			//{ "Sparking Generator", "scr_reconstructionaccident", "scr_sparking_generator" },
			{ "Burial Dirt", "scr_reburials", "scr_burial_dirt" },
			{ "Wheel Burnout", "scr_recartheft", "scr_wheel_burnout" },
			//{ "Rescue Fire", "scr_recrash_rescue", "scr_recrash_rescue_fire" },
			{ "Bank Notes", "scr_paletoscore", "scr_paleto_banknotes" },
			//{ "Blow Torch", "scr_paletoscore", "cs_paleto_blowtorch" },
			//{ "Trailer Splash", "scr_tevor1", "scr_trev1_trailer_splash" },
			//{ "Trailer Wires", "scr_tevor1", "scr_trev1_trailer_wires" },
			//{ "Crash Dust", "scr_tevor1", "scr_trev1_crash_dust" },
			//{ "Wheelspin Dirt", "scr_tevor1", "scr_trev1_wheelspin_dirt" },
			//{ "Train Sparks", "scr_oddjobtowtruck", "scr_ojtt_train_sparks" },
			//{ "Hotbox Trail", "scr_oddjobtaxi", "scr_ojtaxi_hotbox_trail" },
			{ "Engine Debris", "scr_solomon3", "scr_trev4_747_engine_debris" },
			{ "Car Impact", "scr_exile2", "scr_ex2_car_impact" },
			{ "Helicopter Explosion", "scr_agencyheistb", "scr_agency3b_heli_expl" },
			{ "Explosion Light", "scr_josh3", "scr_josh3_light_explosion" },
			{ "Building Story Explosion", "scr_agencyheist", "scr_fbi_exp_building" },
			{ "Drug Plane Explosion", "scr_oddjobtraffickingair", "scr_drug_grd_plane_exp" },
			{ "Drug Train Explosion", "scr_oddjobtraffickingair", "scr_drug_grd_train_exp" },
			{ "Water Explosion", "scr_oddjobtraffickingair", "scr_ojdg4_water_exp" },
			{ "Boat Explosion", "scr_oddjobtraffickingair", "scr_ojdg4_boat_exp" },
			//{ "Moving Cloud", "scr_exile1", "scr_ex1_moving_cloud" },
			//{ "Jeep Engine Fire", "scr_exile2", "scr_ex2_jeep_engine_fire" },
			//{ "Cargo Engine Trail", "scr_exile1", "scr_ex1_cargo_engine_trail" },
			{ "Cargo Engine Burst", "scr_exile1", "scr_ex1_cargo_engine_burst" },
			//{ "Cargo Smoke", "scr_exile1", "scr_ex1_cargo_smoke" },
			//{ "Cargo Fire", "scr_exile1", "cs_ex1_cargo_fire" },
			//{ "Cargo Debris", "scr_exile1", "scr_ex1_cargo_debris" },
			{ "Plane Explosion", "scr_exile1", "scr_ex1_plane_exp" },
			{ "Dust Impact", "scr_exile1", "scr_ex1_dust_impact" },
			{ "Car Impact Dust", "scr_finale1", "scr_fin_trev_car_impact" },
			//{ "Dust Settle", "scr_exile1", "scr_ex1_dust_settle" },
			//{ "Sparking Wires", "scr_exile1", "cs_ex1_sparking_wires_sm" },
			{ "Bike Burnout", "scr_jewelheist", "scr_jew_bike_burnout" },
			{ "Cab Smash", "scr_jewelheist", "scr_jewel_cab_smash" },
			{ "Wheel Burnout", "scr_carsteal4", "scr_carsteal4_wheel_burnout" },
			{ "Muzzle Flash", "scr_carsteal4", "scr_carsteal5_car_muzzle_flash" },
			{ "Flame", "core", "ent_sht_flame" },
			//{ "Fire Trail", "scr_martin1", "scr_sol1_fire_trail" },
			//{ "Falling Debris", "scr_agencyheist", "scr_fbi_falling_debris" },
			//{ "Building Smoke", "scr_agencyheistb", "scr_agency3b_blding_smoke" },
			{ "Breach Smoke", "scr_agencyheist", "scr_fbi_dd_breach_smoke" },
			{ "Electric Box Smoke", "scr_agencyheistb", "scr_agency3b_elec_box" },
			//{ "Shot Chopper", "scr_agencyheistb", "scr_agency3b_shot_chopper" },
			//{ "Wood Splinter", "scr_agencyheistb", "scr_agency3b_wood_splinter" },
			//{ "Rooftop Explosion", "scr_agencyheist", "scr_fbi_ext_rooftop" },
			{ "Explosion Fire Trail", "scr_agencyheistb", "scr_agency3b_heli_exp_trail" },
			//{ "RPG Trail", "scr_agencyheistb", "scr_agency3b_proj_rpg_trail" },
			//{ "Lighter Flame", "scr_mp_house", "scr_sh_lighter_flame" },
			{ "Petrol Fire", "scr_finale1", "scr_fin_fire_petrol_trev" },
			//{ "Petrol Fire 2", "ent_damage", "ent_sht_petrol_fire" },
			{ "Sparks", "scr_fbi4", "scr_fbi4_trucks_crash" },
			{ "Lighter Sparks", "scr_mp_house", "scr_sh_lighter_sparks" },
			{ "Blue Sparks", "scr_trevor1", "scr_trev1_trailer_boosh" },
			{ "Purplish Sparks", "scr_family4", "scr_fam4_trailer_sparks" },
			{ "Slipstream Formation", "scr_bike_adversary", "scr_adversary_slipstream_formation" },
			{ "Sodium Pour", "scr_bike_business", "scr_bike_meth_sodium_pour" },
			{ "Propylene Pour", "scr_bike_business", "scr_bike_meth_propylene_pour" },
			{ "Weed Smoke", "scr_bike_contraband", "scr_bike_truck_weed_smoke_cabin" },
		};


		const std::vector<PtfxS> vPTFX2
		{
			{ "bang concrete", "core", "bang_concrete" },
			{ "bul brick", "core", "bul_brick" },
			{ "bul bushes", "core", "bul_bushes" },
			{ "bul cardboard", "core", "bul_cardboard" },
			{ "bul chickenfarm", "core", "bul_chickenfarm" },
			{ "bul concrete heli", "core", "bul_concrete_heli" },
			{ "bul dirt", "core", "bul_dirt" },
			{ "bul foam", "core", "bul_foam" },
			{ "bul glass shotgun", "core", "bul_glass_shotgun" },
			{ "bul glass", "core", "bul_glass" },
			{ "bul grass", "core", "bul_grass" },
			{ "bul gravel", "core", "bul_gravel" },
			{ "bul hay", "core", "bul_hay" },
			{ "bul leaves", "core", "bul_leaves" },
			{ "bul paper", "core", "bul_paper" },
			{ "bul plaster brittle", "core", "bul_plaster_brittle" },
			{ "bul tarmac", "core", "bul_tarmac" },
			{ "bul wood splinter", "cut_pacific_fin", "bul_wood_splinter" },
			{ "cs bul concrete", "cut_michael2", "cs_bul_concrete" },
			{ "cs ex1 plane break R", "cut_exile1", "cs_ex1_plane_break_R" },
			{ "cs fam3 brk pot plant", "cut_family3", "cs_fam3_brk_pot_plant" },
			{ "cs fam4 shot chandelier", "cut_family4", "cs_fam4_shot_chandelier" },
			{ "cs lest1 phone exp", "cut_lester1b", "cs_lest1_phone_exp" },
			{ "cs mich1 spade dirt throw", "cut_michael1", "cs_mich1_spade_dirt_throw" },
			{ "cs mich2 mud flower", "cut_michael2", "cs_mich2_mud_flower" },
			{ "cs pro glass smash", "cut_prologue", "cs_pro_glass_smash" },
			{ "cs rcpap3 litter", "cut_rcpaparazzo1", "cs_rcpap3_litter" },
			{ "cs sol3b tarmac exp", "cut_solomon3b", "cs_sol3b_tarmac_exp" },
			{ "cs trev5 door splinter", "cut_trevor5", "cs_trev5_door_splinter" },
			{ "ent amb stoner landing", "core", "ent_amb_stoner_landing" },
			{ "ent anim gardener plant", "core", "ent_anim_gardener_plant" },
			{ "ent anim pneumatic drill", "core", "ent_anim_pneumatic_drill" },
			{ "ent brk cactus", "core", "ent_brk_cactus" },
			{ "ent brk coins", "core", "ent_brk_coins" },
			{ "ent brk tree trunk bark", "core", "ent_brk_tree_trunk_bark" },
			{ "ent brk wood planks", "core", "ent_brk_wood_planks" },
			{ "ent dst bread", "core", "ent_dst_bread" },
			{ "ent dst casino chips", "core", "ent_dst_casino_chips" },
			{ "ent dst ceramics", "core", "ent_dst_ceramics" },
			{ "ent dst cig packets", "core", "ent_dst_cig_packets" },
			{ "ent dst concrete large", "core", "ent_dst_concrete_large" },
			{ "ent dst crispbags", "core", "ent_dst_crispbags" },
			{ "ent dst egg mulch", "core", "ent_dst_egg_mulch" },
			{ "ent dst gen cardboard", "core", "ent_dst_gen_cardboard" },
			{ "ent dst gen choc", "core", "ent_dst_gen_choc" },
			{ "ent dst gen food", "core", "ent_dst_gen_food" },
			{ "ent dst gen gobstop", "core", "ent_dst_gen_gobstop" },
			{ "ent dst gen paper", "core", "ent_dst_gen_paper" },
			{ "ent dst glass bulb", "core", "ent_dst_glass_bulb" },
			{ "ent dst hobo trolley", "core", "ent_dst_hobo_trolley" },
			{ "ent dst inflate ball clr", "core", "ent_dst_inflate_ball_clr" },
			{ "ent dst inflate ball", "core", "ent_dst_inflate_ball" },
			{ "ent dst inflate lilo", "core", "ent_dst_inflate_lilo" },
			{ "ent dst pineapple", "scr_player_timetable_scene", "ent_dst_pineapple" },
			{ "ent dst plant leaves", "core", "ent_dst_plant_leaves" },
			{ "ent dst polystyrene", "core", "ent_dst_polystyrene" },
			{ "ent dst pumpkin", "core", "ent_dst_pumpkin" },
			{ "ent dst rocks", "core", "ent_dst_rocks" },
			{ "ent dst wet sand", "core", "ent_dst_wet_sand" },
			{ "ent ray arm3 paper", "des_car_show_room", "ent_ray_arm3_paper" },
			{ "ent ray arm3 wood splinter", "des_car_show_room", "ent_ray_arm3_wood_splinter" },
			{ "ent ray fam3 windows", "des_stilthouse", "ent_ray_fam3_windows" },
			{ "ent ray fam4 fruit bowl", "des_fruit_bowl", "ent_ray_fam4_fruit_bowl" },
			{ "ent ray fbi4 wall debris", "des_smash2", "ent_ray_fbi4_wall_debris" },
			{ "ent ray hospital glass", "des_hospitaldoors", "ent_ray_hospital_glass" },
			{ "ent ray pro door ceiling debris", "des_prologue_door", "ent_ray_pro_door_ceiling_debris" },//new
			{ "ent ray trailerpark window", "des_trailerpark", "ent_ray_trailerpark_window" },
			{ "ent sht cactus", "core", "ent_sht_cactus" },
			{ "ent sht dust", "core", "ent_sht_dust" },
			{ "exp air snowball", "proj_xmas_snowball", "exp_air_snowball" },
			{ "mel glass", "core", "mel_glass" },
			{ "scr agency atrium silt", "scr_agencyheistb", "scr_agency_atrium_silt" },//new
			{ "scr burial dirt", "scr_reburials", "scr_burial_dirt" },
			{ "scr ch finale hit art", "scr_ch_finale", "scr_ch_finale_hit_art" },
			{ "scr ch finale hit diamond", "scr_ch_finale", "scr_ch_finale_hit_diamond" },
			{ "scr ch finale hit gold", "scr_ch_finale", "scr_ch_finale_hit_gold" },
			{ "scr jewel cab smash", "scr_jewelheist", "scr_jewel_cab_smash" },
			{ "scr pro door splinters", "scr_prologue", "scr_pro_door_splinters" },
			{ "scr pts guitar break", "scr_player_timetable_scene", "scr_pts_guitar_break" },
			{ "scr sr dst cardboard", "scr_sr_adversary", "scr_sr_dst_cardboard" },
			{ "veh wheel puncture", "core", "veh_wheel_puncture" },
			{ "scr_sv_cbr_glass_smash", "scr_sv_cbr", "scr_sv_cbr_glass_smash" }, //стекло
			{ "cut_xm3_rpg_explosion_debris", "cut_xm3", "cut_xm3_rpg_explosion_debris" },
			{ "cs_sv_cbr_litter", "cut_sv", "cs_sv_cbr_litter" },
			{ "cut_xm3_glass_break", "cut_xm3", "cut_xm3_glass_break" }, //стекло
			{ "cut_sec_golfclub_break", "cut_sec", "cut_sec_golfclub_break" }, //дерево
			{ "cut_sec_golf_strike", "cut_sec", "cut_sec_golf_strike" }, //трава
			{ "cut_xm3_crate_break_splinters", "cut_xm3", "cut_xm3_crate_break_splinters" }, //дерево
			{ "cut_g9_mig_break_dust", "cut_g9_mig", "cut_g9_mig_break_dust" }, //дым
			{ "cut_xm3_impact_dust", "cut_xm3", "cut_xm3_impact_dust" }, //дым
			{ "cs_sv_yard_trip_dust_chest", "cut_sv", "cs_sv_yard_trip_dust_chest" }, //дым
			{ "cs_sv_yard_trip_dust_knee", "cut_sv", "cs_sv_yard_trip_dust_knee" }, //дым
			{ "cs_sv_yard_trip_dust_foot", "cut_sv", "cs_sv_yard_trip_dust_foot" }, //дым
			{ "scr_sv_drag_shift_bad", "scr_sv_drag", "scr_sv_drag_shift_bad" }, //дым
			{ "scr_sv_drag_shift_ok", "scr_sv_drag", "scr_sv_drag_shift_ok" }, //дым
		};
		
		const std::vector<PtfxS> vPTFX3
		{
			{ "bul snow", "core_snow", "bul_snow" },
			{ "cs cig exhale mouth finale", "cut_finale1", "cs_cig_exhale_mouth_finale" },
			{ "cs cig smoke stub out", "cut_michael1", "cs_cig_smoke_stub_out" },
			{ "cs fam2 foot sand", "cut_family2", "cs_fam2_foot_sand" },
			{ "cs finale2 dust cloud", "cut_finale1", "cs_finale2_dust_cloud" },
			{ "cs frank1 coke impact", "cut_franklin1", "cs_frank1_coke_impact" },
			{ "cs frank1 coke sniff", "cut_franklin1", "cs_frank1_coke_sniff" },
			{ "cs franklin1 dry wall", "cut_franklin1", "cs_franklin1_dry_wall" },
			{ "cs pro ped breath", "cut_prologue", "cs_pro_ped_breath" },
			{ "cs trev1 crackpipe smoke", "cut_trevor1", "cs_trev1_crackpipe_smoke" },
			{ "cs trev1 dusty kick", "cut_trevor1", "cs_trev1_dusty_kick" },
			{ "cs trev3 dusty body", "cut_trevor3", "cs_trev3_dusty_body" },
			{ "cs xm cig exhale mouth", "cut_sil", "cs_xm_cig_exhale_mouth" },
			{ "ent anim cig exhale mth", "scr_mp_controller", "ent_anim_cig_exhale_mth" },
			{ "ent brk gate smoke", "core", "ent_brk_gate_smoke" },
			{ "ent ray big drill cloud", "des_bigjobdrill", "ent_ray_big_drill_cloud" },
			{ "ent ray ch2 farm dust terrain", "des_farmhouse", "ent_ray_ch2_farm_dust_terrain" },
			{ "ent ray fam3 dust cloud", "des_stilthouse", "ent_ray_fam3_dust_cloud" },
			{ "ent ray fbi4 wall dust", "des_smash2", "ent_ray_fbi4_wall_dust" },
			{ "ent ray fbi5a ramp dust impact", "des_fib_floor", "ent_ray_fbi5a_ramp_dust_impact" },
			{ "ent ray meth dust settle", "scr_trevor1", "ent_ray_meth_dust_settle" },
			{ "ent ray meth dust terrain", "des_methtrailer", "ent_ray_meth_dust_terrain" },
			{ "ent ray paleto gas dust terrain", "des_gas_station", "ent_ray_paleto_gas_dust_terrain" },
			{ "ent ray pro door steam", "des_vaultdoor", "ent_ray_pro_door_steam" },
			{ "ent ray pro tree crash snow slush", "des_pro_tree_crash", "ent_ray_pro_tree_crash_snow_slush" },
			{ "ent ray pro tree crash snow", "des_pro_tree_crash", "ent_ray_pro_tree_crash_snow" },
			{ "ent ray trailerpark dust terrain", "des_trailerpark", "ent_ray_trailerpark_dust_terrain" },
			{ "ent ray train smoke", "des_train_crash", "ent_ray_train_smoke" },
			{ "ent sht extinguisher", "core", "ent_sht_extinguisher" },
			{ "exp extinguisher", "core", "exp_extinguisher" },
			{ "exp grd petrol pump post", "core", "exp_grd_petrol_pump_post" },
			{ "exp grd plane post", "core", "exp_grd_plane_post" },
			{ "fire ped smoulder", "core", "fire_ped_smoulder" },
			{ "scr agency heli slide dust", "scr_agencyheistb", "scr_agency_heli_slide_dust" },
			{ "scr agency3a door hvy trig", "scr_agencyheist", "scr_agency3a_door_hvy_trig" },
			{ "scr agency3b elec box", "scr_agencyheistb", "scr_agency3b_elec_box" },
			{ "scr ch finale drill out", "scr_ch_finale", "scr_ch_finale_drill_out" },
			{ "scr chin1 freezer gust", "scr_chinese2", "scr_chin1_freezer_gust" },
			{ "scr dst cocaine", "scr_ie_svm_technical2", "scr_dst_cocaine" },
			{ "scr ex1 dust impact", "scr_exile1", "scr_ex1_dust_impact" },
			{ "scr indep launcher sparkle spawn", "proj_indep_firework", "scr_indep_launcher_sparkle_spawn" },
			{ "scr jew bike burnout", "scr_jewelheist", "scr_jew_bike_burnout" },
			{ "scr meth pipe smoke", "scr_familyscenem", "scr_meth_pipe_smoke" },
			{ "scr mp dust cloud", "scr_mp_creator", "scr_mp_dust_cloud" },
			{ "scr mp plane landing tyre smoke", "scr_mp_creator", "scr_mp_plane_landing_tyre_smoke" },
			{ "scr paleto doorway smoke", "scr_paletoscore", "scr_paleto_doorway_smoke" },
			{ "scr pro door snow", "scr_prologue", "scr_pro_door_snow" },
			{ "scr reconstruct pipe impact", "scr_reconstructionaccident", "scr_reconstruct_pipe_impact" },
			{ "scr respray smoke", "scr_paintnspray", "scr_respray_smoke" },//new
			{ "scr wheel burnout", "scr_recartheft", "scr_wheel_burnout" },
			{ "scr xm riotvan extinguish", "scr_xm_riotvan", "scr_xm_riotvan_extinguish" },
			{ "sp fbi collapse debris", "scr_agencyheistb", "sp_fbi_collapse_debris" },
			{ "veh respray smoke", "core", "veh_respray_smoke" },
			{ "weap smoke grenade", "core", "weap_smoke_grenade" },
			{ "muz_sv_sl", "weap_sv_sl", "muz_sv_sl" }, //снег
			{ "muz_sv_sl_empty", "weap_sv_sl", "muz_sv_sl_empty" },//снег
			{ "cut_tn_shop_drug_dust", "cut_tn", "cut_tn_shop_drug_dust" }, //пыль
			{ "scr_tn_ia_dig_dirt_left", "scr_tn_ia", "scr_tn_ia_dig_dirt_left" }, //пыль
			{ "scr_tn_ia_dig_dirt_right", "scr_tn_ia", "scr_tn_ia_dig_dirt_right" }, //пыль
			{ "scr_tn_ia_dig_dirt_forward", "scr_tn_ia", "scr_tn_ia_dig_dirt_forward" }, //пыль
			{ "ent_dst_xt_snowman", "core", "ent_dst_xt_snowman" },
			{ "cut_sec_cig_weed_smoke_exhale", "cut_sec", "cut_sec_cig_weed_smoke_exhale" }, //дым
			{ "scr_sec_weed_smoke_exhale", "scr_sec", "scr_sec_weed_smoke_exhale" }, //дым
			{ "cut_g9_mig_disturb_dust", "cut_g9_mig", "cut_g9_mig_disturb_dust" }, //дым
			{ "cut_xm3_exhale_smoke", "cut_xm3", "cut_xm3_exhale_smoke" }, //дым
			{ "cut_xm3_plane_wheel_skid", "cut_xm3", "cut_xm3_plane_wheel_skid" }, //дым
			{ "cs_sv_rr_door_gas", "cut_sv", "cs_sv_rr_door_gas" }, //дым
		};

		const std::vector<PtfxS> vPTFX4
		{
			{ "cs alien light bed", "cut_family5", "cs_alien_light_bed" },
			{ "cs trev3 soap suds", "cut_trevor3", "cs_trev3_soap_suds" },
			{ "ped talk water", "scr_fbi5a", "ped_talk_water" },
			{ "scr adversary gunsmith weap change", "scr_bike_adversary", "scr_adversary_gunsmith_weap_change" },
			{ "scr alien disintegrate", "scr_rcbarry1", "scr_alien_disintegrate" },
			{ "scr alien impact bul", "scr_rcbarry1", "scr_alien_impact_bul" },
			{ "scr alien teleport", "scr_rcbarry1", "scr_alien_teleport" },
			{ "scr clown bul", "scr_rcbarry2", "scr_clown_bul" },
			{ "scr exp clown trails", "scr_rcbarry2", "scr_exp_clown_trails" },
			{ "scr exp clown", "scr_rcbarry2", "scr_exp_clown" },
			{ "scr firework indep repeat burst rwb", "proj_indep_firework_v2", "scr_firework_indep_repeat_burst_rwb" },
			{ "scr gr warp in", "scr_gr_def", "scr_gr_warp_in" },//new
			{ "scr impexp tw take zone", "scr_ie_tw", "scr_impexp_tw_take_zone" },
			{ "scr indep firework burst spawn", "scr_indep_fireworks", "scr_indep_firework_burst_spawn" },
			{ "scr indep firework fountain", "scr_indep_fireworks", "scr_indep_firework_fountain" },
			{ "scr indep firework grd burst", "proj_indep_firework", "scr_indep_firework_grd_burst" },
			{ "scr indep firework shotburst", "scr_indep_fireworks", "scr_indep_firework_shotburst" },
			{ "scr indep firework starburst", "scr_indep_fireworks", "scr_indep_firework_starburst" },
			{ "scr indep firework trail spawn", "scr_indep_fireworks", "scr_indep_firework_trail_spawn" },
			{ "scr indep firework trailburst spawn", "scr_indep_fireworks", "scr_indep_firework_trailburst_spawn" },
			{ "scr indep firework trailburst", "scr_indep_fireworks", "scr_indep_firework_trailburst" },
			{ "scr mich4 firework burst spawn", "scr_rcpaparazzo1", "scr_mich4_firework_burst_spawn" },
			{ "scr mich4 firework trailburst spawn", "scr_rcpaparazzo1", "scr_mich4_firework_trailburst_spawn" },
			{ "scr mich4 firework trailburst", "scr_rcpaparazzo1", "scr_mich4_firework_trailburst" },
			{ "scr powerplay beast appear", "scr_powerplay", "scr_powerplay_beast_appear" },
			{ "scr sm con trans fp", "scr_sm_trans", "scr_sm_con_trans_fp" },//new
			{ "scr sm con trans", "scr_sm_trans", "scr_sm_con_trans" },
			{ "scr sm counter chaff", "scr_sm_counter", "scr_sm_counter_chaff" },
			{ "scr sr tr car change", "scr_sr_tr", "scr_sr_tr_car_change" },
			{ "scr stunts shotburst spawn", "scr_stunts", "scr_stunts_shotburst_spawn" },
			{ "scr stunts shotburst", "scr_stunts", "scr_stunts_shotburst" },
			{ "scr sum q3 block destroy charge", "scr_sum_q3", "scr_sum_q3_block_destroy_charge" },
			{ "scr xmas firework burst fizzle", "proj_indep_firework_v2", "scr_xmas_firework_burst_fizzle" },
			{ "scr xs confetti burst", "scr_xs_celebration", "scr_xs_confetti_burst" },
			{ "scr xs dr emp", "scr_xs_dr", "scr_xs_dr_emp" },
			{ "scr xs exp mine sf", "scr_xs_props", "scr_xs_exp_mine_sf" },
			{ "veh plane eject", "core", "veh_plane_eject" },
			{ "veh ruiner hop", "veh_impexp_ruiner", "veh_ruiner_hop" },
			{ "scr_sum2_hal_rider_weak_greyblack", "scr_sum2_hal", "scr_sum2_hal_rider_weak_greyblack" },
			{ "scr_sum2_hal_rider_death_green", "scr_sum2_hal",  "scr_sum2_hal_rider_death_green" }, //дым
			{ "scr_sum2_hal_rider_death_blue", "scr_sum2_hal", "scr_sum2_hal_rider_death_blue" }, //дым
			{ "scr_sum2_hal_hunted_death", "scr_sum2_hal", "scr_sum2_hal_hunted_death" }, //дым
			{ "sp_sum2_hal_rider_death_trail_greyblack", "scr_sum2_hal", "sp_sum2_hal_rider_death_trail_greyblack" }, //дым
			{ "scr_sum2_hal_rider_death_greyblack", "scr_sum2_hal", "scr_sum2_hal_rider_death_greyblack" }, //дым
			{ "sp_sum2_hal_rider_death_trail_blue", "scr_sum2_hal", "sp_sum2_hal_rider_death_trail_blue" }, //дым
			{ "scr_sum2_hal_rider_weak_orange", "scr_sum2_hal", "scr_sum2_hal_rider_weak_orange" }, //дым
			{ "sp_sum2_hal_rider_death_trail_green", "scr_sum2_hal", "sp_sum2_hal_rider_death_trail_green" }, //дым
			{ "scr_sum2_hal_rider_weak_green", "scr_sum2_hal", "scr_sum2_hal_rider_weak_green" }, //дым
			{ "scr_sum2_hal_rider_death_orange", "scr_sum2_hal", "scr_sum2_hal_rider_death_orange" }, //дым
			{ "scr_sum2_hal_hunted_respawn", "scr_sum2_hal", "scr_sum2_hal_hunted_respawn" }, //дым
			{ "scr_sum2_hal_rider_weak_blue", "scr_sum2_hal", "scr_sum2_hal_rider_weak_blue" }, //дым
			{ "scr_xt_mug_appear", "scr_xt_mugger", "scr_xt_mug_appear" }, //дым
			{ "scr_xt_vanish_smoke", "scr_xt_trip", "scr_xt_vanish_smoke" }, //дым
			{ "scr_xt_appear_smoke", "scr_xt_trip", "scr_xt_appear_smoke" }, //дым
			{ "scr_xt_trip_doc_smoke", "scr_xt_trip", "scr_xt_trip_doc_smoke" }, //дым
			{ "scr_xt_trip_eject_gun", "scr_xt_trip", "scr_xt_trip_eject_gun" }, //дым
			{ "scr_xt_trip_bul_impact", "scr_xt_trip", "scr_xt_trip_bul_impact" }, //дым
			{ "scr_xt_trip_muz_gun", "scr_xt_trip", "scr_xt_trip_muz_gun" }, //дым
			{ "scr_xt_trip_clown_death", "scr_xt_trip", "scr_xt_trip_clown_death" }, //дым
			{ "scr_xt_trip_muz_musket", "scr_xt_trip", "scr_xt_trip_muz_musket" }, //дым
			{ "sp_xt_appear_smoke_trails", "scr_xt_trip", "sp_xt_appear_smoke_trails" }, //дым
			{ "scr_xt_trip_rabbit_death", "scr_xt_trip", "scr_xt_trip_rabbit_death" }, //дым
			{ "scr_srr_hal_appear_smoke_mtlion", "scr_srr_hal", "scr_srr_hal_appear_smoke_mtlion" }, //дым
			{ "scr_srr_hal_appear_smoke_pug", "scr_srr_hal", "scr_srr_hal_appear_smoke_pug" }, //дым
			{ "scr_srr_hal_appear_smoke_boar", "scr_srr_hal", "scr_srr_hal_appear_smoke_boar" }, //дым
			{ "scr_srr_hal_appear_smoke_coyote", "scr_srr_hal", "scr_srr_hal_appear_smoke_coyote" }, //дым
			{ "scr_srr_hal_appear_smoke_deer", "scr_srr_hal", "scr_srr_hal_appear_smoke_deer" }, //дым
			{ "scr_sv_re_truck_smoke", "scr_sv_re", "scr_sv_re_truck_smoke" }, //дым
			{ "scr_sv_drift_cc_trigger", "scr_sv_drift", "scr_sv_drift_cc_trigger" }, //дым
		};

		const std::vector<PtfxS> vPTFX5
		{
			{ "bang carmetal", "core", "bang_carmetal" },
			{ "bang hydraulics", "core", "bang_hydraulics" },
			{ "bang metal", "core", "bang_metal" },
			{ "blood stungun", "core", "blood_stungun" },
			{ "bul stungun metal", "core", "bul_stungun_metal" },
			{ "cs ex1 plane impacts", "cut_exile1", "cs_ex1_plane_impacts" },
			{ "cs ex1 plane spark L", "cut_exile1", "cs_ex1_plane_spark_L" },
			{ "cs ex1 plane spark R", "cut_exile1", "cs_ex1_plane_spark_R" },
			{ "cs fin bul carmetal", "cut_finale1", "cs_fin_bul_carmetal" },
			{ "cs pro car impact", "cut_prologue", "cs_pro_car_impact" },
			{ "ent amb elec crackle sp", "core", "ent_amb_elec_crackle_sp" },
			{ "ent amb fly zapped spawned", "core", "ent_amb_fly_zapped_spawned" },
			{ "ent anim lighter sparks plane", "scr_mp_cig_plane", "ent_anim_lighter_sparks_plane" },
			{ "ent brk lamppost base", "core", "ent_brk_lamppost_base" },
			{ "ent brk sparking wires", "core", "ent_brk_sparking_wires" },
			{ "ent dst electrical", "core", "ent_dst_electrical" },
			{ "ent ray fam2 tv smash", "des_tv_smash", "ent_ray_fam2_tv_smash" },
			{ "ent ray fbi4 sparks line", "des_smash2", "ent_ray_fbi4_sparks_line" },
			{ "ent ray fbi5a ceiling cable", "des_fib_ceiling", "ent_ray_fbi5a_ceiling_cable" },
			{ "ent ray fbi5a ramp metal imp", "des_fib_floor", "ent_ray_fbi5a_ramp_metal_imp" },
			{ "ent ray scaf spark bursts", "des_scaffolding", "ent_ray_scaf_spark_bursts" },
			{ "ent ray shipwreck pipe impacts", "des_shipwreck", "ent_ray_shipwreck_pipe_impacts" },
			{ "ent ray shipwreck sparks", "des_shipwreck", "ent_ray_shipwreck_sparks" },
			{ "ent ray train debris", "des_train_crash", "ent_ray_train_debris" },
			{ "ent ray train sparks", "des_train_crash", "ent_ray_train_sparks" },
			{ "ent sht electrical box", "core", "ent_sht_electrical_box" },
			{ "ent sht telegraph pole", "core", "ent_sht_telegraph_pole" },
			{ "exp grd sticky sp", "core", "exp_grd_sticky_sp" },
			{ "scr agency3b linger smoke", "scr_agencyheistb", "scr_agency3b_linger_smoke" },
			{ "scr ch finale fusebox overload", "scr_ch_finale", "scr_ch_finale_fusebox_overload" },
			{ "scr fam4 trailer sparks", "scr_family4", "scr_fam4_trailer_sparks" },
			{ "scr fbi3 elec sparks", "scr_fbi3", "scr_fbi3_elec_sparks" },
			{ "scr paleto box sparks", "scr_paletoscore", "scr_paleto_box_sparks" },
			{ "scr xm dst elec crackle", "scr_xm_farm", "scr_xm_dst_elec_crackle" },
			{ "sp foundry sparks", "core", "sp_foundry_sparks" },
			{ "sp sparking generator", "scr_reconstructionaccident", "sp_sparking_generator" },
		};

		const std::vector<PtfxS> vPTFX6
		{
			{ "bang blood car", "core", "bang_blood_car" },
			{ "bang blood", "core", "bang_blood" },
			{ "blood chopper", "core", "blood_chopper" },
			{ "blood stab", "core", "blood_stab" },
			{ "blood throat", "core", "blood_throat" },
			{ "cs car2 bang blood", "cut_carsteal5", "cs_car2_bang_blood" },
			{ "cs fib2 blood hand", "cut_fbi2", "cs_fib2_blood_hand" },
			{ "cs head kick blood", "cut_trevor1", "cs_head_kick_blood" }, //new
			{ "cs lemar blood entry", "cut_lamar1", "cs_lemar_blood_entry" },
			{ "cs sol5 blood head shot", "cut_solomon5", "cs_sol5_blood_head_shot" },
			{ "scr abattoir ped minced", "scr_michael2", "scr_abattoir_ped_minced" },
			{ "scr blood head exit", "cut_lester1b", "scr_blood_head_exit" },
			{ "scr fbi autopsy blood", "scr_fbi1", "scr_fbi_autopsy_blood" },
			{ "scr fbi3 blood extraction", "scr_fbi3", "scr_fbi3_blood_extraction" },
			{ "scr mich2 blood stab", "scr_michael2", "scr_mich2_blood_stab" },
			{ "scr rotor blade blood", "scr_trevor2", "scr_rotor_blade_blood" },
			{ "scr trev4 747 blood impact", "scr_solomon3", "scr_trev4_747_blood_impact" },
			{ "td blood hatchet back", "core", "td_blood_hatchet_back" },
			{ "td blood pistol", "core", "td_blood_pistol" },
			{ "td blood shotgun", "core", "td_blood_shotgun" },
			{ "td blood stab", "core", "td_blood_stab" },
			{ "cut_tn_punch_mouth_blood", "cut_tn", "cut_tn_punch_mouth_blood" }, //кровь
			{ "cut_tn_punch_blood_drips", "cut_tn", "cut_tn_punch_blood_drips" }, //кровь
			{ "cut_sec_chop_bite", "cut_sec", "cut_sec_chop_bite" }, //кровь
			{ "cut_sec_muz_pistol", "cut_sec", "cut_sec_muz_pistol" }, //кровь
		};

		const std::vector<PtfxS> vPTFX7
		{
			{ "ent amb foundry steam spawn", "core", "ent_amb_foundry_steam_spawn" },
			{ "ent sht flame", "core", "ent_sht_flame" },
			{ "ent sht petrol fire", "core", "ent_sht_petrol_fire" },
			{ "exp air molotov", "core", "exp_air_molotov" },
			{ "exp grd molotov", "core", "exp_grd_molotov" },
			{ "exp hum fin heli spawn", "cut_humane_fin", "exp_hum_fin_heli_spawn" },
			{ "scr adversary foot flames", "scr_bike_adversary", "scr_adversary_foot_flames" },
			{ "scr fin env trev sky", "scr_finale1", "scr_fin_env_trev_sky" },
			{ "scr fin fire petrol trev", "scr_finale1", "scr_fin_fire_petrol_trev" },
			{ "scr ie jug mask flame", "scr_impexp_jug", "scr_ie_jug_mask_flame" },
			{ "sp fire trail tanker exp", "des_tanker_crash", "sp_fire_trail_tanker_exp" },
			{ "sp fire trail", "scr_agencyheist", "sp_fire_trail" },
			{ "sp hum fin heli fire trail", "cut_humane_fin", "sp_hum_fin_heli_fire_trail" },
			{ "veh debris trail", "core", "veh_debris_trail" },
			{ "veh sanctus backfire", "veh_sanctus", "veh_sanctus_backfire" },
			{ "veh sm car small backfire", "core", "veh_sm_car_small_backfire" },
			{ "scr_sv_drag_shift_good", "scr_sv_drag", "scr_sv_drag_shift_good" }, //огонь
			{ "exp_sec_launched_emp", "core", "exp_sec_launched_emp" }, //молния
			{ "cut_sec_cig_lighter_sparks", "cut_sec", "cut_sec_cig_lighter_sparks" }, //искра
			{ "cut_sec_bul_metal_impact", "cut_sec", "cut_sec_bul_metal_impact" }, //искра
			{ "scr_sec_weed_lighter_sparks", "scr_sec", "scr_sec_weed_lighter_sparks" }, //искра
			{ "cut_xm3_plane_crash_left", "cut_xm3", "cut_xm3_plane_crash_left" }, //искра
			{ "cut_xm3_plane_sparks", "cut_xm3", "cut_xm3_plane_sparks" }, //искра
			{ "cut_xm3_plane_crash_right", "cut_xm3", "cut_xm3_plane_crash_right" }, //искра
			{ "scr_srr_char_int_impact_sparks", "scr_srr_char", "scr_srr_char_int_impact_sparks" }, //искра
			{ "scr_sv_rob_sub_console_sparks", "scr_sv_rob_sub", "scr_sv_rob_sub_console_sparks" }, //искра
		};

		const std::vector<PtfxS> vPTFX8
		{
			{ "bullet tracer xm thruster mg", "cut_iaaj", "bullet_tracer_xm_thruster_mg" },
			{ "bullet tracer xs vehicle remote mg sf", "weap_xs_vehicle_weapons", "bullet_tracer_xs_vehicle_remote_mg_sf" },
			{ "bullet tracer", "core", "bullet_tracer" },
			{ "cs gr muz assault rifle", "cut_gr_intro", "cs_gr_muz_assault_rifle" },
			{ "cs pro muz assault rifle", "cut_prologue", "cs_pro_muz_assault_rifle" },
			{ "eject smg fp", "core", "eject_smg_fp" },
			{ "eject sniper amrifle", "core", "eject_sniper_amrifle" },
			{ "eject sniper heavy", "core", "eject_sniper_heavy" },
			{ "eject sniper", "core", "eject_sniper" },
			{ "eject stungun", "core", "eject_stungun" },
			{ "eject xm revolver", "weap_xm_revolver", "eject_xm_revolver" },
			{ "muz alternate star fp", "core", "muz_alternate_star_fp" },
			{ "muz buzzard", "core", "muz_buzzard" },
			{ "muz clown", "scr_rcbarry2", "muz_clown" },
			{ "muz hunter", "core", "muz_hunter" },
			{ "muz indep firework", "wpn_indep_firework", "muz_indep_firework" },
			{ "muz laser", "core", "muz_laser" },
			{ "muz minigun", "core", "muz_minigun" },
			{ "muz mounted turret apc mg", "weap_gr_vehicle_weapons", "muz_mounted_turret_apc_mg" },//new
			{ "muz mounted turret apc missile", "weap_gr_vehicle_weapons", "muz_mounted_turret_apc_missile" },//new
			{ "muz mounted turret apc", "weap_gr_vehicle_weapons", "muz_mounted_turret_apc" },//new
			{ "muz mounted turret dune mg", "weap_gr_vehicle_weapons", "muz_mounted_turret_dune_mg" },//new
			{ "muz mounted turret dune minigun fp", "weap_gr_vehicle_weapons", "muz_mounted_turret_dune_minigun_fp" },//new
			{ "muz mounted turret dune minigun", "weap_gr_vehicle_weapons", "muz_mounted_turret_dune_minigun" },//new
			{ "muz mounted turret tampa minigun", "weap_gr_vehicle_weapons", "muz_mounted_turret_tampa_minigun" },//new
			{ "muz mounted turret twinmg trailer", "weap_gr_vehicle_weapons", "muz_mounted_turret_twinmg_trailer" },//new
			{ "muz mounted turret twinmg", "weap_gr_vehicle_weapons", "muz_mounted_turret_twinmg" },//new
			{ "muz mounted turret", "veh_mounted_turrets_car", "muz_mounted_turret" },//new
			{ "muz musket ng", "wpn_musket", "muz_musket_ng" },
			{ "muz pistol fp", "core", "muz_pistol_fp" },
			{ "muz pistol silencer", "core", "muz_pistol_silencer" },
			{ "muz railgun", "core", "muz_railgun" },
			{ "muz rpg", "core", "muz_rpg" },
			{ "muz sm bom cannon", "weap_sm_bom", "muz_sm_bom_cannon" },
			{ "muz smg fp", "core", "muz_smg_fp" },
			{ "muz smg", "cut_armenian2", "muz_smg" },
			{ "muz xm khanjali railgun", "veh_khanjali", "muz_xm_khanjali_railgun" },//new
			{ "muz xm revolver", "weap_xm_revolver", "muz_xm_revolver" },
			{ "muz xs sr carbine", "weap_xs_weapons", "muz_xs_sr_carbine" },
			{ "muz xs sr minigun", "weap_xs_weapons", "muz_xs_sr_minigun" },
			{ "muz xs sr raygun", "weap_xs_weapons", "muz_xs_sr_raygun" },
			{ "muz xs vehicle remote mg sf", "weap_xs_vehicle_weapons", "muz_xs_vehicle_remote_mg_sf" },
			{ "muz yacht defence", "scr_apartment_mp", "muz_yacht_defence" },
			{ "scr ie vv muzzle flash", "scr_ie_vv", "scr_ie_vv_muzzle_flash" },
			{ "tracer xm shotgun inc", "weap_xm_shotgun_rounds", "tracer_xm_shotgun_inc" },
			{ "cut_sec_eject_pistol", "cut_sec", "cut_sec_eject_pistol" }, //выстрел
			{ "cut_xm3_eject_pistol", "cut_xm3", "cut_xm3_eject_pistol" }, //выстрел
			{ "cut_xm3_muz_pistol", "cut_xm3", "cut_xm3_muz_pistol" }, //выстрел
			{ "cut_xm3_rpg_muzzle", "cut_xm3", "cut_xm3_rpg_muzzle" }, //дым
		};

		const std::vector<PtfxS> vPTFX9
		{
			{ "cs finale1 car explosion", "cut_finale1", "cs_finale1_car_explosion" },
			{ "ent ray fbi door exp", "des_fib_door", "ent_ray_fbi_door_exp" },
			{ "ent ray fbi5a ramp explosion", "des_fib_floor", "ent_ray_fbi5a_ramp_explosion" },
			{ "ent ray heli aprtmnt exp", "core", "ent_ray_heli_aprtmnt_exp" },
			{ "ent ray meth explosion", "des_methtrailer", "ent_ray_meth_explosion" },
			{ "ent ray paleto gas explosion", "des_gas_station", "ent_ray_paleto_gas_explosion" },
			{ "ent ray pro1 vault exp2", "des_vaultdoor", "ent_ray_pro1_vault_exp2" },
			{ "ent ray scaf explosion", "des_scaffolding", "ent_ray_scaf_explosion" },
			{ "ent ray shipwreck exp underwater", "des_shipwreck", "ent_ray_shipwreck_exp_underwater" },
			{ "ent ray shipwreck exp window", "des_shipwreck", "ent_ray_shipwreck_exp_window" },
			{ "ent ray tanker exp", "des_tanker_crash", "ent_ray_tanker_exp" },
			{ "ent ray trailerpark explosion L", "des_trailerpark", "ent_ray_trailerpark_explosion_L" },
			{ "exp air blimp", "core", "exp_air_blimp" },
			{ "exp air grenade lod", "core", "exp_air_grenade_lod" },
			{ "exp air rpg lod", "core", "exp_air_rpg_lod" },
			{ "exp air rpg plane", "core", "exp_air_rpg_plane" },
			{ "exp fbi4 doors", "scr_fbi4", "exp_fbi4_doors" },
			{ "exp grd barrel", "core", "exp_grd_barrel" },
			{ "exp grd grenade", "core", "exp_grd_grenade" },
			{ "exp grd petrol pump", "core", "exp_grd_petrol_pump" },
			{ "exp grd rpg plane sp", "core", "exp_grd_rpg_plane_sp" },
			{ "exp grd rpg", "core", "exp_grd_rpg" },
			{ "exp grd tankshell mp", "scr_mp_tankbattle", "exp_grd_tankshell_mp" },
			{ "exp grd train", "core", "exp_grd_train" },
			{ "exp hum fin heli", "cut_humane_fin", "exp_hum_fin_heli" },
			{ "exp underwater torpedo", "veh_stromberg", "exp_underwater_torpedo" },
			{ "exp xs mine kinetic", "veh_xs_vehicle_mods", "exp_xs_mine_kinetic" },
			{ "exp xs mine spike", "veh_xs_vehicle_mods", "exp_xs_mine_spike" },
			{ "scr agency3b heli expl", "scr_agencyheistb", "scr_agency3b_heli_expl" },
			{ "scr as target shot small", "scr_as_target", "scr_as_target_shot_small" },
			{ "scr ba bomb destroy", "scr_ba_bomb", "scr_ba_bomb_destroy" },
			{ "scr bigscore tyre spiked", "scr_bigscore", "scr_bigscore_tyre_spiked" },
			{ "scr boat exp sp", "scr_oddjobtraffickingair", "scr_boat_exp_sp" },
			{ "scr bomb cluster", "scr_weap_bombs", "scr_bomb_cluster" },
			{ "scr bomb standard", "scr_weap_bombs", "scr_bomb_standard" },
			{ "scr ex1 cargo engine burst", "scr_exile1", "scr_ex1_cargo_engine_burst" },
			{ "scr ex1 plane exp sp", "scr_exile1", "scr_ex1_plane_exp_sp" },
			{ "scr fbi dd breach smoke", "scr_agencyheist", "scr_fbi_dd_breach_smoke" },
			{ "scr fbi exp building", "scr_agencyheist", "scr_fbi_exp_building" },
			{ "scr ih fin explosive charge", "scr_ih_fin", "scr_ih_fin_explosive_charge" },
			{ "scr impexp dst crate", "scr_impexp_ploughed", "scr_impexp_dst_crate" },
			{ "scr josh3 exp debris", "scr_josh3", "scr_josh3_exp_debris" },
			{ "scr josh3 explosion", "scr_josh3", "scr_josh3_explosion" },
			{ "scr lamar1 door breach", "scr_lamar1", "scr_lamar1_door_breach" },
			{ "scr ojdg4 boat exp", "scr_oddjobtraffickingair", "scr_ojdg4_boat_exp" },
			{ "scr prologue door blast", "scr_prologue", "scr_prologue_door_blast" },
			{ "scr trev2 heli exp", "scr_trevor2", "scr_trev2_heli_exp" },
			{ "scr trev3 c4 explosion", "scr_trevor3", "scr_trev3_c4_explosion" },
			{ "scr trev3 trailer expolsion", "scr_trevor3", "scr_trev3_trailer_expolsion" },
			{ "scr vw oil tanker explosion", "scr_vw_oil", "scr_vw_oil_tanker_explosion" },
			{ "scr xm orbital blast", "scr_xm_orbital", "scr_xm_orbital_blast" },
			{ "sp cut hs3f exp vault", "cut_hs3f", "sp_cut_hs3f_exp_vault" },
			{ "veh rotor break tail", "core", "veh_rotor_break_tail" },
			{ "scr_exp_train_brake", "scr_tn_tr", "scr_exp_train_brake" }, //взрыв
			{ "exp_xs_mine_spike", "core", "exp_xs_mine_spike" }, //взрыв
			{ "exp_xs_mine_kinetic", "core", "exp_xs_mine_kinetic" }, //взрыв
			{ "exp_xs_mine_emp", "core", "exp_xs_mine_emp" }, //взрыв
			{ "veh_backfire_narrow", "core", "veh_backfire_narrow" }, //взрыв
			{ "cut_xm3_door_explosion", "cut_xm3", "cut_xm3_door_explosion" }, //взрыв
			{ "cut_xm3_rpg_explosion", "cut_xm3", "cut_xm3_rpg_explosion" }, //взрыв
			{ "scr_xt_dax_exp_gascan", "scr_xt_dax", "scr_xt_dax_exp_gascan" }, //взрыв
			{ "scr_srr_oper_airstrike", "scr_srr_oper", "scr_srr_oper_airstrike" }, //взрыв
		};

		const std::vector<PtfxS> vPTFX10
		{
			{ "bul decal oil", "core", "bul_decal_oil" },
			{ "bul decal water", "core", "bul_decal_water" },
			{ "bul mud", "core", "bul_mud" },
			{ "bul sand loose", "core", "bul_sand_loose" },
			{ "cs bigscr beer spray", "cut_bigscr", "cs_bigscr_beer_spray" },
			{ "cs ex3 water drips", "cut_exile3", "cs_ex3_water_drips" },
			{ "cs fam2 ped splash", "cut_family2", "cs_fam2_ped_splash" },
			{ "cs fam2 ped water splash", "cut_family2", "cs_fam2_ped_water_splash" },
			{ "cs fam4 juice spit", "cut_family4", "cs_fam4_juice_spit" },
			{ "cs fam5 michael pool splash", "scr_exile3", "cs_fam5_michael_pool_splash" },
			{ "cs fib3 syringe", "cut_fbi3", "cs_fib3_syringe" },
			{ "cs finale car explosion splashes spawn", "cut_finale1", "cs_finale_car_explosion_splashes_spawn" },
			{ "cs finale1 car explosion surge spawn", "cut_finale1", "cs_finale1_car_explosion_surge_spawn" },
			{ "cs finale1 car splash impact", "cut_finale1", "cs_finale1_car_splash_impact" },
			{ "cs finale1 car splash", "cut_finale1", "cs_finale1_car_splash" },
			{ "cs mich1 pick dirt impact", "cut_michael1", "cs_mich1_pick_dirt_impact" },
			{ "cs mich1 tool dirt impact", "cut_michael1", "cs_mich1_tool_dirt_impact" },
			{ "cs mich2 blood nose", "cut_michael2", "cs_mich2_blood_nose" },
			{ "cs paleto vomit", "cut_paletoscore", "cs_paleto_vomit" },
			{ "cs pro car crash snow", "cut_prologue", "cs_pro_car_crash_snow" },
			{ "cs trev1 beer bottle", "cut_trevor1", "cs_trev1_beer_bottle" },
			{ "cs trev1 ped water splash", "cut_trevor1", "cs_trev1_ped_water_splash" },
			{ "cs trev5 water pour", "cut_trevor3", "cs_trev5_water_pour" },
			{ "cs water splash jetski", "cut_finale1", "cs_water_splash_jetski" },
			{ "ent amb water drips spawned lg", "core", "ent_amb_water_drips_spawned_lg" },
			{ "ent brk champagne case", "core", "ent_brk_champagne_case" },
			{ "ent dst gen liquid burst", "core", "ent_dst_gen_liquid_burst" },
			{ "ent ray shipwreck splash S", "des_shipwreck", "ent_ray_shipwreck_splash_S" },
			{ "ent ray train splash", "scr_exile3", "ent_ray_train_splash" },
			{ "ent sht beer barrel", "core", "ent_sht_beer_barrel" },
			{ "ent sht beer containers", "core", "ent_sht_beer_containers" },
			{ "ent sht blood", "core", "ent_sht_blood" },
			{ "ent sht molten liquid", "core", "ent_sht_molten_liquid" },
			{ "ent sht oil", "core", "ent_sht_oil" },
			{ "ent sht petrol", "core", "ent_sht_petrol" },
			{ "ent sht water", "core", "ent_sht_water" },
			{ "exp water", "core", "exp_water" },
			{ "exp xs mine tar", "veh_xs_vehicle_mods", "exp_xs_mine_tar" },
			{ "scr acid bath splash", "scr_michael2", "scr_acid_bath_splash" },
			{ "scr apa jacuzzi steam sp", "scr_apartment_mp", "scr_apa_jacuzzi_steam_sp" },
			{ "scr ex1 water exp sp", "scr_exile1", "scr_ex1_water_exp_sp" },
			{ "scr fbi5 ped water splash", "scr_fbi5a", "scr_fbi5_ped_water_splash" },
			{ "scr fin trev car impact", "scr_finale1", "scr_fin_trev_car_impact" },
			{ "scr mp splash", "scr_mp_creator", "scr_mp_splash" },
			{ "scr ojdg4 water exp", "scr_oddjobtraffickingair", "scr_ojdg4_water_exp" },
			{ "scr pts vomit water", "scr_player_timetable_scene", "scr_pts_vomit_water" },
			{ "scr puke in car", "scr_familyscenem", "scr_puke_in_car" },
			{ "scr sum gy exp water bomb", "scr_sum_gy", "scr_sum_gy_exp_water_bomb" },
			{ "scr tracey puke", "scr_familyscenem", "scr_tracey_puke" },
			{ "scr trev1 trailer splash", "scr_trevor1", "scr_trev1_trailer_splash" },
			{ "scr xm submarine surface explosion", "scr_xm_submarine", "scr_xm_submarine_surface_explosion" },
			{ "water boat entry", "core", "water_boat_entry" },
			{ "water boat exit", "core", "water_boat_exit" },
			{ "water heli blades", "core", "water_heli_blades" },
			{ "water jetski exit", "core", "water_jetski_exit" },
			{ "water splash generic", "core", "water_splash_generic" },
			{ "water splash ped in", "cut_trevor1", "water_splash_ped_in" },
			{ "water splash ped", "scr_exile3", "water_splash_ped" },
			{ "water splash sub out", "core", "water_splash_sub_out" },
			{ "wtr rocks rnd splash", "core", "wtr_rocks_rnd_splash" },
			{ "wtr rocks wall splash", "core", "wtr_rocks_wall_splash" },
			{"scr_sum2_club_vomit", "scr_sum2", "scr_sum2_club_vomit" }, //рвота
			{ "cut_sec_beer_bottle", "cut_sec", "cut_sec_beer_bottle" }, //брызги
			{ "scr_sum2_plane_splash", "scr_sum2", "scr_sum2_plane_splash" }, //брызги
			{ "exp_xs_mine_tar", "core", "exp_xs_mine_tar" }, //брызги
			{ "exp_xs_mine_slick", "core", "exp_xs_mine_slick" }, //брызги
			{ "cut_xm3_beer_splash", "cut_xm3", "cut_xm3_beer_splash" }, //брызги
			{ "scr_sv_rob_cas_trailer_liq_exp", "scr_sv_rob_cas", "scr_sv_rob_cas_trailer_liq_exp" }, //брызги
			{ "scr_sv_rob_cas_liq_splash", "scr_sv_rob_cas", "scr_sv_rob_cas_liq_splash" }, //брызги
			{ "scr_tn_exp_mine_slick_nodecal", "scr_tn_slick", "scr_tn_exp_mine_slick_nodecal" },
		};

		const std::vector<PtfxS> vPTFX11
		{
			{ "cs cbh heli roof", "cut_paletoscore", "cs_cbh_heli_roof" },
			{ "cs fin bang carmetal", "cut_finale1", "cs_fin_bang_carmetal" },
			{ "cs prologue tree crash", "cut_prologue", "cs_prologue_tree_crash" },
			{ "ent dst inflatable", "core", "ent_dst_inflatable" },
			{ "ent ray paleto gas exp tiles", "des_gas_station", "ent_ray_paleto_gas_exp_tiles" },
			{ "ent ray train impact", "des_train_crash", "ent_ray_train_impact" },
			{ "exp grd petrol pump sp", "core", "exp_grd_petrol_pump_sp" },
			{ "scr paleto roof impact", "scr_paletoscore", "scr_paleto_roof_impact" },
			{ "cut_sec_helicopter_impact", "cut_sec", "cut_sec_helicopter_impact" },
			{ "scr_sec_helicopter_impact", "scr_sec", "scr_sec_helicopter_impact" }, //дым
		};

		const std::vector<PtfxS> vPTFX12
		{
			{ "ent brk banknotes", "core", "ent_brk_banknotes" },
			{ "scr paleto banknotes", "scr_paletoscore", "scr_paleto_banknotes" },
			{ "scr ped foot banknotes", "scr_exec_ambient_fm", "scr_ped_foot_banknotes" },
		};

		const std::vector<PtfxS> vPTFX13
		{
			{ "ent amb fbi falling debris sp", "core", "ent_amb_fbi_falling_debris_sp" },
			{ "ent col falling snow", "core", "ent_col_falling_snow" },
			{ "ent col gen tree dust", "core", "ent_col_gen_tree_dust" },
			{ "ent col tree leaves", "core", "ent_col_tree_leaves" },
			{ "ent col tree oranges", "core", "ent_col_tree_oranges" },
			{ "ent ray big drill ibt", "des_bigjobdrill", "ent_ray_big_drill_ibt" },
			{ "ent ray big drill start", "des_bigjobdrill", "ent_ray_big_drill_start" },
			{ "ent ray big drill trail", "des_bigjobdrill", "ent_ray_big_drill_trail" },
			{ "ent ray fam3 concrete frags", "des_stilthouse", "ent_ray_fam3_concrete_frags" },
			{ "ent ray fam3 deck fracture", "des_stilthouse", "ent_ray_fam3_deck_fracture" },
			{ "ent ray fbi2 glass drop", "des_fib_glass", "ent_ray_fbi2_glass_drop" },
			{ "ent ray fbi2 window break", "des_fib_glass", "ent_ray_fbi2_window_break" },
			{ "ent ray fbi5a ceiling debris", "des_fib_ceiling", "ent_ray_fbi5a_ceiling_debris" },
			{ "ent ray fbi5a ramp fragment", "des_fib_floor", "ent_ray_fbi5a_ramp_fragment" },
			{ "ent ray fbi5a stairs silt fall", "des_fibstairs", "ent_ray_fbi5a_stairs_silt_fall" },
			{ "ent ray pro tree crash", "des_pro_tree_crash", "ent_ray_pro_tree_crash" },
			{ "ent ray pro1 floating cash", "des_vaultdoor", "ent_ray_pro1_floating_cash" },
			{ "ent ray train dust silt", "des_train_crash", "ent_ray_train_dust_silt" },
			{ "scr agency atrium glass", "scr_agencyheistb", "scr_agency_atrium_glass" },
			{ "scr prologue ceiling debris", "scr_prologue", "scr_prologue_ceiling_debris" },
			{ "cs_sv_rob_ship_drips", "cut_sv", "cs_sv_rob_ship_drips" }, //вода капли
			{ "cut_xm3_plane_impacts", "cut_xm3", "cut_xm3_plane_impacts" }, //дым
			{ "cut_xm3_coke_dust", "cut_xm3", "cut_xm3_coke_dust" }, //дым
			{ "scr_srr_char_int_impact_rpg_dust_aft", "scr_srr_char", "scr_srr_char_int_impact_rpg_dust_aft" }, //дым
			{ "scr_srr_char_int_impact_dust_fore", "scr_srr_char", "scr_srr_char_int_impact_dust_fore" }, //дым
			{ "scr_srr_char_int_impact_rpg_dust_fore", "scr_srr_char", "scr_srr_char_int_impact_rpg_dust_fore" }, //дым
			{ "scr_srr_char_int_impact_dust_aft", "scr_srr_char", "scr_srr_char_int_impact_dust_aft" }, //дым
		};

		const std::vector<PtfxS> vPTFX14
		{
			{ "ent anim paparazzi flash", "core", "ent_anim_paparazzi_flash" },
			{ "ent ray ch2 farm CS lights", "des_farmhouse", "ent_ray_ch2_farm_CS_lights" },
			{ "ent ray ch2 farm fire light", "des_farmhouse", "ent_ray_ch2_farm_fire_light" },
			{ "ent ray pro1 vault exp lit", "scr_prologue", "ent_ray_pro1_vault_exp_lit" },
			{ "ent ray trev3 trailer light", "scr_trevor3", "ent_ray_trev3_trailer_light" },
			{ "scr josh3 light explosion", "scr_josh3", "scr_josh3_light_explosion" },
			{ "scr rcpap1 camera", "scr_rcpaparazzo1", "scr_rcpap1_camera" },
			{ "veh sub crush", "core", "veh_sub_crush" },
			{ "scr camera flash", "cut_lester1b", "scr_camera_flash" },
			{ "scr_tn_meet_phone_camera_flash", "scr_tn_meet", "scr_tn_meet_phone_camera_flash" }, //вспышка
			{ "cut_xm3_muz_pistol_flash", "cut_xm3", "cut_xm3_muz_pistol_flash" }, //вспышка
		};

		const std::vector<PtfxS> vPTFX15
		{
			{ "scr ch cockroach bag drop", "scr_ch_finale", "scr_ch_cockroach_bag_drop" },
			{ "scr golf tee perfect", "scr_minigamegolf", "scr_golf_tee_perfect" },
		};
#pragma endregion

		std::vector<PtfxlopS> _fxlops;

		void AddEntityToPtfxLops(const PtfxS& effect, const GTAentity& entity)
		{
			for (auto it = _fxlops.begin(); it != _fxlops.end();)
			{
				if (it->entity.Equals(entity))
				{
					it = _fxlops.erase(it);
				}
				else ++it;
			}

			if (effect.fx.length() > 0)
			{
				PtfxlopS fxlop;
				fxlop.entity = entity;
				fxlop.asset = effect.asset;
				fxlop.fx = effect.fx;
				_fxlops.push_back(fxlop);
			}
		}

		void __AddOption_entity(const PtfxS& effect, GTAentity entity)
		{
			bool pressed = false;
			AddOption(effect.name, pressed); if (pressed)
			{
				PCHAR asset = (PCHAR)effect.asset.c_str();

				REQUEST_NAMED_PTFX_ASSET(asset);
				if (HAS_NAMED_PTFX_ASSET_LOADED(asset))
				{
					USE_PARTICLE_FX_ASSET(asset);
					SET_PARTICLE_FX_NON_LOOPED_COLOUR(GET_RANDOM_FLOAT_IN_RANGE(0, 1), GET_RANDOM_FLOAT_IN_RANGE(0, 1), GET_RANDOM_FLOAT_IN_RANGE(0, 1));
					if (GTAentity(entity).RequestControl())
					{
						START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY((PCHAR)effect.fx.c_str(), entity.GetHandle(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0, 0, 0);
					}
					else
					{
						const Vector3& coord = GET_ENTITY_COORDS(entity.GetHandle(), 1);
						START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD((PCHAR)effect.fx.c_str(), coord.x, coord.y, coord.z, 0.0f, 0.0f, 0.0f, 1.0f, 0, 0, 0, false);
					}
				}
			}
		}
		void __AddOption_loopOnEntity(const PtfxS& effect, GTAentity entity)
		{
			bool found = false;
			bool tickolTrue = false;
			for (auto& fxlop : _fxlops)
			{
				if (fxlop.entity == entity)
				{
					found = true;
					if (fxlop.asset == effect.asset && fxlop.fx == effect.fx)
					{
						tickolTrue = true;
						break;
					}
				}
			}

			if (!found)
			{
				tickolTrue = !effect.asset.length() && !effect.fx.length();
			}

			bool pressed = false;
			AddTickol(effect.name, tickolTrue, pressed, pressed); if (pressed)
			{
				AddEntityToPtfxLops(effect, entity);
			}
		}

		void PTFXSub()
		{
			AddTitle("Special FX");

			//before the loop
			switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
			{
			case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
				AddOption("Loop On Entity", null, nullFunc, SUB::PTFXSUB);
				break;
			case SUB::PTFXSUB:
			{
				bool bPressedClear = false;
				AddOption("Clear On All Entities", bPressedClear); if (bPressedClear)
					_fxlops.clear();
				PtfxS nonefx = { "None", "", "" };
				__AddOption_loopOnEntity(nonefx, Static_241);
				break; // subception
			}
			}

			AddBreak("~b~Standarts");
			for (const auto& current : vPTFX)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}
			}

			AddBreak("~b~Impacts, Debris");
			for (const auto& current : vPTFX2)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Smoke, Steam, Dust, Snow");
			for (const auto& current : vPTFX3)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Fireworks and Magic");
			for (const auto& current : vPTFX4)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Sparks");
			for (const auto& current : vPTFX5)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Blood");
			for (const auto& current : vPTFX6)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Flames");
			for (const auto& current : vPTFX7)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Muzzle flashes");
			for (const auto& current : vPTFX8)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}


			AddBreak("~b~Explosions");
			for (const auto& current : vPTFX9)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Liquids");
			for (const auto& current : vPTFX10)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Large debris");
			for (const auto& current : vPTFX11)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Money");
			for (const auto& current : vPTFX12)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Collapsing, Falling");
			for (const auto& current : vPTFX13)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Light");
			for (const auto& current : vPTFX14)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			AddBreak("~b~Miscallaneous");
			for (const auto& current : vPTFX15)
			{
				switch (Menu::currentsub_ar[Menu::currentsub_ar_index])
				{
				case SUB::PLAYEROPS: case SUB::SPOONER_SELECTEDENTITYOPS:
					__AddOption_entity(current, Static_241);
					break;
				case SUB::PTFXSUB:
					__AddOption_loopOnEntity(current, Static_241);
					break; // Subception
				case SUB::TRIGGERFXGUN:
					TriggerFxGun_catind::__AddOption_GunFx(current);
					break;
				}

			}

			//after the loop

		}

	}

}




