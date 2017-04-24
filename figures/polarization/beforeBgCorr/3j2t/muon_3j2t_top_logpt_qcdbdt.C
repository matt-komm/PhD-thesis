void plots_now/3j2t/muon_3j2t_top_logpt_qcdbdt()
{
//=========Macro generated from canvas: cvmuon_3j2t_top_logpt_qcdbdt0.835363901658/
//=========  (Sun Apr 23 16:20:25 2017) by ROOT version6.02/05
   TCanvas *cvmuon_3j2t_top_logpt_qcdbdt0.835363901658 = new TCanvas("cvmuon_3j2t_top_logpt_qcdbdt0.835363901658", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetHighLightColor(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->Range(0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetLeftMargin(0.1150442);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetRightMargin(0.227083);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetTopMargin(0.04002582);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetBottomMargin(0.08064517);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetFrameLineWidth(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1
   TPad *cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1 = new TPad("cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1", "",0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->Range(0.6266667,0.06666676,3.293333,3.87619);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetFillStyle(4000);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetLogx();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetLeftMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetRightMargin(0.26);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetTopMargin(0.65);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetBottomMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.4834299665372224 = new TH2F("axisRes0.4834299665372224","",50,10,398.1072,50,0.6,1.4);
   axisRes0.4834299665372224->SetMarkerStyle(20);
   axisRes0.4834299665372224->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axisRes0.4834299665372224->GetXaxis()->SetNdivisions(1005);
   axisRes0.4834299665372224->GetXaxis()->SetLabelFont(43);
   axisRes0.4834299665372224->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.4834299665372224->GetXaxis()->SetLabelSize(32);
   axisRes0.4834299665372224->GetXaxis()->SetTitleSize(35);
   axisRes0.4834299665372224->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.4834299665372224->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.4834299665372224->GetXaxis()->SetTitleFont(43);
   axisRes0.4834299665372224->GetYaxis()->SetTitle("Data/MC");
   axisRes0.4834299665372224->GetYaxis()->SetNdivisions(406);
   axisRes0.4834299665372224->GetYaxis()->SetLabelFont(43);
   axisRes0.4834299665372224->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.4834299665372224->GetYaxis()->SetLabelSize(32);
   axisRes0.4834299665372224->GetYaxis()->SetTitleSize(35);
   axisRes0.4834299665372224->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.4834299665372224->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.4834299665372224->GetYaxis()->SetTitleFont(43);
   axisRes0.4834299665372224->GetZaxis()->SetLabelFont(43);
   axisRes0.4834299665372224->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.4834299665372224->GetZaxis()->SetLabelSize(32);
   axisRes0.4834299665372224->GetZaxis()->SetTitleSize(35);
   axisRes0.4834299665372224->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.4834299665372224->GetZaxis()->SetTitleFont(43);
   axisRes0.4834299665372224->Draw("AXIS");
   TBox *box = new TBox(10,0.9820271,12.02264,1.017973);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9820271,12.02264,1.017973);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(12.02264,0.9601367,14.4544,1.039863);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(12.02264,0.9601367,14.4544,1.039863);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(14.4544,0.9602303,17.37801,1.03977);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(14.4544,0.9602303,17.37801,1.03977);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(17.37801,0.9647987,20.89296,1.035201);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(17.37801,0.9647987,20.89296,1.035201);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20.89296,0.9729433,25.11886,1.027057);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20.89296,0.9729433,25.11886,1.027057);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(25.11886,0.9765742,30.19952,1.023426);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(25.11886,0.9765742,30.19952,1.023426);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30.19952,0.9788848,36.30781,1.021115);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30.19952,0.9788848,36.30781,1.021115);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(36.30781,0.9829378,43.65158,1.017062);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(36.30781,0.9829378,43.65158,1.017062);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(43.65158,0.9844867,52.48075,1.015513);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(43.65158,0.9844867,52.48075,1.015513);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(52.48075,0.9854444,63.09573,1.014556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(52.48075,0.9854444,63.09573,1.014556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(63.09573,0.9885753,75.85776,1.011425);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(63.09573,0.9885753,75.85776,1.011425);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(75.85776,0.9892912,91.20108,1.010709);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(75.85776,0.9892912,91.20108,1.010709);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(91.20108,0.9895968,109.6478,1.010403);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(91.20108,0.9895968,109.6478,1.010403);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(109.6478,0.9897884,131.8257,1.010212);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(109.6478,0.9897884,131.8257,1.010212);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(131.8257,0.9892973,158.4893,1.010703);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(131.8257,0.9892973,158.4893,1.010703);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(158.4893,0.9874819,190.5461,1.012518);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(158.4893,0.9874819,190.5461,1.012518);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190.5461,0.9826809,229.0868,1.017319);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190.5461,0.9826809,229.0868,1.017319);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(229.0868,0.9790387,275.4229,1.020961);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(229.0868,0.9790387,275.4229,1.020961);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275.4229,0.9730244,331.1311,1.026976);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275.4229,0.9730244,331.1311,1.026976);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(331.1311,0.9734626,398.1072,1.026537);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(331.1311,0.9734626,398.1072,1.026537);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1711[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistdata0.231436629480.7547631470042225 = new TH1F("setHistdata0.231436629480.7547631470042225","",20, xAxis1711);
   setHistdata0.231436629480.7547631470042225->SetBinContent(1,1.124012);
   setHistdata0.231436629480.7547631470042225->SetBinContent(2,1.014639);
   setHistdata0.231436629480.7547631470042225->SetBinContent(3,1.008976);
   setHistdata0.231436629480.7547631470042225->SetBinContent(4,1.161846);
   setHistdata0.231436629480.7547631470042225->SetBinContent(5,1.142902);
   setHistdata0.231436629480.7547631470042225->SetBinContent(6,1.122106);
   setHistdata0.231436629480.7547631470042225->SetBinContent(7,1.061432);
   setHistdata0.231436629480.7547631470042225->SetBinContent(8,1.191509);
   setHistdata0.231436629480.7547631470042225->SetBinContent(9,1.118463);
   setHistdata0.231436629480.7547631470042225->SetBinContent(10,1.042487);
   setHistdata0.231436629480.7547631470042225->SetBinContent(11,1.109684);
   setHistdata0.231436629480.7547631470042225->SetBinContent(12,1.101137);
   setHistdata0.231436629480.7547631470042225->SetBinContent(13,1.07801);
   setHistdata0.231436629480.7547631470042225->SetBinContent(14,1.022523);
   setHistdata0.231436629480.7547631470042225->SetBinContent(15,1.016526);
   setHistdata0.231436629480.7547631470042225->SetBinContent(16,0.9406422);
   setHistdata0.231436629480.7547631470042225->SetBinContent(17,0.911293);
   setHistdata0.231436629480.7547631470042225->SetBinContent(18,0.8957447);
   setHistdata0.231436629480.7547631470042225->SetBinContent(19,0.7438031);
   setHistdata0.231436629480.7547631470042225->SetBinContent(20,0.8424897);
   setHistdata0.231436629480.7547631470042225->SetBinError(0,12.24745);
   setHistdata0.231436629480.7547631470042225->SetBinError(1,0.04394951);
   setHistdata0.231436629480.7547631470042225->SetBinError(2,0.1075516);
   setHistdata0.231436629480.7547631470042225->SetBinError(3,0.08748927);
   setHistdata0.231436629480.7547631470042225->SetBinError(4,0.08017497);
   setHistdata0.231436629480.7547631470042225->SetBinError(5,0.06769967);
   setHistdata0.231436629480.7547631470042225->SetBinError(6,0.05653087);
   setHistdata0.231436629480.7547631470042225->SetBinError(7,0.04641318);
   setHistdata0.231436629480.7547631470042225->SetBinError(8,0.04212622);
   setHistdata0.231436629480.7547631470042225->SetBinError(9,0.03481624);
   setHistdata0.231436629480.7547631470042225->SetBinError(10,0.02903649);
   setHistdata0.231436629480.7547631470042225->SetBinError(11,0.02721973);
   setHistdata0.231436629480.7547631470042225->SetBinError(12,0.02458531);
   setHistdata0.231436629480.7547631470042225->SetBinError(13,0.02285891);
   setHistdata0.231436629480.7547631470042225->SetBinError(14,0.02241491);
   setHistdata0.231436629480.7547631470042225->SetBinError(15,0.02488228);
   setHistdata0.231436629480.7547631470042225->SetBinError(16,0.02868932);
   setHistdata0.231436629480.7547631470042225->SetBinError(17,0.03549894);
   setHistdata0.231436629480.7547631470042225->SetBinError(18,0.04595074);
   setHistdata0.231436629480.7547631470042225->SetBinError(19,0.05993736);
   setHistdata0.231436629480.7547631470042225->SetBinError(20,0.06250342);
   setHistdata0.231436629480.7547631470042225->SetBinError(21,6.244998);
   setHistdata0.231436629480.7547631470042225->SetEntries(17043);
   setHistdata0.231436629480.7547631470042225->SetFillStyle(0);
   setHistdata0.231436629480.7547631470042225->SetMarkerStyle(20);
   setHistdata0.231436629480.7547631470042225->SetMarkerSize(1.15);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetNdivisions(1005);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetLabelFont(43);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetLabelSize(32);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetTitleSize(35);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetTickLength(0.05);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.231436629480.7547631470042225->GetXaxis()->SetTitleFont(43);
   setHistdata0.231436629480.7547631470042225->GetYaxis()->SetNdivisions(506);
   setHistdata0.231436629480.7547631470042225->GetYaxis()->SetLabelFont(43);
   setHistdata0.231436629480.7547631470042225->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.231436629480.7547631470042225->GetYaxis()->SetLabelSize(32);
   setHistdata0.231436629480.7547631470042225->GetYaxis()->SetTitleSize(35);
   setHistdata0.231436629480.7547631470042225->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.231436629480.7547631470042225->GetYaxis()->SetTitleFont(43);
   setHistdata0.231436629480.7547631470042225->GetZaxis()->SetLabelFont(43);
   setHistdata0.231436629480.7547631470042225->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.231436629480.7547631470042225->GetZaxis()->SetLabelSize(32);
   setHistdata0.231436629480.7547631470042225->GetZaxis()->SetTitleSize(35);
   setHistdata0.231436629480.7547631470042225->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.231436629480.7547631470042225->GetZaxis()->SetTitleFont(43);
   setHistdata0.231436629480.7547631470042225->Draw("PESame");
   
   TF1 *axisLine0.239376444492172 = new TF1("axisLine0.239376444492","1",10,398.1072);
   axisLine0.239376444492172->SetFillColor(19);
   axisLine0.239376444492172->SetFillStyle(0);
   axisLine0.239376444492172->SetMarkerStyle(20);
   axisLine0.239376444492172->SetLineWidth(1);
   axisLine0.239376444492172->GetXaxis()->SetNdivisions(1005);
   axisLine0.239376444492172->GetXaxis()->SetLabelFont(43);
   axisLine0.239376444492172->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.239376444492172->GetXaxis()->SetLabelSize(32);
   axisLine0.239376444492172->GetXaxis()->SetTitleSize(35);
   axisLine0.239376444492172->GetXaxis()->SetTickLength(0.05);
   axisLine0.239376444492172->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.239376444492172->GetXaxis()->SetTitleFont(43);
   axisLine0.239376444492172->GetYaxis()->SetNdivisions(506);
   axisLine0.239376444492172->GetYaxis()->SetLabelFont(43);
   axisLine0.239376444492172->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.239376444492172->GetYaxis()->SetLabelSize(32);
   axisLine0.239376444492172->GetYaxis()->SetTitleSize(35);
   axisLine0.239376444492172->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.239376444492172->GetYaxis()->SetTitleFont(43);
   axisLine0.239376444492172->Draw("SameL");
   
   TH2F *axisRes0.483429966537_copy2226 = new TH2F("axisRes0.483429966537_copy2226","",50,10,398.1072,50,0.6,1.4);
   axisRes0.483429966537_copy2226->SetDirectory(0);
   axisRes0.483429966537_copy2226->SetMarkerStyle(20);
   axisRes0.483429966537_copy2226->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axisRes0.483429966537_copy2226->GetXaxis()->SetNdivisions(1005);
   axisRes0.483429966537_copy2226->GetXaxis()->SetLabelFont(43);
   axisRes0.483429966537_copy2226->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.483429966537_copy2226->GetXaxis()->SetLabelSize(32);
   axisRes0.483429966537_copy2226->GetXaxis()->SetTitleSize(35);
   axisRes0.483429966537_copy2226->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.483429966537_copy2226->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.483429966537_copy2226->GetXaxis()->SetTitleFont(43);
   axisRes0.483429966537_copy2226->GetYaxis()->SetTitle("Data/MC");
   axisRes0.483429966537_copy2226->GetYaxis()->SetNdivisions(406);
   axisRes0.483429966537_copy2226->GetYaxis()->SetLabelFont(43);
   axisRes0.483429966537_copy2226->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.483429966537_copy2226->GetYaxis()->SetLabelSize(32);
   axisRes0.483429966537_copy2226->GetYaxis()->SetTitleSize(35);
   axisRes0.483429966537_copy2226->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.483429966537_copy2226->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.483429966537_copy2226->GetYaxis()->SetTitleFont(43);
   axisRes0.483429966537_copy2226->GetZaxis()->SetLabelFont(43);
   axisRes0.483429966537_copy2226->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.483429966537_copy2226->GetZaxis()->SetLabelSize(32);
   axisRes0.483429966537_copy2226->GetZaxis()->SetTitleSize(35);
   axisRes0.483429966537_copy2226->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.483429966537_copy2226->GetZaxis()->SetTitleFont(43);
   axisRes0.483429966537_copy2226->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_1->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->cd();
  
// ------------>Primitives in pad: cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2
   TPad *cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2 = new TPad("cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2", "",0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->Range(0.6266667,-1911.86,3.293333,3550.596);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetFillStyle(4000);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetLogx();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetLeftMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetRightMargin(0.26);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetTopMargin(0.08);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetBottomMargin(0.35);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->SetFrameBorderMode(0);
   
   TH2F *axis0.6303736975282227 = new TH2F("axis0.6303736975282227","",50,10,398.1072,50,0,3113.6);
   axis0.6303736975282227->SetMarkerStyle(20);
   axis0.6303736975282227->GetXaxis()->SetNdivisions(1005);
   axis0.6303736975282227->GetXaxis()->SetLabelFont(43);
   axis0.6303736975282227->GetXaxis()->SetLabelOffset(0.0105);
   axis0.6303736975282227->GetXaxis()->SetLabelSize(0);
   axis0.6303736975282227->GetXaxis()->SetTitleSize(35);
   axis0.6303736975282227->GetXaxis()->SetTickLength(0.025);
   axis0.6303736975282227->GetXaxis()->SetTitleOffset(1.135);
   axis0.6303736975282227->GetXaxis()->SetTitleFont(43);
   axis0.6303736975282227->GetYaxis()->SetTitle("Events / bin");
   axis0.6303736975282227->GetYaxis()->SetNdivisions(506);
   axis0.6303736975282227->GetYaxis()->SetLabelFont(43);
   axis0.6303736975282227->GetYaxis()->SetLabelOffset(0.0087);
   axis0.6303736975282227->GetYaxis()->SetLabelSize(32);
   axis0.6303736975282227->GetYaxis()->SetTitleSize(35);
   axis0.6303736975282227->GetYaxis()->SetTickLength(0.02631579);
   axis0.6303736975282227->GetYaxis()->SetTitleOffset(1.32);
   axis0.6303736975282227->GetYaxis()->SetTitleFont(43);
   axis0.6303736975282227->GetZaxis()->SetLabelFont(43);
   axis0.6303736975282227->GetZaxis()->SetLabelOffset(0.0087);
   axis0.6303736975282227->GetZaxis()->SetLabelSize(32);
   axis0.6303736975282227->GetZaxis()->SetTitleSize(35);
   axis0.6303736975282227->GetZaxis()->SetTitleOffset(1.32);
   axis0.6303736975282227->GetZaxis()->SetTitleFont(43);
   axis0.6303736975282227->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1712[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *_stack_171_stack_172 = new TH1F("_stack_171_stack_172","",20, xAxis1712);
   _stack_171_stack_172->SetMinimum(-10.62672);
   _stack_171_stack_172->SetMaximum(2166.213);
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
   
   TH1F *setHisttChannel0.3000176100752228 = new TH1F("setHisttChannel0.3000176100752228","",20, xAxis1713);
   setHisttChannel0.3000176100752228->SetBinContent(1,13.17161);
   setHisttChannel0.3000176100752228->SetBinContent(2,5.64376);
   setHisttChannel0.3000176100752228->SetBinContent(3,8.568132);
   setHisttChannel0.3000176100752228->SetBinContent(4,12.46368);
   setHisttChannel0.3000176100752228->SetBinContent(5,18.40663);
   setHisttChannel0.3000176100752228->SetBinContent(6,23.75092);
   setHisttChannel0.3000176100752228->SetBinContent(7,30.51476);
   setHisttChannel0.3000176100752228->SetBinContent(8,44.76646);
   setHisttChannel0.3000176100752228->SetBinContent(9,57.69538);
   setHisttChannel0.3000176100752228->SetBinContent(10,74.93801);
   setHisttChannel0.3000176100752228->SetBinContent(11,93.69745);
   setHisttChannel0.3000176100752228->SetBinContent(12,111.9357);
   setHisttChannel0.3000176100752228->SetBinContent(13,126.2242);
   setHisttChannel0.3000176100752228->SetBinContent(14,113.727);
   setHisttChannel0.3000176100752228->SetBinContent(15,98.82288);
   setHisttChannel0.3000176100752228->SetBinContent(16,61.65007);
   setHisttChannel0.3000176100752228->SetBinContent(17,34.78134);
   setHisttChannel0.3000176100752228->SetBinContent(18,22.6025);
   setHisttChannel0.3000176100752228->SetBinContent(19,9.106204);
   setHisttChannel0.3000176100752228->SetBinContent(20,6.074238);
   setHisttChannel0.3000176100752228->SetBinError(0,0.9856333);
   setHisttChannel0.3000176100752228->SetBinError(1,0.6797408);
   setHisttChannel0.3000176100752228->SetBinError(2,0.7754333);
   setHisttChannel0.3000176100752228->SetBinError(3,0.9771191);
   setHisttChannel0.3000176100752228->SetBinError(4,1.175125);
   setHisttChannel0.3000176100752228->SetBinError(5,1.438336);
   setHisttChannel0.3000176100752228->SetBinError(6,1.617032);
   setHisttChannel0.3000176100752228->SetBinError(7,1.858453);
   setHisttChannel0.3000176100752228->SetBinError(8,2.215962);
   setHisttChannel0.3000176100752228->SetBinError(9,2.523773);
   setHisttChannel0.3000176100752228->SetBinError(10,2.876351);
   setHisttChannel0.3000176100752228->SetBinError(11,3.219565);
   setHisttChannel0.3000176100752228->SetBinError(12,3.522198);
   setHisttChannel0.3000176100752228->SetBinError(13,3.739717);
   setHisttChannel0.3000176100752228->SetBinError(14,3.530269);
   setHisttChannel0.3000176100752228->SetBinError(15,3.296054);
   setHisttChannel0.3000176100752228->SetBinError(16,2.588002);
   setHisttChannel0.3000176100752228->SetBinError(17,1.95312);
   setHisttChannel0.3000176100752228->SetBinError(18,1.571602);
   setHisttChannel0.3000176100752228->SetBinError(19,0.9874901);
   setHisttChannel0.3000176100752228->SetBinError(20,0.6493468);
   setHisttChannel0.3000176100752228->SetBinError(21,0.4798538);
   setHisttChannel0.3000176100752228->SetEntries(20202);
   setHisttChannel0.3000176100752228->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.3000176100752228->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.3000176100752228->SetLineColor(ci);
   setHisttChannel0.3000176100752228->SetLineWidth(2);
   setHisttChannel0.3000176100752228->SetMarkerStyle(20);
   setHisttChannel0.3000176100752228->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.3000176100752228->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.3000176100752228->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.3000176100752228->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.3000176100752228->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.3000176100752228->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.3000176100752228->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.3000176100752228->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.3000176100752228->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.3000176100752228->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.3000176100752228->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.3000176100752228->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.3000176100752228->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.3000176100752228->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.3000176100752228->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.3000176100752228->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.3000176100752228->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.3000176100752228->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.3000176100752228->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.3000176100752228->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.3000176100752228->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.300017610075,"HIST F");
   Double_t xAxis1714[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHisttWs0.4773036267212229 = new TH1F("setHisttWs0.4773036267212229","",20, xAxis1714);
   setHisttWs0.4773036267212229->SetBinContent(1,5.52816);
   setHisttWs0.4773036267212229->SetBinContent(2,2.069354);
   setHisttWs0.4773036267212229->SetBinContent(3,1.666616);
   setHisttWs0.4773036267212229->SetBinContent(4,5.728826);
   setHisttWs0.4773036267212229->SetBinContent(5,8.3187);
   setHisttWs0.4773036267212229->SetBinContent(6,8.731388);
   setHisttWs0.4773036267212229->SetBinContent(7,12.64813);
   setHisttWs0.4773036267212229->SetBinContent(8,15.95766);
   setHisttWs0.4773036267212229->SetBinContent(9,24.07831);
   setHisttWs0.4773036267212229->SetBinContent(10,33.1624);
   setHisttWs0.4773036267212229->SetBinContent(11,40.33545);
   setHisttWs0.4773036267212229->SetBinContent(12,48.16161);
   setHisttWs0.4773036267212229->SetBinContent(13,58.35733);
   setHisttWs0.4773036267212229->SetBinContent(14,57.89266);
   setHisttWs0.4773036267212229->SetBinContent(15,55.82075);
   setHisttWs0.4773036267212229->SetBinContent(16,37.38652);
   setHisttWs0.4773036267212229->SetBinContent(17,27.25132);
   setHisttWs0.4773036267212229->SetBinContent(18,17.42881);
   setHisttWs0.4773036267212229->SetBinContent(19,9.517553);
   setHisttWs0.4773036267212229->SetBinContent(20,8.056043);
   setHisttWs0.4773036267212229->SetBinError(0,1.336876);
   setHisttWs0.4773036267212229->SetBinError(1,0.8035064);
   setHisttWs0.4773036267212229->SetBinError(2,0.9711914);
   setHisttWs0.4773036267212229->SetBinError(3,0.8426538);
   setHisttWs0.4773036267212229->SetBinError(4,1.628689);
   setHisttWs0.4773036267212229->SetBinError(5,1.958104);
   setHisttWs0.4773036267212229->SetBinError(6,2.030927);
   setHisttWs0.4773036267212229->SetBinError(7,2.347922);
   setHisttWs0.4773036267212229->SetBinError(8,2.635341);
   setHisttWs0.4773036267212229->SetBinError(9,3.225433);
   setHisttWs0.4773036267212229->SetBinError(10,3.864479);
   setHisttWs0.4773036267212229->SetBinError(11,4.100861);
   setHisttWs0.4773036267212229->SetBinError(12,4.541165);
   setHisttWs0.4773036267212229->SetBinError(13,4.977138);
   setHisttWs0.4773036267212229->SetBinError(14,4.930327);
   setHisttWs0.4773036267212229->SetBinError(15,4.868289);
   setHisttWs0.4773036267212229->SetBinError(16,3.926758);
   setHisttWs0.4773036267212229->SetBinError(17,3.383865);
   setHisttWs0.4773036267212229->SetBinError(18,2.845255);
   setHisttWs0.4773036267212229->SetBinError(19,1.884868);
   setHisttWs0.4773036267212229->SetBinError(20,1.234726);
   setHisttWs0.4773036267212229->SetBinError(21,1.435162);
   setHisttWs0.4773036267212229->SetEntries(3351);
   setHisttWs0.4773036267212229->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.4773036267212229->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.4773036267212229->SetLineColor(ci);
   setHisttWs0.4773036267212229->SetLineWidth(2);
   setHisttWs0.4773036267212229->SetMarkerStyle(20);
   setHisttWs0.4773036267212229->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.4773036267212229->GetXaxis()->SetLabelFont(43);
   setHisttWs0.4773036267212229->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.4773036267212229->GetXaxis()->SetLabelSize(32);
   setHisttWs0.4773036267212229->GetXaxis()->SetTitleSize(35);
   setHisttWs0.4773036267212229->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.4773036267212229->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.4773036267212229->GetXaxis()->SetTitleFont(43);
   setHisttWs0.4773036267212229->GetYaxis()->SetNdivisions(506);
   setHisttWs0.4773036267212229->GetYaxis()->SetLabelFont(43);
   setHisttWs0.4773036267212229->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.4773036267212229->GetYaxis()->SetLabelSize(32);
   setHisttWs0.4773036267212229->GetYaxis()->SetTitleSize(35);
   setHisttWs0.4773036267212229->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.4773036267212229->GetYaxis()->SetTitleFont(43);
   setHisttWs0.4773036267212229->GetZaxis()->SetLabelFont(43);
   setHisttWs0.4773036267212229->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.4773036267212229->GetZaxis()->SetLabelSize(32);
   setHisttWs0.4773036267212229->GetZaxis()->SetTitleSize(35);
   setHisttWs0.4773036267212229->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.4773036267212229->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.477303626721,"HIST F");
   Double_t xAxis1715[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistTTJets0.6292534949232230 = new TH1F("setHistTTJets0.6292534949232230","",20, xAxis1715);
   setHistTTJets0.6292534949232230->SetBinContent(1,176.1731);
   setHistTTJets0.6292534949232230->SetBinContent(2,80.32127);
   setHistTTJets0.6292534949232230->SetBinContent(3,111.9407);
   setHistTTJets0.6292534949232230->SetBinContent(4,155.5719);
   setHistTTJets0.6292534949232230->SetBinContent(5,216.2238);
   setHistTTJets0.6292534949232230->SetBinContent(6,303.5586);
   setHistTTJets0.6292534949232230->SetBinContent(7,427.532);
   setHistTTJets0.6292534949232230->SetBinContent(8,576.8728);
   setHistTTJets0.6292534949232230->SetBinContent(9,786.9498);
   setHistTTJets0.6292534949232230->SetBinContent(10,1031.523);
   setHistTTJets0.6292534949232230->SetBinContent(11,1305.572);
   setHistTTJets0.6292534949232230->SetBinContent(12,1577.867);
   setHistTTJets0.6292534949232230->SetBinContent(13,1786.344);
   setHistTTJets0.6292534949232230->SetBinContent(14,1764.618);
   setHistTTJets0.6292534949232230->SetBinContent(15,1419.256);
   setHistTTJets0.6292534949232230->SetBinContent(16,1003.671);
   setHistTTJets0.6292534949232230->SetBinContent(17,629.4078);
   setHistTTJets0.6292534949232230->SetBinContent(18,366.3203);
   setHistTTJets0.6292534949232230->SetBinContent(19,181.0112);
   setHistTTJets0.6292534949232230->SetBinContent(20,130.0566);
   setHistTTJets0.6292534949232230->SetBinError(0,3.199006);
   setHistTTJets0.6292534949232230->SetBinError(1,2.148261);
   setHistTTJets0.6292534949232230->SetBinError(2,2.581229);
   setHistTTJets0.6292534949232230->SetBinError(3,3.06125);
   setHistTTJets0.6292534949232230->SetBinError(4,3.617844);
   setHistTTJets0.6292534949232230->SetBinError(5,4.255427);
   setHistTTJets0.6292534949232230->SetBinError(6,5.032993);
   setHistTTJets0.6292534949232230->SetBinError(7,5.94353);
   setHistTTJets0.6292534949232230->SetBinError(8,6.918384);
   setHistTTJets0.6292534949232230->SetBinError(9,8.062492);
   setHistTTJets0.6292534949232230->SetBinError(10,9.219918);
   setHistTTJets0.6292534949232230->SetBinError(11,10.35198);
   setHistTTJets0.6292534949232230->SetBinError(12,11.39355);
   setHistTTJets0.6292534949232230->SetBinError(13,12.13012);
   setHistTTJets0.6292534949232230->SetBinError(14,12.05745);
   setHistTTJets0.6292534949232230->SetBinError(15,10.72796);
   setHistTTJets0.6292534949232230->SetBinError(16,8.990551);
   setHistTTJets0.6292534949232230->SetBinError(17,7.141299);
   setHistTTJets0.6292534949232230->SetBinError(18,5.438405);
   setHistTTJets0.6292534949232230->SetBinError(19,3.846974);
   setHistTTJets0.6292534949232230->SetBinError(20,2.596877);
   setHistTTJets0.6292534949232230->SetBinError(21,2.025851);
   setHistTTJets0.6292534949232230->SetEntries(249437);
   setHistTTJets0.6292534949232230->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.6292534949232230->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.6292534949232230->SetLineColor(ci);
   setHistTTJets0.6292534949232230->SetLineWidth(2);
   setHistTTJets0.6292534949232230->SetMarkerStyle(20);
   setHistTTJets0.6292534949232230->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.6292534949232230->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.6292534949232230->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.6292534949232230->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.6292534949232230->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.6292534949232230->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.6292534949232230->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.6292534949232230->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.6292534949232230->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.6292534949232230->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.6292534949232230->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.6292534949232230->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.6292534949232230->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.6292534949232230->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.6292534949232230->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.6292534949232230->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.6292534949232230->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.6292534949232230->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.6292534949232230->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.6292534949232230->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.6292534949232230->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.629253494923,"HIST F");
   Double_t xAxis1716[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistWJetsMGHF0.7709439306352231 = new TH1F("setHistWJetsMGHF0.7709439306352231","",20, xAxis1716);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(1,8.902889);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(2,2.589103);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(3,8.081094);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(4,3.710466);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(5,11.04095);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(6,14.20551);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(7,16.39775);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(8,28.91562);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(9,40.87933);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(10,59.44168);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(11,51.98959);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(12,55.68931);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(13,65.34361);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(14,60.50164);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(15,47.17179);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(16,36.11431);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(17,12.97865);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(18,15.72407);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(19,11.23637);
   setHistWJetsMGHF0.7709439306352231->SetBinContent(20,3.871449);
   setHistWJetsMGHF0.7709439306352231->SetBinError(0,2.048594);
   setHistWJetsMGHF0.7709439306352231->SetBinError(1,1.624811);
   setHistWJetsMGHF0.7709439306352231->SetBinError(2,1.325159);
   setHistWJetsMGHF0.7709439306352231->SetBinError(3,2.681857);
   setHistWJetsMGHF0.7709439306352231->SetBinError(4,1.701705);
   setHistWJetsMGHF0.7709439306352231->SetBinError(5,3.402217);
   setHistWJetsMGHF0.7709439306352231->SetBinError(6,3.846894);
   setHistWJetsMGHF0.7709439306352231->SetBinError(7,3.844339);
   setHistWJetsMGHF0.7709439306352231->SetBinError(8,5.33556);
   setHistWJetsMGHF0.7709439306352231->SetBinError(9,6.443561);
   setHistWJetsMGHF0.7709439306352231->SetBinError(10,7.830905);
   setHistWJetsMGHF0.7709439306352231->SetBinError(11,6.531669);
   setHistWJetsMGHF0.7709439306352231->SetBinError(12,6.802578);
   setHistWJetsMGHF0.7709439306352231->SetBinError(13,8.065116);
   setHistWJetsMGHF0.7709439306352231->SetBinError(14,7.484811);
   setHistWJetsMGHF0.7709439306352231->SetBinError(15,6.60381);
   setHistWJetsMGHF0.7709439306352231->SetBinError(16,5.644033);
   setHistWJetsMGHF0.7709439306352231->SetBinError(17,3.169756);
   setHistWJetsMGHF0.7709439306352231->SetBinError(18,3.683469);
   setHistWJetsMGHF0.7709439306352231->SetBinError(19,3.0674);
   setHistWJetsMGHF0.7709439306352231->SetBinError(20,1.745766);
   setHistWJetsMGHF0.7709439306352231->SetBinError(21,0.6077998);
   setHistWJetsMGHF0.7709439306352231->SetEntries(798);
   setHistWJetsMGHF0.7709439306352231->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.7709439306352231->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.7709439306352231->SetLineColor(ci);
   setHistWJetsMGHF0.7709439306352231->SetLineWidth(2);
   setHistWJetsMGHF0.7709439306352231->SetMarkerStyle(20);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.7709439306352231->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.7709439306352231->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.7709439306352231->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.7709439306352231->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.7709439306352231->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.7709439306352231->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.7709439306352231->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.7709439306352231->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.7709439306352231->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.7709439306352231->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.7709439306352231->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.7709439306352231->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.7709439306352231->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.7709439306352231->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.770943930635,"HIST F");
   Double_t xAxis1717[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistWJetsMGLF0.5658082009342232 = new TH1F("setHistWJetsMGLF0.5658082009342232","",20, xAxis1717);
   setHistWJetsMGLF0.5658082009342232->SetBinContent(10,1.772345);
   setHistWJetsMGLF0.5658082009342232->SetBinContent(17,1.274875);
   setHistWJetsMGLF0.5658082009342232->SetBinContent(20,0.2466954);
   setHistWJetsMGLF0.5658082009342232->SetBinError(10,1.56304);
   setHistWJetsMGLF0.5658082009342232->SetBinError(17,1.274875);
   setHistWJetsMGLF0.5658082009342232->SetBinError(20,0.2466954);
   setHistWJetsMGLF0.5658082009342232->SetEntries(4);
   setHistWJetsMGLF0.5658082009342232->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.5658082009342232->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.5658082009342232->SetLineColor(ci);
   setHistWJetsMGLF0.5658082009342232->SetLineWidth(2);
   setHistWJetsMGLF0.5658082009342232->SetMarkerStyle(20);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.5658082009342232->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.5658082009342232->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.5658082009342232->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5658082009342232->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.5658082009342232->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5658082009342232->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5658082009342232->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.5658082009342232->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.5658082009342232->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5658082009342232->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.5658082009342232->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5658082009342232->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5658082009342232->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.5658082009342232->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.565808200934,"HIST F");
   Double_t xAxis1718[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistDY0.3393866712532233 = new TH1F("setHistDY0.3393866712532233","",20, xAxis1718);
   setHistDY0.3393866712532233->SetBinContent(4,3.325201);
   setHistDY0.3393866712532233->SetBinContent(7,6.414323);
   setHistDY0.3393866712532233->SetBinContent(9,3.270144);
   setHistDY0.3393866712532233->SetBinContent(10,13.15124);
   setHistDY0.3393866712532233->SetBinContent(11,7.324301);
   setHistDY0.3393866712532233->SetBinContent(12,13.04214);
   setHistDY0.3393866712532233->SetBinContent(13,19.4347);
   setHistDY0.3393866712532233->SetBinContent(14,15.2857);
   setHistDY0.3393866712532233->SetBinContent(15,3.344997);
   setHistDY0.3393866712532233->SetBinContent(16,6.932161);
   setHistDY0.3393866712532233->SetBinContent(17,6.514819);
   setHistDY0.3393866712532233->SetBinContent(18,3.703236);
   setHistDY0.3393866712532233->SetBinContent(19,0.1884699);
   setHistDY0.3393866712532233->SetBinError(4,3.325201);
   setHistDY0.3393866712532233->SetBinError(7,4.543984);
   setHistDY0.3393866712532233->SetBinError(9,3.270144);
   setHistDY0.3393866712532233->SetBinError(10,6.777316);
   setHistDY0.3393866712532233->SetBinError(11,5.180065);
   setHistDY0.3393866712532233->SetBinError(12,6.614986);
   setHistDY0.3393866712532233->SetBinError(13,8.769577);
   setHistDY0.3393866712532233->SetBinError(14,7.651955);
   setHistDY0.3393866712532233->SetBinError(15,3.344997);
   setHistDY0.3393866712532233->SetBinError(16,4.90669);
   setHistDY0.3393866712532233->SetBinError(17,6.367729);
   setHistDY0.3393866712532233->SetBinError(18,3.703236);
   setHistDY0.3393866712532233->SetBinError(19,0.1884699);
   setHistDY0.3393866712532233->SetEntries(30);
   setHistDY0.3393866712532233->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.3393866712532233->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.3393866712532233->SetLineColor(ci);
   setHistDY0.3393866712532233->SetLineWidth(2);
   setHistDY0.3393866712532233->SetMarkerStyle(20);
   setHistDY0.3393866712532233->GetXaxis()->SetNdivisions(1005);
   setHistDY0.3393866712532233->GetXaxis()->SetLabelFont(43);
   setHistDY0.3393866712532233->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.3393866712532233->GetXaxis()->SetLabelSize(32);
   setHistDY0.3393866712532233->GetXaxis()->SetTitleSize(35);
   setHistDY0.3393866712532233->GetXaxis()->SetTickLength(0.05);
   setHistDY0.3393866712532233->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.3393866712532233->GetXaxis()->SetTitleFont(43);
   setHistDY0.3393866712532233->GetYaxis()->SetNdivisions(506);
   setHistDY0.3393866712532233->GetYaxis()->SetLabelFont(43);
   setHistDY0.3393866712532233->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.3393866712532233->GetYaxis()->SetLabelSize(32);
   setHistDY0.3393866712532233->GetYaxis()->SetTitleSize(35);
   setHistDY0.3393866712532233->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.3393866712532233->GetYaxis()->SetTitleFont(43);
   setHistDY0.3393866712532233->GetZaxis()->SetLabelFont(43);
   setHistDY0.3393866712532233->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.3393866712532233->GetZaxis()->SetLabelSize(32);
   setHistDY0.3393866712532233->GetZaxis()->SetTitleSize(35);
   setHistDY0.3393866712532233->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.3393866712532233->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.339386671253,"HIST F");
   Double_t xAxis1719[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistQCD_DD0.907073923582234 = new TH1F("setHistQCD_DD0.907073923582234","",20, xAxis1719);
   setHistQCD_DD0.907073923582234->SetBinContent(1,3.517381);
   setHistQCD_DD0.907073923582234->SetBinContent(2,-2.907586);
   setHistQCD_DD0.907073923582234->SetBinContent(3,1.560319);
   setHistQCD_DD0.907073923582234->SetBinContent(4,-0.0531885);
   setHistQCD_DD0.907073923582234->SetBinContent(5,-4.624876);
   setHistQCD_DD0.907073923582234->SetBinContent(6,0.8791482);
   setHistQCD_DD0.907073923582234->SetBinContent(7,-0.776417);
   setHistQCD_DD0.907073923582234->SetBinContent(8,4.904765);
   setHistQCD_DD0.907073923582234->SetBinContent(9,9.821511);
   setHistQCD_DD0.907073923582234->SetBinContent(10,22.47726);
   setHistQCD_DD0.907073923582234->SetBinContent(11,-1.195642);
   setHistQCD_DD0.907073923582234->SetBinContent(12,15.05862);
   setHistQCD_DD0.907073923582234->SetBinContent(13,7.356172);
   setHistQCD_DD0.907073923582234->SetBinContent(14,23.13694);
   setHistQCD_DD0.907073923582234->SetBinContent(15,17.45071);
   setHistQCD_DD0.907073923582234->SetBinContent(16,-2.917176);
   setHistQCD_DD0.907073923582234->SetBinContent(17,10.93943);
   setHistQCD_DD0.907073923582234->SetBinContent(18,-1.550972);
   setHistQCD_DD0.907073923582234->SetBinContent(19,-4.015713);
   setHistQCD_DD0.907073923582234->SetBinContent(20,0.06477445);
   setHistQCD_DD0.907073923582234->SetBinError(0,3.359249);
   setHistQCD_DD0.907073923582234->SetBinError(1,2.349007);
   setHistQCD_DD0.907073923582234->SetBinError(2,1.50441);
   setHistQCD_DD0.907073923582234->SetBinError(3,3.041945);
   setHistQCD_DD0.907073923582234->SetBinError(4,3.067017);
   setHistQCD_DD0.907073923582234->SetBinError(5,3.152004);
   setHistQCD_DD0.907073923582234->SetBinError(6,4.559426);
   setHistQCD_DD0.907073923582234->SetBinError(7,5.341027);
   setHistQCD_DD0.907073923582234->SetBinError(8,6.561165);
   setHistQCD_DD0.907073923582234->SetBinError(9,8.420291);
   setHistQCD_DD0.907073923582234->SetBinError(10,10.29544);
   setHistQCD_DD0.907073923582234->SetBinError(11,9.43108);
   setHistQCD_DD0.907073923582234->SetBinError(12,11.30129);
   setHistQCD_DD0.907073923582234->SetBinError(13,11.5234);
   setHistQCD_DD0.907073923582234->SetBinError(14,11.62659);
   setHistQCD_DD0.907073923582234->SetBinError(15,10.21441);
   setHistQCD_DD0.907073923582234->SetBinError(16,6.766771);
   setHistQCD_DD0.907073923582234->SetBinError(17,6.194586);
   setHistQCD_DD0.907073923582234->SetBinError(18,3.413294);
   setHistQCD_DD0.907073923582234->SetBinError(19,1.556365);
   setHistQCD_DD0.907073923582234->SetBinError(20,1.924632);
   setHistQCD_DD0.907073923582234->SetBinError(21,1.37306);
   setHistQCD_DD0.907073923582234->SetEntries(19197);
   setHistQCD_DD0.907073923582234->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.907073923582234->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.907073923582234->SetLineColor(ci);
   setHistQCD_DD0.907073923582234->SetLineWidth(2);
   setHistQCD_DD0.907073923582234->SetMarkerStyle(20);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.907073923582234->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.907073923582234->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.907073923582234->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.907073923582234->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.907073923582234->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.907073923582234->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.907073923582234->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.907073923582234->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.907073923582234->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.907073923582234->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.907073923582234->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.907073923582234->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.907073923582234->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.907073923582234->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.90707392358,"HIST F");
   ->Draw("same");
   Double_t xAxis1720[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistdata0.231436629482235 = new TH1F("setHistdata0.231436629482235","",20, xAxis1720);
   setHistdata0.231436629482235->SetBinContent(1,233);
   setHistdata0.231436629482235->SetBinContent(2,89);
   setHistdata0.231436629482235->SetBinContent(3,133);
   setHistdata0.231436629482235->SetBinContent(4,210);
   setHistdata0.231436629482235->SetBinContent(5,285);
   setHistdata0.231436629482235->SetBinContent(6,394);
   setHistdata0.231436629482235->SetBinContent(7,523);
   setHistdata0.231436629482235->SetBinContent(8,800);
   setHistdata0.231436629482235->SetBinContent(9,1032);
   setHistdata0.231436629482235->SetBinContent(10,1289);
   setHistdata0.231436629482235->SetBinContent(11,1662);
   setHistdata0.231436629482235->SetBinContent(12,2006);
   setHistdata0.231436629482235->SetBinContent(13,2224);
   setHistdata0.231436629482235->SetBinContent(14,2081);
   setHistdata0.231436629482235->SetBinContent(15,1669);
   setHistdata0.231436629482235->SetBinContent(16,1075);
   setHistdata0.231436629482235->SetBinContent(17,659);
   setHistdata0.231436629482235->SetBinContent(18,380);
   setHistdata0.231436629482235->SetBinContent(19,154);
   setHistdata0.231436629482235->SetBinContent(20,125);
   setHistdata0.231436629482235->SetBinError(0,12.24745);
   setHistdata0.231436629482235->SetBinError(1,9.110434);
   setHistdata0.231436629482235->SetBinError(2,9.433981);
   setHistdata0.231436629482235->SetBinError(3,11.53256);
   setHistdata0.231436629482235->SetBinError(4,14.49138);
   setHistdata0.231436629482235->SetBinError(5,16.88194);
   setHistdata0.231436629482235->SetBinError(6,19.84943);
   setHistdata0.231436629482235->SetBinError(7,22.86919);
   setHistdata0.231436629482235->SetBinError(8,28.28427);
   setHistdata0.231436629482235->SetBinError(9,32.12476);
   setHistdata0.231436629482235->SetBinError(10,35.90265);
   setHistdata0.231436629482235->SetBinError(11,40.76763);
   setHistdata0.231436629482235->SetBinError(12,44.78839);
   setHistdata0.231436629482235->SetBinError(13,47.1593);
   setHistdata0.231436629482235->SetBinError(14,45.61798);
   setHistdata0.231436629482235->SetBinError(15,40.8534);
   setHistdata0.231436629482235->SetBinError(16,32.78719);
   setHistdata0.231436629482235->SetBinError(17,25.671);
   setHistdata0.231436629482235->SetBinError(18,19.49359);
   setHistdata0.231436629482235->SetBinError(19,12.40967);
   setHistdata0.231436629482235->SetBinError(20,9.273618);
   setHistdata0.231436629482235->SetBinError(21,6.244998);
   setHistdata0.231436629482235->SetEntries(17023);
   setHistdata0.231436629482235->SetFillStyle(0);
   setHistdata0.231436629482235->SetMarkerStyle(20);
   setHistdata0.231436629482235->SetMarkerSize(1.15);
   setHistdata0.231436629482235->GetXaxis()->SetNdivisions(1005);
   setHistdata0.231436629482235->GetXaxis()->SetLabelFont(43);
   setHistdata0.231436629482235->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.231436629482235->GetXaxis()->SetLabelSize(32);
   setHistdata0.231436629482235->GetXaxis()->SetTitleSize(35);
   setHistdata0.231436629482235->GetXaxis()->SetTickLength(0.05);
   setHistdata0.231436629482235->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.231436629482235->GetXaxis()->SetTitleFont(43);
   setHistdata0.231436629482235->GetYaxis()->SetNdivisions(506);
   setHistdata0.231436629482235->GetYaxis()->SetLabelFont(43);
   setHistdata0.231436629482235->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.231436629482235->GetYaxis()->SetLabelSize(32);
   setHistdata0.231436629482235->GetYaxis()->SetTitleSize(35);
   setHistdata0.231436629482235->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.231436629482235->GetYaxis()->SetTitleFont(43);
   setHistdata0.231436629482235->GetZaxis()->SetLabelFont(43);
   setHistdata0.231436629482235->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.231436629482235->GetZaxis()->SetLabelSize(32);
   setHistdata0.231436629482235->GetZaxis()->SetTitleSize(35);
   setHistdata0.231436629482235->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.231436629482235->GetZaxis()->SetTitleFont(43);
   setHistdata0.231436629482235->Draw("PESame");
   
   TH2F *axis0.630373697528_copy2236 = new TH2F("axis0.630373697528_copy2236","",50,10,398.1072,50,0,3113.6);
   axis0.630373697528_copy2236->SetDirectory(0);
   axis0.630373697528_copy2236->SetMarkerStyle(20);
   axis0.630373697528_copy2236->GetXaxis()->SetNdivisions(1005);
   axis0.630373697528_copy2236->GetXaxis()->SetLabelFont(43);
   axis0.630373697528_copy2236->GetXaxis()->SetLabelOffset(0.0105);
   axis0.630373697528_copy2236->GetXaxis()->SetLabelSize(0);
   axis0.630373697528_copy2236->GetXaxis()->SetTitleSize(35);
   axis0.630373697528_copy2236->GetXaxis()->SetTickLength(0.025);
   axis0.630373697528_copy2236->GetXaxis()->SetTitleOffset(1.135);
   axis0.630373697528_copy2236->GetXaxis()->SetTitleFont(43);
   axis0.630373697528_copy2236->GetYaxis()->SetTitle("Events / bin");
   axis0.630373697528_copy2236->GetYaxis()->SetNdivisions(506);
   axis0.630373697528_copy2236->GetYaxis()->SetLabelFont(43);
   axis0.630373697528_copy2236->GetYaxis()->SetLabelOffset(0.0087);
   axis0.630373697528_copy2236->GetYaxis()->SetLabelSize(32);
   axis0.630373697528_copy2236->GetYaxis()->SetTitleSize(35);
   axis0.630373697528_copy2236->GetYaxis()->SetTickLength(0.02631579);
   axis0.630373697528_copy2236->GetYaxis()->SetTitleOffset(1.32);
   axis0.630373697528_copy2236->GetYaxis()->SetTitleFont(43);
   axis0.630373697528_copy2236->GetZaxis()->SetLabelFont(43);
   axis0.630373697528_copy2236->GetZaxis()->SetLabelOffset(0.0087);
   axis0.630373697528_copy2236->GetZaxis()->SetLabelSize(32);
   axis0.630373697528_copy2236->GetZaxis()->SetTitleSize(35);
   axis0.630373697528_copy2236->GetZaxis()->SetTitleOffset(1.32);
   axis0.630373697528_copy2236->GetZaxis()->SetTitleFont(43);
   axis0.630373697528_copy2236->Draw("sameaxis");
   
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.23143662948","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.90707392358","Multijet","F");

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
   entry=leg->AddEntry("setHistDY0.339386671253","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.565808200934","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.770943930635","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.629253494923","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.477303626721","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.300017610075","#it{t}-channel","F");

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
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658_2->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.835363901658->SetSelected(cvmuon_3j2t_top_logpt_qcdbdt0.835363901658);
}
