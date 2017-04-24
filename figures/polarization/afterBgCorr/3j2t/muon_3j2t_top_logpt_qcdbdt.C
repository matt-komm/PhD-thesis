void plots_w/3j2t/muon_3j2t_top_logpt_qcdbdt()
{
//=========Macro generated from canvas: cvmuon_3j2t_top_logpt_qcdbdt0.949294189433/
//=========  (Mon Apr 24 03:02:31 2017) by ROOT version6.02/05
   TCanvas *cvmuon_3j2t_top_logpt_qcdbdt0.949294189433 = new TCanvas("cvmuon_3j2t_top_logpt_qcdbdt0.949294189433", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetHighLightColor(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->Range(0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetLeftMargin(0.1150442);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetRightMargin(0.227083);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetTopMargin(0.04002582);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetBottomMargin(0.08064517);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetFrameLineWidth(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1
   TPad *cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1 = new TPad("cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1", "",0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->Range(0.6266667,0.06666676,3.293333,3.87619);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetFillStyle(4000);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetLogx();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetLeftMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetRightMargin(0.26);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetTopMargin(0.65);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetBottomMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.2681716120272224 = new TH2F("axisRes0.2681716120272224","",50,10,398.1072,50,0.6,1.4);
   axisRes0.2681716120272224->SetMarkerStyle(20);
   axisRes0.2681716120272224->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axisRes0.2681716120272224->GetXaxis()->SetNdivisions(1005);
   axisRes0.2681716120272224->GetXaxis()->SetLabelFont(43);
   axisRes0.2681716120272224->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.2681716120272224->GetXaxis()->SetLabelSize(32);
   axisRes0.2681716120272224->GetXaxis()->SetTitleSize(35);
   axisRes0.2681716120272224->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.2681716120272224->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.2681716120272224->GetXaxis()->SetTitleFont(43);
   axisRes0.2681716120272224->GetYaxis()->SetTitle("Data/MC");
   axisRes0.2681716120272224->GetYaxis()->SetNdivisions(406);
   axisRes0.2681716120272224->GetYaxis()->SetLabelFont(43);
   axisRes0.2681716120272224->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.2681716120272224->GetYaxis()->SetLabelSize(32);
   axisRes0.2681716120272224->GetYaxis()->SetTitleSize(35);
   axisRes0.2681716120272224->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.2681716120272224->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.2681716120272224->GetYaxis()->SetTitleFont(43);
   axisRes0.2681716120272224->GetZaxis()->SetLabelFont(43);
   axisRes0.2681716120272224->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.2681716120272224->GetZaxis()->SetLabelSize(32);
   axisRes0.2681716120272224->GetZaxis()->SetTitleSize(35);
   axisRes0.2681716120272224->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.2681716120272224->GetZaxis()->SetTitleFont(43);
   axisRes0.2681716120272224->Draw("AXIS");
   TBox *box = new TBox(10,0.983538,12.02264,1.016462);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.983538,12.02264,1.016462);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(12.02264,0.9619742,14.4544,1.038026);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(12.02264,0.9619742,14.4544,1.038026);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(14.4544,0.9635281,17.37801,1.036472);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(14.4544,0.9635281,17.37801,1.036472);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(17.37801,0.9683704,20.89296,1.03163);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(17.37801,0.9683704,20.89296,1.03163);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20.89296,0.9750255,25.11886,1.024975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20.89296,0.9750255,25.11886,1.024975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(25.11886,0.9783704,30.19952,1.02163);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(25.11886,0.9783704,30.19952,1.02163);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30.19952,0.9809059,36.30781,1.019094);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30.19952,0.9809059,36.30781,1.019094);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(36.30781,0.9840277,43.65158,1.015972);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(36.30781,0.9840277,43.65158,1.015972);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(43.65158,0.9857338,52.48075,1.014266);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(43.65158,0.9857338,52.48075,1.014266);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(52.48075,0.9868507,63.09573,1.013149);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(52.48075,0.9868507,63.09573,1.013149);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(63.09573,0.9893631,75.85776,1.010637);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(63.09573,0.9893631,75.85776,1.010637);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(75.85776,0.9900884,91.20108,1.009912);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(75.85776,0.9900884,91.20108,1.009912);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(91.20108,0.9904374,109.6478,1.009563);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(91.20108,0.9904374,109.6478,1.009563);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(109.6478,0.9904959,131.8257,1.009504);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(109.6478,0.9904959,131.8257,1.009504);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(131.8257,0.9897654,158.4893,1.010235);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(131.8257,0.9897654,158.4893,1.010235);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(158.4893,0.9880972,190.5461,1.011903);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(158.4893,0.9880972,190.5461,1.011903);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190.5461,0.9833072,229.0868,1.016693);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190.5461,0.9833072,229.0868,1.016693);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(229.0868,0.9794955,275.4229,1.020505);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(229.0868,0.9794955,275.4229,1.020505);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275.4229,0.97302,331.1311,1.02698);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275.4229,0.97302,331.1311,1.02698);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(331.1311,0.9703517,398.1072,1.029648);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(331.1311,0.9703517,398.1072,1.029648);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1711[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistdata0.2880976454980.2327843988932225 = new TH1F("setHistdata0.2880976454980.2327843988932225","",20, xAxis1711);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(1,1.035691);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(2,0.9216531);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(3,0.9328894);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(4,1.06731);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(5,1.047922);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(6,1.033679);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(7,0.9812077);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(8,1.099702);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(9,1.038401);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(10,0.9758664);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(11,1.035101);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(12,1.034225);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(13,1.019888);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(14,0.977182);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(15,0.9917744);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(16,0.9526175);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(17,0.9570836);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(18,0.9955291);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(19,0.8780736);
   setHistdata0.2880976454980.2327843988932225->SetBinContent(20,1.093467);
   setHistdata0.2880976454980.2327843988932225->SetBinError(0,12.24745);
   setHistdata0.2880976454980.2327843988932225->SetBinError(1,0.0404961);
   setHistdata0.2880976454980.2327843988932225->SetBinError(2,0.09769503);
   setHistdata0.2880976454980.2327843988932225->SetBinError(3,0.08089177);
   setHistdata0.2880976454980.2327843988932225->SetBinError(4,0.07365136);
   setHistdata0.2880976454980.2327843988932225->SetBinError(5,0.06207352);
   setHistdata0.2880976454980.2327843988932225->SetBinError(6,0.052076);
   setHistdata0.2880976454980.2327843988932225->SetBinError(7,0.04290522);
   setHistdata0.2880976454980.2327843988932225->SetBinError(8,0.03888032);
   setHistdata0.2880976454980.2327843988932225->SetBinError(9,0.03232403);
   setHistdata0.2880976454980.2327843988932225->SetBinError(10,0.0271809);
   setHistdata0.2880976454980.2327843988932225->SetBinError(11,0.02539026);
   setHistdata0.2880976454980.2327843988932225->SetBinError(12,0.02309137);
   setHistdata0.2880976454980.2327843988932225->SetBinError(13,0.02162645);
   setHistdata0.2880976454980.2327843988932225->SetBinError(14,0.02142098);
   setHistdata0.2880976454980.2327843988932225->SetBinError(15,0.02427642);
   setHistdata0.2880976454980.2327843988932225->SetBinError(16,0.02905456);
   setHistdata0.2880976454980.2327843988932225->SetBinError(17,0.03728269);
   setHistdata0.2880976454980.2327843988932225->SetBinError(18,0.05106957);
   setHistdata0.2880976454980.2327843988932225->SetBinError(19,0.07075719);
   setHistdata0.2880976454980.2327843988932225->SetBinError(20,0.08112318);
   setHistdata0.2880976454980.2327843988932225->SetBinError(21,6.244998);
   setHistdata0.2880976454980.2327843988932225->SetEntries(17043);
   setHistdata0.2880976454980.2327843988932225->SetFillStyle(0);
   setHistdata0.2880976454980.2327843988932225->SetMarkerStyle(20);
   setHistdata0.2880976454980.2327843988932225->SetMarkerSize(1.15);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetNdivisions(1005);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetLabelFont(43);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetLabelSize(32);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetTitleSize(35);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetTickLength(0.05);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.2880976454980.2327843988932225->GetXaxis()->SetTitleFont(43);
   setHistdata0.2880976454980.2327843988932225->GetYaxis()->SetNdivisions(506);
   setHistdata0.2880976454980.2327843988932225->GetYaxis()->SetLabelFont(43);
   setHistdata0.2880976454980.2327843988932225->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.2880976454980.2327843988932225->GetYaxis()->SetLabelSize(32);
   setHistdata0.2880976454980.2327843988932225->GetYaxis()->SetTitleSize(35);
   setHistdata0.2880976454980.2327843988932225->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.2880976454980.2327843988932225->GetYaxis()->SetTitleFont(43);
   setHistdata0.2880976454980.2327843988932225->GetZaxis()->SetLabelFont(43);
   setHistdata0.2880976454980.2327843988932225->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.2880976454980.2327843988932225->GetZaxis()->SetLabelSize(32);
   setHistdata0.2880976454980.2327843988932225->GetZaxis()->SetTitleSize(35);
   setHistdata0.2880976454980.2327843988932225->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.2880976454980.2327843988932225->GetZaxis()->SetTitleFont(43);
   setHistdata0.2880976454980.2327843988932225->Draw("PESame");
   
   TF1 *axisLine0.0819439482728172 = new TF1("axisLine0.0819439482728","1",10,398.1072);
   axisLine0.0819439482728172->SetFillColor(19);
   axisLine0.0819439482728172->SetFillStyle(0);
   axisLine0.0819439482728172->SetMarkerStyle(20);
   axisLine0.0819439482728172->SetLineWidth(1);
   axisLine0.0819439482728172->GetXaxis()->SetNdivisions(1005);
   axisLine0.0819439482728172->GetXaxis()->SetLabelFont(43);
   axisLine0.0819439482728172->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.0819439482728172->GetXaxis()->SetLabelSize(32);
   axisLine0.0819439482728172->GetXaxis()->SetTitleSize(35);
   axisLine0.0819439482728172->GetXaxis()->SetTickLength(0.05);
   axisLine0.0819439482728172->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.0819439482728172->GetXaxis()->SetTitleFont(43);
   axisLine0.0819439482728172->GetYaxis()->SetNdivisions(506);
   axisLine0.0819439482728172->GetYaxis()->SetLabelFont(43);
   axisLine0.0819439482728172->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.0819439482728172->GetYaxis()->SetLabelSize(32);
   axisLine0.0819439482728172->GetYaxis()->SetTitleSize(35);
   axisLine0.0819439482728172->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.0819439482728172->GetYaxis()->SetTitleFont(43);
   axisLine0.0819439482728172->Draw("SameL");
   
   TH2F *axisRes0.268171612027_copy2226 = new TH2F("axisRes0.268171612027_copy2226","",50,10,398.1072,50,0.6,1.4);
   axisRes0.268171612027_copy2226->SetDirectory(0);
   axisRes0.268171612027_copy2226->SetMarkerStyle(20);
   axisRes0.268171612027_copy2226->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axisRes0.268171612027_copy2226->GetXaxis()->SetNdivisions(1005);
   axisRes0.268171612027_copy2226->GetXaxis()->SetLabelFont(43);
   axisRes0.268171612027_copy2226->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.268171612027_copy2226->GetXaxis()->SetLabelSize(32);
   axisRes0.268171612027_copy2226->GetXaxis()->SetTitleSize(35);
   axisRes0.268171612027_copy2226->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.268171612027_copy2226->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.268171612027_copy2226->GetXaxis()->SetTitleFont(43);
   axisRes0.268171612027_copy2226->GetYaxis()->SetTitle("Data/MC");
   axisRes0.268171612027_copy2226->GetYaxis()->SetNdivisions(406);
   axisRes0.268171612027_copy2226->GetYaxis()->SetLabelFont(43);
   axisRes0.268171612027_copy2226->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.268171612027_copy2226->GetYaxis()->SetLabelSize(32);
   axisRes0.268171612027_copy2226->GetYaxis()->SetTitleSize(35);
   axisRes0.268171612027_copy2226->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.268171612027_copy2226->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.268171612027_copy2226->GetYaxis()->SetTitleFont(43);
   axisRes0.268171612027_copy2226->GetZaxis()->SetLabelFont(43);
   axisRes0.268171612027_copy2226->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.268171612027_copy2226->GetZaxis()->SetLabelSize(32);
   axisRes0.268171612027_copy2226->GetZaxis()->SetTitleSize(35);
   axisRes0.268171612027_copy2226->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.268171612027_copy2226->GetZaxis()->SetTitleFont(43);
   axisRes0.268171612027_copy2226->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_1->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->cd();
  
// ------------>Primitives in pad: cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2
   TPad *cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2 = new TPad("cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2", "",0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->Range(0.6266667,-1911.86,3.293333,3550.596);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetFillStyle(4000);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetLogx();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetLeftMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetRightMargin(0.26);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetTopMargin(0.08);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetBottomMargin(0.35);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->SetFrameBorderMode(0);
   
   TH2F *axis0.9582710997342227 = new TH2F("axis0.9582710997342227","",50,10,398.1072,50,0,3113.6);
   axis0.9582710997342227->SetMarkerStyle(20);
   axis0.9582710997342227->GetXaxis()->SetNdivisions(1005);
   axis0.9582710997342227->GetXaxis()->SetLabelFont(43);
   axis0.9582710997342227->GetXaxis()->SetLabelOffset(0.0105);
   axis0.9582710997342227->GetXaxis()->SetLabelSize(0);
   axis0.9582710997342227->GetXaxis()->SetTitleSize(35);
   axis0.9582710997342227->GetXaxis()->SetTickLength(0.025);
   axis0.9582710997342227->GetXaxis()->SetTitleOffset(1.135);
   axis0.9582710997342227->GetXaxis()->SetTitleFont(43);
   axis0.9582710997342227->GetYaxis()->SetTitle("Events / bin");
   axis0.9582710997342227->GetYaxis()->SetNdivisions(506);
   axis0.9582710997342227->GetYaxis()->SetLabelFont(43);
   axis0.9582710997342227->GetYaxis()->SetLabelOffset(0.0087);
   axis0.9582710997342227->GetYaxis()->SetLabelSize(32);
   axis0.9582710997342227->GetYaxis()->SetTitleSize(35);
   axis0.9582710997342227->GetYaxis()->SetTickLength(0.02631579);
   axis0.9582710997342227->GetYaxis()->SetTitleOffset(1.32);
   axis0.9582710997342227->GetYaxis()->SetTitleFont(43);
   axis0.9582710997342227->GetZaxis()->SetLabelFont(43);
   axis0.9582710997342227->GetZaxis()->SetLabelOffset(0.0087);
   axis0.9582710997342227->GetZaxis()->SetLabelSize(32);
   axis0.9582710997342227->GetZaxis()->SetTitleSize(35);
   axis0.9582710997342227->GetZaxis()->SetTitleOffset(1.32);
   axis0.9582710997342227->GetZaxis()->SetTitleFont(43);
   axis0.9582710997342227->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1712[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *_stack_171_stack_172 = new TH1F("_stack_171_stack_172","",20, xAxis1712);
   _stack_171_stack_172->SetMinimum(-10.62672);
   _stack_171_stack_172->SetMaximum(2289.663);
   _stack_171_stack_172->SetDirectory(0);
   _stack_171_stack_172->SetStats(0);
   _stack_171_stack_172->SetMarkerStyle(20);
   _stack_171_stack_172->GetXaxis()->SetNdivisions(1005);
   _stack_171_stack_172->GetXaxis()->SetLabelFont(43);
   _stack_171_stack_172->GetXaxis()->SetLabelOffset(0.0105);
   _stack_171_stack_172->GetXaxis()->SetLabelSize(32);
   _stack_171_stack_172->GetXaxis()->SetTitleSize(35);
   _stack_171_stack_172->GetXaxis()->SetTickLength(0.05);
   _stack_171_stack_172->GetXaxis()->SetTitleOffset(1.135);
   _stack_171_stack_172->GetXaxis()->SetTitleFont(43);
   _stack_171_stack_172->GetYaxis()->SetNdivisions(506);
   _stack_171_stack_172->GetYaxis()->SetLabelFont(43);
   _stack_171_stack_172->GetYaxis()->SetLabelOffset(0.0087);
   _stack_171_stack_172->GetYaxis()->SetLabelSize(32);
   _stack_171_stack_172->GetYaxis()->SetTitleSize(35);
   _stack_171_stack_172->GetYaxis()->SetTitleOffset(1.32);
   _stack_171_stack_172->GetYaxis()->SetTitleFont(43);
   _stack_171_stack_172->GetZaxis()->SetLabelFont(43);
   _stack_171_stack_172->GetZaxis()->SetLabelOffset(0.0087);
   _stack_171_stack_172->GetZaxis()->SetLabelSize(32);
   _stack_171_stack_172->GetZaxis()->SetTitleSize(35);
   _stack_171_stack_172->GetZaxis()->SetTitleOffset(1.32);
   _stack_171_stack_172->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_171_stack_172);
   
   Double_t xAxis1713[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHisttChannel0.6488657457962228 = new TH1F("setHisttChannel0.6488657457962228","",20, xAxis1713);
   setHisttChannel0.6488657457962228->SetBinContent(1,13.17161);
   setHisttChannel0.6488657457962228->SetBinContent(2,5.64376);
   setHisttChannel0.6488657457962228->SetBinContent(3,8.568132);
   setHisttChannel0.6488657457962228->SetBinContent(4,12.46368);
   setHisttChannel0.6488657457962228->SetBinContent(5,18.40663);
   setHisttChannel0.6488657457962228->SetBinContent(6,23.75092);
   setHisttChannel0.6488657457962228->SetBinContent(7,30.51476);
   setHisttChannel0.6488657457962228->SetBinContent(8,44.76646);
   setHisttChannel0.6488657457962228->SetBinContent(9,57.69538);
   setHisttChannel0.6488657457962228->SetBinContent(10,74.93801);
   setHisttChannel0.6488657457962228->SetBinContent(11,93.69745);
   setHisttChannel0.6488657457962228->SetBinContent(12,111.9357);
   setHisttChannel0.6488657457962228->SetBinContent(13,126.2242);
   setHisttChannel0.6488657457962228->SetBinContent(14,113.727);
   setHisttChannel0.6488657457962228->SetBinContent(15,98.82288);
   setHisttChannel0.6488657457962228->SetBinContent(16,61.65007);
   setHisttChannel0.6488657457962228->SetBinContent(17,34.78134);
   setHisttChannel0.6488657457962228->SetBinContent(18,22.6025);
   setHisttChannel0.6488657457962228->SetBinContent(19,9.106204);
   setHisttChannel0.6488657457962228->SetBinContent(20,6.074238);
   setHisttChannel0.6488657457962228->SetBinError(0,0.9856333);
   setHisttChannel0.6488657457962228->SetBinError(1,0.6797408);
   setHisttChannel0.6488657457962228->SetBinError(2,0.7754333);
   setHisttChannel0.6488657457962228->SetBinError(3,0.9771191);
   setHisttChannel0.6488657457962228->SetBinError(4,1.175125);
   setHisttChannel0.6488657457962228->SetBinError(5,1.438336);
   setHisttChannel0.6488657457962228->SetBinError(6,1.617032);
   setHisttChannel0.6488657457962228->SetBinError(7,1.858453);
   setHisttChannel0.6488657457962228->SetBinError(8,2.215962);
   setHisttChannel0.6488657457962228->SetBinError(9,2.523773);
   setHisttChannel0.6488657457962228->SetBinError(10,2.876351);
   setHisttChannel0.6488657457962228->SetBinError(11,3.219565);
   setHisttChannel0.6488657457962228->SetBinError(12,3.522198);
   setHisttChannel0.6488657457962228->SetBinError(13,3.739717);
   setHisttChannel0.6488657457962228->SetBinError(14,3.530269);
   setHisttChannel0.6488657457962228->SetBinError(15,3.296054);
   setHisttChannel0.6488657457962228->SetBinError(16,2.588002);
   setHisttChannel0.6488657457962228->SetBinError(17,1.95312);
   setHisttChannel0.6488657457962228->SetBinError(18,1.571602);
   setHisttChannel0.6488657457962228->SetBinError(19,0.9874901);
   setHisttChannel0.6488657457962228->SetBinError(20,0.6493468);
   setHisttChannel0.6488657457962228->SetBinError(21,0.4798538);
   setHisttChannel0.6488657457962228->SetEntries(20202);
   setHisttChannel0.6488657457962228->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.6488657457962228->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.6488657457962228->SetLineColor(ci);
   setHisttChannel0.6488657457962228->SetLineWidth(2);
   setHisttChannel0.6488657457962228->SetMarkerStyle(20);
   setHisttChannel0.6488657457962228->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.6488657457962228->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.6488657457962228->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.6488657457962228->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.6488657457962228->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.6488657457962228->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.6488657457962228->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.6488657457962228->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.6488657457962228->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.6488657457962228->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.6488657457962228->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.6488657457962228->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.6488657457962228->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.6488657457962228->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.6488657457962228->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.6488657457962228->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.6488657457962228->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.6488657457962228->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.6488657457962228->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.6488657457962228->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.6488657457962228->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.648865745796,"HIST F");
   Double_t xAxis1714[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHisttWs0.7122636212772229 = new TH1F("setHisttWs0.7122636212772229","",20, xAxis1714);
   setHisttWs0.7122636212772229->SetBinContent(1,5.580312);
   setHisttWs0.7122636212772229->SetBinContent(2,2.088876);
   setHisttWs0.7122636212772229->SetBinContent(3,1.682339);
   setHisttWs0.7122636212772229->SetBinContent(4,5.782872);
   setHisttWs0.7122636212772229->SetBinContent(5,8.397179);
   setHisttWs0.7122636212772229->SetBinContent(6,8.81376);
   setHisttWs0.7122636212772229->SetBinContent(7,12.76745);
   setHisttWs0.7122636212772229->SetBinContent(8,16.10821);
   setHisttWs0.7122636212772229->SetBinContent(9,24.30547);
   setHisttWs0.7122636212772229->SetBinContent(10,33.47525);
   setHisttWs0.7122636212772229->SetBinContent(11,40.71597);
   setHisttWs0.7122636212772229->SetBinContent(12,48.61597);
   setHisttWs0.7122636212772229->SetBinContent(13,58.90788);
   setHisttWs0.7122636212772229->SetBinContent(14,58.43882);
   setHisttWs0.7122636212772229->SetBinContent(15,56.34735);
   setHisttWs0.7122636212772229->SetBinContent(16,37.73922);
   setHisttWs0.7122636212772229->SetBinContent(17,27.50841);
   setHisttWs0.7122636212772229->SetBinContent(18,17.59324);
   setHisttWs0.7122636212772229->SetBinContent(19,9.607343);
   setHisttWs0.7122636212772229->SetBinContent(20,8.132043);
   setHisttWs0.7122636212772229->SetBinError(0,1.349488);
   setHisttWs0.7122636212772229->SetBinError(1,0.8110866);
   setHisttWs0.7122636212772229->SetBinError(2,0.9803536);
   setHisttWs0.7122636212772229->SetBinError(3,0.8506033);
   setHisttWs0.7122636212772229->SetBinError(4,1.644054);
   setHisttWs0.7122636212772229->SetBinError(5,1.976577);
   setHisttWs0.7122636212772229->SetBinError(6,2.050086);
   setHisttWs0.7122636212772229->SetBinError(7,2.370072);
   setHisttWs0.7122636212772229->SetBinError(8,2.660202);
   setHisttWs0.7122636212772229->SetBinError(9,3.255862);
   setHisttWs0.7122636212772229->SetBinError(10,3.900936);
   setHisttWs0.7122636212772229->SetBinError(11,4.139548);
   setHisttWs0.7122636212772229->SetBinError(12,4.584006);
   setHisttWs0.7122636212772229->SetBinError(13,5.024092);
   setHisttWs0.7122636212772229->SetBinError(14,4.976839);
   setHisttWs0.7122636212772229->SetBinError(15,4.914216);
   setHisttWs0.7122636212772229->SetBinError(16,3.963803);
   setHisttWs0.7122636212772229->SetBinError(17,3.415788);
   setHisttWs0.7122636212772229->SetBinError(18,2.872097);
   setHisttWs0.7122636212772229->SetBinError(19,1.90265);
   setHisttWs0.7122636212772229->SetBinError(20,1.246374);
   setHisttWs0.7122636212772229->SetBinError(21,1.448701);
   setHisttWs0.7122636212772229->SetEntries(3351);
   setHisttWs0.7122636212772229->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.7122636212772229->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.7122636212772229->SetLineColor(ci);
   setHisttWs0.7122636212772229->SetLineWidth(2);
   setHisttWs0.7122636212772229->SetMarkerStyle(20);
   setHisttWs0.7122636212772229->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.7122636212772229->GetXaxis()->SetLabelFont(43);
   setHisttWs0.7122636212772229->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.7122636212772229->GetXaxis()->SetLabelSize(32);
   setHisttWs0.7122636212772229->GetXaxis()->SetTitleSize(35);
   setHisttWs0.7122636212772229->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.7122636212772229->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.7122636212772229->GetXaxis()->SetTitleFont(43);
   setHisttWs0.7122636212772229->GetYaxis()->SetNdivisions(506);
   setHisttWs0.7122636212772229->GetYaxis()->SetLabelFont(43);
   setHisttWs0.7122636212772229->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.7122636212772229->GetYaxis()->SetLabelSize(32);
   setHisttWs0.7122636212772229->GetYaxis()->SetTitleSize(35);
   setHisttWs0.7122636212772229->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.7122636212772229->GetYaxis()->SetTitleFont(43);
   setHisttWs0.7122636212772229->GetZaxis()->SetLabelFont(43);
   setHisttWs0.7122636212772229->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.7122636212772229->GetZaxis()->SetLabelSize(32);
   setHisttWs0.7122636212772229->GetZaxis()->SetTitleSize(35);
   setHisttWs0.7122636212772229->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.7122636212772229->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.712263621277,"HIST F");
   Double_t xAxis1715[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistTTJets0.7937493099952230 = new TH1F("setHistTTJets0.7937493099952230","",20, xAxis1715);
   setHistTTJets0.7937493099952230->SetBinContent(1,196.4226);
   setHistTTJets0.7937493099952230->SetBinContent(2,89.50732);
   setHistTTJets0.7937493099952230->SetBinContent(3,124.4251);
   setHistTTJets0.7937493099952230->SetBinContent(4,173.0331);
   setHistTTJets0.7937493099952230->SetBinContent(5,241.2578);
   setHistTTJets0.7937493099952230->SetBinContent(6,336.9465);
   setHistTTJets0.7937493099952230->SetBinContent(7,472.4232);
   setHistTTJets0.7937493099952230->SetBinContent(8,638.3195);
   setHistTTJets0.7937493099952230->SetBinContent(9,867.1782);
   setHistTTJets0.7937493099952230->SetBinContent(10,1132.205);
   setHistTTJets0.7937493099952230->SetBinContent(11,1424.274);
   setHistTTJets0.7937493099952230->SetBinContent(12,1710.751);
   setHistTTJets0.7937493099952230->SetBinContent(13,1920.905);
   setHistTTJets0.7937493099952230->SetBinContent(14,1874.64);
   setHistTTJets0.7937493099952230->SetBinContent(15,1472.207);
   setHistTTJets0.7937493099952230->SetBinContent(16,1000.867);
   setHistTTJets0.7937493099952230->SetBinContent(17,599.7654);
   setHistTTJets0.7937493099952230->SetBinContent(18,329.5774);
   setHistTTJets0.7937493099952230->SetBinContent(19,152.6611);
   setHistTTJets0.7937493099952230->SetBinContent(20,97.15001);
   setHistTTJets0.7937493099952230->SetBinError(0,3.595423);
   setHistTTJets0.7937493099952230->SetBinError(1,2.395907);
   setHistTTJets0.7937493099952230->SetBinError(2,2.896579);
   setHistTTJets0.7937493099952230->SetBinError(3,3.423729);
   setHistTTJets0.7937493099952230->SetBinError(4,4.050416);
   setHistTTJets0.7937493099952230->SetBinError(5,4.777114);
   setHistTTJets0.7937493099952230->SetBinError(6,5.616971);
   setHistTTJets0.7937493099952230->SetBinError(7,6.603794);
   setHistTTJets0.7937493099952230->SetBinError(8,7.693497);
   setHistTTJets0.7937493099952230->SetBinError(9,8.930458);
   setHistTTJets0.7937493099952230->SetBinError(10,10.17006);
   setHistTTJets0.7937493099952230->SetBinError(11,11.34387);
   setHistTTJets0.7937493099952230->SetBinError(12,12.40194);
   setHistTTJets0.7937493099952230->SetBinError(13,13.09435);
   setHistTTJets0.7937493099952230->SetBinError(14,12.85079);
   setHistTTJets0.7937493099952230->SetBinError(15,11.16122);
   setHistTTJets0.7937493099952230->SetBinError(16,8.978068);
   setHistTTJets0.7937493099952230->SetBinError(17,6.803744);
   setHistTTJets0.7937493099952230->SetBinError(18,4.89079);
   setHistTTJets0.7937493099952230->SetBinError(19,3.23878);
   setHistTTJets0.7937493099952230->SetBinError(20,2.033834);
   setHistTTJets0.7937493099952230->SetBinError(21,1.38765);
   setHistTTJets0.7937493099952230->SetEntries(249437);
   setHistTTJets0.7937493099952230->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.7937493099952230->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.7937493099952230->SetLineColor(ci);
   setHistTTJets0.7937493099952230->SetLineWidth(2);
   setHistTTJets0.7937493099952230->SetMarkerStyle(20);
   setHistTTJets0.7937493099952230->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.7937493099952230->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.7937493099952230->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.7937493099952230->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.7937493099952230->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.7937493099952230->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.7937493099952230->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.7937493099952230->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.7937493099952230->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.7937493099952230->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.7937493099952230->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.7937493099952230->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.7937493099952230->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.7937493099952230->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.7937493099952230->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.7937493099952230->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.7937493099952230->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.7937493099952230->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.7937493099952230->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.7937493099952230->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.7937493099952230->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.793749309995,"HIST F");
   Double_t xAxis1716[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistWJetsMGHF0.1390512470232231 = new TH1F("setHistWJetsMGHF0.1390512470232231","",20, xAxis1716);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(1,6.278799);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(2,2.233253);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(3,6.331875);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(4,2.920316);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(5,8.530108);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(6,10.7724);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(7,13.05366);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(8,23.37115);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(9,32.26821);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(10,45.90474);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(11,42.40079);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(12,43.01858);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(13,51.98588);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(14,47.65401);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(15,35.38927);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(16,25.69);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(17,9.490933);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(18,10.57807);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(19,7.877065);
   setHistWJetsMGHF0.1390512470232231->SetBinContent(20,2.72782);
   setHistWJetsMGHF0.1390512470232231->SetBinError(0,1.365021);
   setHistWJetsMGHF0.1390512470232231->SetBinError(1,1.156542);
   setHistWJetsMGHF0.1390512470232231->SetBinError(2,1.125901);
   setHistWJetsMGHF0.1390512470232231->SetBinError(3,2.093664);
   setHistWJetsMGHF0.1390512470232231->SetBinError(4,1.422421);
   setHistWJetsMGHF0.1390512470232231->SetBinError(5,2.720844);
   setHistWJetsMGHF0.1390512470232231->SetBinError(6,2.968752);
   setHistWJetsMGHF0.1390512470232231->SetBinError(7,3.107416);
   setHistWJetsMGHF0.1390512470232231->SetBinError(8,4.559002);
   setHistWJetsMGHF0.1390512470232231->SetBinError(9,5.177996);
   setHistWJetsMGHF0.1390512470232231->SetBinError(10,6.205277);
   setHistWJetsMGHF0.1390512470232231->SetBinError(11,5.480666);
   setHistWJetsMGHF0.1390512470232231->SetBinError(12,5.261911);
   setHistWJetsMGHF0.1390512470232231->SetBinError(13,6.631993);
   setHistWJetsMGHF0.1390512470232231->SetBinError(14,6.002941);
   setHistWJetsMGHF0.1390512470232231->SetBinError(15,5.082205);
   setHistWJetsMGHF0.1390512470232231->SetBinError(16,4.096887);
   setHistWJetsMGHF0.1390512470232231->SetBinError(17,2.46611);
   setHistWJetsMGHF0.1390512470232231->SetBinError(18,2.553713);
   setHistWJetsMGHF0.1390512470232231->SetBinError(19,2.204868);
   setHistWJetsMGHF0.1390512470232231->SetBinError(20,1.282002);
   setHistWJetsMGHF0.1390512470232231->SetBinError(21,0.4783879);
   setHistWJetsMGHF0.1390512470232231->SetEntries(798);
   setHistWJetsMGHF0.1390512470232231->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.1390512470232231->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.1390512470232231->SetLineColor(ci);
   setHistWJetsMGHF0.1390512470232231->SetLineWidth(2);
   setHistWJetsMGHF0.1390512470232231->SetMarkerStyle(20);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.1390512470232231->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.1390512470232231->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.1390512470232231->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.1390512470232231->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.1390512470232231->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.1390512470232231->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.1390512470232231->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.1390512470232231->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.1390512470232231->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.1390512470232231->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.1390512470232231->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.1390512470232231->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.1390512470232231->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.1390512470232231->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.139051247023,"HIST F");
   Double_t xAxis1717[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistWJetsMGLF0.08939359093722232 = new TH1F("setHistWJetsMGLF0.08939359093722232","",20, xAxis1717);
   setHistWJetsMGLF0.08939359093722232->SetBinContent(10,1.555733);
   setHistWJetsMGLF0.08939359093722232->SetBinContent(17,0.9516768);
   setHistWJetsMGLF0.08939359093722232->SetBinContent(20,0.1663905);
   setHistWJetsMGLF0.08939359093722232->SetBinError(10,1.398233);
   setHistWJetsMGLF0.08939359093722232->SetBinError(17,0.9516768);
   setHistWJetsMGLF0.08939359093722232->SetBinError(20,0.1663905);
   setHistWJetsMGLF0.08939359093722232->SetEntries(4);
   setHistWJetsMGLF0.08939359093722232->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.08939359093722232->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.08939359093722232->SetLineColor(ci);
   setHistWJetsMGLF0.08939359093722232->SetLineWidth(2);
   setHistWJetsMGLF0.08939359093722232->SetMarkerStyle(20);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.08939359093722232->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.08939359093722232->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.08939359093722232->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.08939359093722232->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.08939359093722232->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.08939359093722232->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.08939359093722232->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.08939359093722232->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.08939359093722232->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.08939359093722232->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.08939359093722232->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.08939359093722232->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.08939359093722232->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.08939359093722232->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.0893935909372,"HIST F");
   Double_t xAxis1718[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistDY0.3425389490692233 = new TH1F("setHistDY0.3425389490692233","",20, xAxis1718);
   setHistDY0.3425389490692233->SetBinContent(4,2.609652);
   setHistDY0.3425389490692233->SetBinContent(7,5.034026);
   setHistDY0.3425389490692233->SetBinContent(9,2.566442);
   setHistDY0.3425389490692233->SetBinContent(10,10.32122);
   setHistDY0.3425389490692233->SetBinContent(11,5.748185);
   setHistDY0.3425389490692233->SetBinContent(12,10.2356);
   setHistDY0.3425389490692233->SetBinContent(13,15.25255);
   setHistDY0.3425389490692233->SetBinContent(14,11.99637);
   setHistDY0.3425389490692233->SetBinContent(15,2.625188);
   setHistDY0.3425389490692233->SetBinContent(16,5.440431);
   setHistDY0.3425389490692233->SetBinContent(17,5.112895);
   setHistDY0.3425389490692233->SetBinContent(18,2.906337);
   setHistDY0.3425389490692233->SetBinContent(19,0.1479131);
   setHistDY0.3425389490692233->SetBinError(4,2.609652);
   setHistDY0.3425389490692233->SetBinError(7,3.566165);
   setHistDY0.3425389490692233->SetBinError(9,2.566442);
   setHistDY0.3425389490692233->SetBinError(10,5.318907);
   setHistDY0.3425389490692233->SetBinError(11,4.065368);
   setHistDY0.3425389490692233->SetBinError(12,5.191508);
   setHistDY0.3425389490692233->SetBinError(13,6.882453);
   setHistDY0.3425389490692233->SetBinError(14,6.005332);
   setHistDY0.3425389490692233->SetBinError(15,2.625188);
   setHistDY0.3425389490692233->SetBinError(16,3.85082);
   setHistDY0.3425389490692233->SetBinError(17,4.997458);
   setHistDY0.3425389490692233->SetBinError(18,2.906337);
   setHistDY0.3425389490692233->SetBinError(19,0.1479131);
   setHistDY0.3425389490692233->SetEntries(30);
   setHistDY0.3425389490692233->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.3425389490692233->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.3425389490692233->SetLineColor(ci);
   setHistDY0.3425389490692233->SetLineWidth(2);
   setHistDY0.3425389490692233->SetMarkerStyle(20);
   setHistDY0.3425389490692233->GetXaxis()->SetNdivisions(1005);
   setHistDY0.3425389490692233->GetXaxis()->SetLabelFont(43);
   setHistDY0.3425389490692233->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.3425389490692233->GetXaxis()->SetLabelSize(32);
   setHistDY0.3425389490692233->GetXaxis()->SetTitleSize(35);
   setHistDY0.3425389490692233->GetXaxis()->SetTickLength(0.05);
   setHistDY0.3425389490692233->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.3425389490692233->GetXaxis()->SetTitleFont(43);
   setHistDY0.3425389490692233->GetYaxis()->SetNdivisions(506);
   setHistDY0.3425389490692233->GetYaxis()->SetLabelFont(43);
   setHistDY0.3425389490692233->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.3425389490692233->GetYaxis()->SetLabelSize(32);
   setHistDY0.3425389490692233->GetYaxis()->SetTitleSize(35);
   setHistDY0.3425389490692233->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.3425389490692233->GetYaxis()->SetTitleFont(43);
   setHistDY0.3425389490692233->GetZaxis()->SetLabelFont(43);
   setHistDY0.3425389490692233->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.3425389490692233->GetZaxis()->SetLabelSize(32);
   setHistDY0.3425389490692233->GetZaxis()->SetTitleSize(35);
   setHistDY0.3425389490692233->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.3425389490692233->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.342538949069,"HIST F");
   Double_t xAxis1719[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistQCD_DD0.3765463203262234 = new TH1F("setHistQCD_DD0.3765463203262234","",20, xAxis1719);
   setHistQCD_DD0.3765463203262234->SetBinContent(1,3.517381);
   setHistQCD_DD0.3765463203262234->SetBinContent(2,-2.907586);
   setHistQCD_DD0.3765463203262234->SetBinContent(3,1.560319);
   setHistQCD_DD0.3765463203262234->SetBinContent(4,-0.0531885);
   setHistQCD_DD0.3765463203262234->SetBinContent(5,-4.624876);
   setHistQCD_DD0.3765463203262234->SetBinContent(6,0.8791482);
   setHistQCD_DD0.3765463203262234->SetBinContent(7,-0.776417);
   setHistQCD_DD0.3765463203262234->SetBinContent(8,4.904765);
   setHistQCD_DD0.3765463203262234->SetBinContent(9,9.821511);
   setHistQCD_DD0.3765463203262234->SetBinContent(10,22.47726);
   setHistQCD_DD0.3765463203262234->SetBinContent(11,-1.195642);
   setHistQCD_DD0.3765463203262234->SetBinContent(12,15.05862);
   setHistQCD_DD0.3765463203262234->SetBinContent(13,7.356172);
   setHistQCD_DD0.3765463203262234->SetBinContent(14,23.13694);
   setHistQCD_DD0.3765463203262234->SetBinContent(15,17.45071);
   setHistQCD_DD0.3765463203262234->SetBinContent(16,-2.917176);
   setHistQCD_DD0.3765463203262234->SetBinContent(17,10.93943);
   setHistQCD_DD0.3765463203262234->SetBinContent(18,-1.550972);
   setHistQCD_DD0.3765463203262234->SetBinContent(19,-4.015713);
   setHistQCD_DD0.3765463203262234->SetBinContent(20,0.06477445);
   setHistQCD_DD0.3765463203262234->SetBinError(0,3.359249);
   setHistQCD_DD0.3765463203262234->SetBinError(1,2.349007);
   setHistQCD_DD0.3765463203262234->SetBinError(2,1.50441);
   setHistQCD_DD0.3765463203262234->SetBinError(3,3.041945);
   setHistQCD_DD0.3765463203262234->SetBinError(4,3.067017);
   setHistQCD_DD0.3765463203262234->SetBinError(5,3.152004);
   setHistQCD_DD0.3765463203262234->SetBinError(6,4.559426);
   setHistQCD_DD0.3765463203262234->SetBinError(7,5.341027);
   setHistQCD_DD0.3765463203262234->SetBinError(8,6.561165);
   setHistQCD_DD0.3765463203262234->SetBinError(9,8.420291);
   setHistQCD_DD0.3765463203262234->SetBinError(10,10.29544);
   setHistQCD_DD0.3765463203262234->SetBinError(11,9.43108);
   setHistQCD_DD0.3765463203262234->SetBinError(12,11.30129);
   setHistQCD_DD0.3765463203262234->SetBinError(13,11.5234);
   setHistQCD_DD0.3765463203262234->SetBinError(14,11.62659);
   setHistQCD_DD0.3765463203262234->SetBinError(15,10.21441);
   setHistQCD_DD0.3765463203262234->SetBinError(16,6.766771);
   setHistQCD_DD0.3765463203262234->SetBinError(17,6.194586);
   setHistQCD_DD0.3765463203262234->SetBinError(18,3.413294);
   setHistQCD_DD0.3765463203262234->SetBinError(19,1.556365);
   setHistQCD_DD0.3765463203262234->SetBinError(20,1.924632);
   setHistQCD_DD0.3765463203262234->SetBinError(21,1.37306);
   setHistQCD_DD0.3765463203262234->SetEntries(19197);
   setHistQCD_DD0.3765463203262234->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.3765463203262234->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.3765463203262234->SetLineColor(ci);
   setHistQCD_DD0.3765463203262234->SetLineWidth(2);
   setHistQCD_DD0.3765463203262234->SetMarkerStyle(20);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.3765463203262234->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.3765463203262234->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.3765463203262234->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.3765463203262234->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.3765463203262234->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.3765463203262234->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.3765463203262234->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.3765463203262234->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.3765463203262234->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.3765463203262234->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.3765463203262234->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.3765463203262234->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.3765463203262234->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.3765463203262234->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.376546320326,"HIST F");
   ->Draw("same");
   Double_t xAxis1720[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistdata0.2880976454982235 = new TH1F("setHistdata0.2880976454982235","",20, xAxis1720);
   setHistdata0.2880976454982235->SetBinContent(1,233);
   setHistdata0.2880976454982235->SetBinContent(2,89);
   setHistdata0.2880976454982235->SetBinContent(3,133);
   setHistdata0.2880976454982235->SetBinContent(4,210);
   setHistdata0.2880976454982235->SetBinContent(5,285);
   setHistdata0.2880976454982235->SetBinContent(6,394);
   setHistdata0.2880976454982235->SetBinContent(7,523);
   setHistdata0.2880976454982235->SetBinContent(8,800);
   setHistdata0.2880976454982235->SetBinContent(9,1032);
   setHistdata0.2880976454982235->SetBinContent(10,1289);
   setHistdata0.2880976454982235->SetBinContent(11,1662);
   setHistdata0.2880976454982235->SetBinContent(12,2006);
   setHistdata0.2880976454982235->SetBinContent(13,2224);
   setHistdata0.2880976454982235->SetBinContent(14,2081);
   setHistdata0.2880976454982235->SetBinContent(15,1669);
   setHistdata0.2880976454982235->SetBinContent(16,1075);
   setHistdata0.2880976454982235->SetBinContent(17,659);
   setHistdata0.2880976454982235->SetBinContent(18,380);
   setHistdata0.2880976454982235->SetBinContent(19,154);
   setHistdata0.2880976454982235->SetBinContent(20,125);
   setHistdata0.2880976454982235->SetBinError(0,12.24745);
   setHistdata0.2880976454982235->SetBinError(1,9.110434);
   setHistdata0.2880976454982235->SetBinError(2,9.433981);
   setHistdata0.2880976454982235->SetBinError(3,11.53256);
   setHistdata0.2880976454982235->SetBinError(4,14.49138);
   setHistdata0.2880976454982235->SetBinError(5,16.88194);
   setHistdata0.2880976454982235->SetBinError(6,19.84943);
   setHistdata0.2880976454982235->SetBinError(7,22.86919);
   setHistdata0.2880976454982235->SetBinError(8,28.28427);
   setHistdata0.2880976454982235->SetBinError(9,32.12476);
   setHistdata0.2880976454982235->SetBinError(10,35.90265);
   setHistdata0.2880976454982235->SetBinError(11,40.76763);
   setHistdata0.2880976454982235->SetBinError(12,44.78839);
   setHistdata0.2880976454982235->SetBinError(13,47.1593);
   setHistdata0.2880976454982235->SetBinError(14,45.61798);
   setHistdata0.2880976454982235->SetBinError(15,40.8534);
   setHistdata0.2880976454982235->SetBinError(16,32.78719);
   setHistdata0.2880976454982235->SetBinError(17,25.671);
   setHistdata0.2880976454982235->SetBinError(18,19.49359);
   setHistdata0.2880976454982235->SetBinError(19,12.40967);
   setHistdata0.2880976454982235->SetBinError(20,9.273618);
   setHistdata0.2880976454982235->SetBinError(21,6.244998);
   setHistdata0.2880976454982235->SetEntries(17023);
   setHistdata0.2880976454982235->SetFillStyle(0);
   setHistdata0.2880976454982235->SetMarkerStyle(20);
   setHistdata0.2880976454982235->SetMarkerSize(1.15);
   setHistdata0.2880976454982235->GetXaxis()->SetNdivisions(1005);
   setHistdata0.2880976454982235->GetXaxis()->SetLabelFont(43);
   setHistdata0.2880976454982235->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.2880976454982235->GetXaxis()->SetLabelSize(32);
   setHistdata0.2880976454982235->GetXaxis()->SetTitleSize(35);
   setHistdata0.2880976454982235->GetXaxis()->SetTickLength(0.05);
   setHistdata0.2880976454982235->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.2880976454982235->GetXaxis()->SetTitleFont(43);
   setHistdata0.2880976454982235->GetYaxis()->SetNdivisions(506);
   setHistdata0.2880976454982235->GetYaxis()->SetLabelFont(43);
   setHistdata0.2880976454982235->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.2880976454982235->GetYaxis()->SetLabelSize(32);
   setHistdata0.2880976454982235->GetYaxis()->SetTitleSize(35);
   setHistdata0.2880976454982235->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.2880976454982235->GetYaxis()->SetTitleFont(43);
   setHistdata0.2880976454982235->GetZaxis()->SetLabelFont(43);
   setHistdata0.2880976454982235->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.2880976454982235->GetZaxis()->SetLabelSize(32);
   setHistdata0.2880976454982235->GetZaxis()->SetTitleSize(35);
   setHistdata0.2880976454982235->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.2880976454982235->GetZaxis()->SetTitleFont(43);
   setHistdata0.2880976454982235->Draw("PESame");
   
   TH2F *axis0.958271099734_copy2236 = new TH2F("axis0.958271099734_copy2236","",50,10,398.1072,50,0,3113.6);
   axis0.958271099734_copy2236->SetDirectory(0);
   axis0.958271099734_copy2236->SetMarkerStyle(20);
   axis0.958271099734_copy2236->GetXaxis()->SetNdivisions(1005);
   axis0.958271099734_copy2236->GetXaxis()->SetLabelFont(43);
   axis0.958271099734_copy2236->GetXaxis()->SetLabelOffset(0.0105);
   axis0.958271099734_copy2236->GetXaxis()->SetLabelSize(0);
   axis0.958271099734_copy2236->GetXaxis()->SetTitleSize(35);
   axis0.958271099734_copy2236->GetXaxis()->SetTickLength(0.025);
   axis0.958271099734_copy2236->GetXaxis()->SetTitleOffset(1.135);
   axis0.958271099734_copy2236->GetXaxis()->SetTitleFont(43);
   axis0.958271099734_copy2236->GetYaxis()->SetTitle("Events / bin");
   axis0.958271099734_copy2236->GetYaxis()->SetNdivisions(506);
   axis0.958271099734_copy2236->GetYaxis()->SetLabelFont(43);
   axis0.958271099734_copy2236->GetYaxis()->SetLabelOffset(0.0087);
   axis0.958271099734_copy2236->GetYaxis()->SetLabelSize(32);
   axis0.958271099734_copy2236->GetYaxis()->SetTitleSize(35);
   axis0.958271099734_copy2236->GetYaxis()->SetTickLength(0.02631579);
   axis0.958271099734_copy2236->GetYaxis()->SetTitleOffset(1.32);
   axis0.958271099734_copy2236->GetYaxis()->SetTitleFont(43);
   axis0.958271099734_copy2236->GetZaxis()->SetLabelFont(43);
   axis0.958271099734_copy2236->GetZaxis()->SetLabelOffset(0.0087);
   axis0.958271099734_copy2236->GetZaxis()->SetLabelSize(32);
   axis0.958271099734_copy2236->GetZaxis()->SetTitleSize(35);
   axis0.958271099734_copy2236->GetZaxis()->SetTitleOffset(1.32);
   axis0.958271099734_copy2236->GetZaxis()->SetTitleFont(43);
   axis0.958271099734_copy2236->Draw("sameaxis");
   
   pt = new TPaveText(0.165,0.855,0.165,0.855,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(63);
   pt->SetTextSize(32);
   TText *AText = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.265,0.855,0.265,0.855,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(53);
   pt->SetTextSize(32);
   AText = pt->AddText("Preliminary");
   pt->Draw();
   
   pt = new TPaveText(0.165,0.785,0.165,0.785,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(43);
   pt->SetTextSize(32);
   AText = pt->AddText("BDT#lower[0.3]{#scale[0.7]{QCD}}#kern[-0.5]{ }>#kern[-0.5]{ }-0.15");
   pt->Draw();
   
   pt = new TPaveText(0.74,0.94,0.74,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(31);
   pt->SetTextFont(43);
   pt->SetTextSize(34);
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }3j2t, 19.7#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (8TeV)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.745,0.28,0.99,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(34);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("setHistdata0.288097645498","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.376546320326","Multijet","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7a7a7a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistDY0.342538949069","Z/#gamma+jets","F");

   ci = TColor::GetColor("#1959d8");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0f3582");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsMGLF0.0893935909372","W+LF","F");

   ci = TColor::GetColor("#19f266");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0f913d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsMGHF0.139051247023","W+HF","F");

   ci = TColor::GetColor("#0a9128");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#065718");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistTTJets0.793749309995","t#bar{t}","F");

   ci = TColor::GetColor("#f9910c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#955707");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHisttWs0.712263621277","tW/#it{s}-ch.","F");

   ci = TColor::GetColor("#f9c40c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#957507");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHisttChannel0.648865745796","#it{t}-channel","F");

   ci = TColor::GetColor("#ff0505");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990303");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TBox","MC stat.","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433_2->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.949294189433->SetSelected(cvmuon_3j2t_top_logpt_qcdbdt0.949294189433);
}
