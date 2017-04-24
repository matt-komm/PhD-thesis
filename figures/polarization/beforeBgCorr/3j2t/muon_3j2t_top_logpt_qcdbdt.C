void plots_now/3j2t/muon_3j2t_top_logpt_qcdbdt()
{
//=========Macro generated from canvas: cvmuon_3j2t_top_logpt_qcdbdt0.157367211566/
//=========  (Mon Apr 24 03:34:19 2017) by ROOT version6.02/05
   TCanvas *cvmuon_3j2t_top_logpt_qcdbdt0.157367211566 = new TCanvas("cvmuon_3j2t_top_logpt_qcdbdt0.157367211566", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetHighLightColor(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->Range(0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetLeftMargin(0.1150442);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetRightMargin(0.227083);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetTopMargin(0.04002582);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetBottomMargin(0.08064517);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetFrameLineWidth(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1
   TPad *cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1 = new TPad("cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1", "",0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->Range(0.6266667,0.06666676,3.293333,3.87619);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetFillStyle(4000);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetLogx();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetLeftMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetRightMargin(0.26);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetTopMargin(0.65);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetBottomMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.4779083911142224 = new TH2F("axisRes0.4779083911142224","",50,10,398.1072,50,0.6,1.4);
   axisRes0.4779083911142224->SetMarkerStyle(20);
   axisRes0.4779083911142224->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axisRes0.4779083911142224->GetXaxis()->SetNdivisions(1005);
   axisRes0.4779083911142224->GetXaxis()->SetLabelFont(43);
   axisRes0.4779083911142224->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.4779083911142224->GetXaxis()->SetLabelSize(32);
   axisRes0.4779083911142224->GetXaxis()->SetTitleSize(35);
   axisRes0.4779083911142224->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.4779083911142224->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.4779083911142224->GetXaxis()->SetTitleFont(43);
   axisRes0.4779083911142224->GetYaxis()->SetTitle("Data/MC");
   axisRes0.4779083911142224->GetYaxis()->SetNdivisions(406);
   axisRes0.4779083911142224->GetYaxis()->SetLabelFont(43);
   axisRes0.4779083911142224->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.4779083911142224->GetYaxis()->SetLabelSize(32);
   axisRes0.4779083911142224->GetYaxis()->SetTitleSize(35);
   axisRes0.4779083911142224->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.4779083911142224->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.4779083911142224->GetYaxis()->SetTitleFont(43);
   axisRes0.4779083911142224->GetZaxis()->SetLabelFont(43);
   axisRes0.4779083911142224->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.4779083911142224->GetZaxis()->SetLabelSize(32);
   axisRes0.4779083911142224->GetZaxis()->SetTitleSize(35);
   axisRes0.4779083911142224->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.4779083911142224->GetZaxis()->SetTitleFont(43);
   axisRes0.4779083911142224->Draw("AXIS");
   TBox *box = new TBox(10,0.9829505,12.02264,1.01705);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9829505,12.02264,1.01705);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(12.02264,0.9616286,14.4544,1.038371);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(12.02264,0.9616286,14.4544,1.038371);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(14.4544,0.9625824,17.37801,1.037418);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(14.4544,0.9625824,17.37801,1.037418);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(17.37801,0.967531,20.89296,1.032469);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(17.37801,0.967531,20.89296,1.032469);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20.89296,0.9745188,25.11886,1.025481);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20.89296,0.9745188,25.11886,1.025481);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(25.11886,0.9778515,30.19952,1.022148);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(25.11886,0.9778515,30.19952,1.022148);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30.19952,0.9804444,36.30781,1.019556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30.19952,0.9804444,36.30781,1.019556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(36.30781,0.9838612,43.65158,1.016139);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(36.30781,0.9838612,43.65158,1.016139);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(43.65158,0.9854461,52.48075,1.014554);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(43.65158,0.9854461,52.48075,1.014554);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(52.48075,0.9865458,63.09573,1.013454);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(52.48075,0.9865458,63.09573,1.013454);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(63.09573,0.9892434,75.85776,1.010757);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(63.09573,0.9892434,75.85776,1.010757);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(75.85776,0.9899321,91.20108,1.010068);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(75.85776,0.9899321,91.20108,1.010068);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(91.20108,0.9903453,109.6478,1.009655);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(91.20108,0.9903453,109.6478,1.009655);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(109.6478,0.9904498,131.8257,1.00955);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(109.6478,0.9904498,131.8257,1.00955);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(131.8257,0.9898298,158.4893,1.01017);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(131.8257,0.9898298,158.4893,1.01017);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(158.4893,0.9882711,190.5461,1.011729);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(158.4893,0.9882711,190.5461,1.011729);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190.5461,0.9840272,229.0868,1.015973);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190.5461,0.9840272,229.0868,1.015973);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(229.0868,0.9805822,275.4229,1.019418);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(229.0868,0.9805822,275.4229,1.019418);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275.4229,0.9746401,331.1311,1.02536);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(275.4229,0.9746401,331.1311,1.02536);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(331.1311,0.97481,398.1072,1.02519);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(331.1311,0.97481,398.1072,1.02519);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1711[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistdata0.6735497186460.001082831535822225 = new TH1F("setHistdata0.6735497186460.001082831535822225","",20, xAxis1711);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(1,1.077278);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(2,0.966589);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(3,0.970086);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(4,1.112086);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(5,1.094545);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(6,1.074091);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(7,1.016838);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(8,1.141381);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(9,1.072667);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(10,1.002973);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(11,1.06161);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(12,1.053435);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(13,1.031915);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(14,0.9780934);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(15,0.9714388);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(16,0.8992593);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(17,0.8702745);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(18,0.8582442);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(19,0.7133591);
   setHistdata0.6735497186460.001082831535822225->SetBinContent(20,0.8041515);
   setHistdata0.6735497186460.001082831535822225->SetBinError(0,12.24745);
   setHistdata0.6735497186460.001082831535822225->SetBinError(1,0.04212219);
   setHistdata0.6735497186460.001082831535822225->SetBinError(2,0.1024582);
   setHistdata0.6735497186460.001082831535822225->SetBinError(3,0.08411713);
   setHistdata0.6735497186460.001082831535822225->SetBinError(4,0.07674119);
   setHistdata0.6735497186460.001082831535822225->SetBinError(5,0.06483527);
   setHistdata0.6735497186460.001082831535822225->SetBinError(6,0.05411195);
   setHistdata0.6735497186460.001082831535822225->SetBinError(7,0.0444632);
   setHistdata0.6735497186460.001082831535822225->SetBinError(8,0.04035391);
   setHistdata0.6735497186460.001082831535822225->SetBinError(9,0.03339068);
   setHistdata0.6735497186460.001082831535822225->SetBinError(10,0.0279359);
   setHistdata0.6735497186460.001082831535822225->SetBinError(11,0.02604052);
   setHistdata0.6735497186460.001082831535822225->SetBinError(12,0.02352028);
   setHistdata0.6735497186460.001082831535822225->SetBinError(13,0.02188147);
   setHistdata0.6735497186460.001082831535822225->SetBinError(14,0.02144096);
   setHistdata0.6735497186460.001082831535822225->SetBinError(15,0.02377866);
   setHistdata0.6735497186460.001082831535822225->SetBinError(16,0.02742715);
   setHistdata0.6735497186460.001082831535822225->SetBinError(17,0.03390108);
   setHistdata0.6735497186460.001082831535822225->SetBinError(18,0.044027);
   setHistdata0.6735497186460.001082831535822225->SetBinError(19,0.05748411);
   setHistdata0.6735497186460.001082831535822225->SetBinError(20,0.05965915);
   setHistdata0.6735497186460.001082831535822225->SetBinError(21,6.244998);
   setHistdata0.6735497186460.001082831535822225->SetEntries(17043);
   setHistdata0.6735497186460.001082831535822225->SetFillStyle(0);
   setHistdata0.6735497186460.001082831535822225->SetMarkerStyle(20);
   setHistdata0.6735497186460.001082831535822225->SetMarkerSize(1.15);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetNdivisions(1005);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetLabelFont(43);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetLabelSize(32);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetTitleSize(35);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetTickLength(0.05);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.6735497186460.001082831535822225->GetXaxis()->SetTitleFont(43);
   setHistdata0.6735497186460.001082831535822225->GetYaxis()->SetNdivisions(506);
   setHistdata0.6735497186460.001082831535822225->GetYaxis()->SetLabelFont(43);
   setHistdata0.6735497186460.001082831535822225->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.6735497186460.001082831535822225->GetYaxis()->SetLabelSize(32);
   setHistdata0.6735497186460.001082831535822225->GetYaxis()->SetTitleSize(35);
   setHistdata0.6735497186460.001082831535822225->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.6735497186460.001082831535822225->GetYaxis()->SetTitleFont(43);
   setHistdata0.6735497186460.001082831535822225->GetZaxis()->SetLabelFont(43);
   setHistdata0.6735497186460.001082831535822225->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.6735497186460.001082831535822225->GetZaxis()->SetLabelSize(32);
   setHistdata0.6735497186460.001082831535822225->GetZaxis()->SetTitleSize(35);
   setHistdata0.6735497186460.001082831535822225->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.6735497186460.001082831535822225->GetZaxis()->SetTitleFont(43);
   setHistdata0.6735497186460.001082831535822225->Draw("PESame");
   
   TF1 *axisLine0.772560162156172 = new TF1("axisLine0.772560162156","1",10,398.1072);
   axisLine0.772560162156172->SetFillColor(19);
   axisLine0.772560162156172->SetFillStyle(0);
   axisLine0.772560162156172->SetMarkerStyle(20);
   axisLine0.772560162156172->SetLineWidth(1);
   axisLine0.772560162156172->GetXaxis()->SetNdivisions(1005);
   axisLine0.772560162156172->GetXaxis()->SetLabelFont(43);
   axisLine0.772560162156172->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.772560162156172->GetXaxis()->SetLabelSize(32);
   axisLine0.772560162156172->GetXaxis()->SetTitleSize(35);
   axisLine0.772560162156172->GetXaxis()->SetTickLength(0.05);
   axisLine0.772560162156172->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.772560162156172->GetXaxis()->SetTitleFont(43);
   axisLine0.772560162156172->GetYaxis()->SetNdivisions(506);
   axisLine0.772560162156172->GetYaxis()->SetLabelFont(43);
   axisLine0.772560162156172->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.772560162156172->GetYaxis()->SetLabelSize(32);
   axisLine0.772560162156172->GetYaxis()->SetTitleSize(35);
   axisLine0.772560162156172->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.772560162156172->GetYaxis()->SetTitleFont(43);
   axisLine0.772560162156172->Draw("SameL");
   
   TH2F *axisRes0.477908391114_copy2226 = new TH2F("axisRes0.477908391114_copy2226","",50,10,398.1072,50,0.6,1.4);
   axisRes0.477908391114_copy2226->SetDirectory(0);
   axisRes0.477908391114_copy2226->SetMarkerStyle(20);
   axisRes0.477908391114_copy2226->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axisRes0.477908391114_copy2226->GetXaxis()->SetNdivisions(1005);
   axisRes0.477908391114_copy2226->GetXaxis()->SetLabelFont(43);
   axisRes0.477908391114_copy2226->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.477908391114_copy2226->GetXaxis()->SetLabelSize(32);
   axisRes0.477908391114_copy2226->GetXaxis()->SetTitleSize(35);
   axisRes0.477908391114_copy2226->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.477908391114_copy2226->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.477908391114_copy2226->GetXaxis()->SetTitleFont(43);
   axisRes0.477908391114_copy2226->GetYaxis()->SetTitle("Data/MC");
   axisRes0.477908391114_copy2226->GetYaxis()->SetNdivisions(406);
   axisRes0.477908391114_copy2226->GetYaxis()->SetLabelFont(43);
   axisRes0.477908391114_copy2226->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.477908391114_copy2226->GetYaxis()->SetLabelSize(32);
   axisRes0.477908391114_copy2226->GetYaxis()->SetTitleSize(35);
   axisRes0.477908391114_copy2226->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.477908391114_copy2226->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.477908391114_copy2226->GetYaxis()->SetTitleFont(43);
   axisRes0.477908391114_copy2226->GetZaxis()->SetLabelFont(43);
   axisRes0.477908391114_copy2226->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.477908391114_copy2226->GetZaxis()->SetLabelSize(32);
   axisRes0.477908391114_copy2226->GetZaxis()->SetTitleSize(35);
   axisRes0.477908391114_copy2226->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.477908391114_copy2226->GetZaxis()->SetTitleFont(43);
   axisRes0.477908391114_copy2226->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_1->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->cd();
  
// ------------>Primitives in pad: cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2
   TPad *cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2 = new TPad("cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2", "",0,0,1,1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->Draw();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->Range(0.6266667,-1911.86,3.293333,3550.596);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetFillColor(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetFillStyle(4000);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetBorderSize(2);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetLogx();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetTickx(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetTicky(1);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetLeftMargin(0.14);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetRightMargin(0.26);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetTopMargin(0.08);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetBottomMargin(0.35);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetFrameBorderMode(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetFrameFillStyle(0);
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->SetFrameBorderMode(0);
   
   TH2F *axis0.9941755276392227 = new TH2F("axis0.9941755276392227","",50,10,398.1072,50,0,3113.6);
   axis0.9941755276392227->SetMarkerStyle(20);
   axis0.9941755276392227->GetXaxis()->SetNdivisions(1005);
   axis0.9941755276392227->GetXaxis()->SetLabelFont(43);
   axis0.9941755276392227->GetXaxis()->SetLabelOffset(0.0105);
   axis0.9941755276392227->GetXaxis()->SetLabelSize(0);
   axis0.9941755276392227->GetXaxis()->SetTitleSize(35);
   axis0.9941755276392227->GetXaxis()->SetTickLength(0.025);
   axis0.9941755276392227->GetXaxis()->SetTitleOffset(1.135);
   axis0.9941755276392227->GetXaxis()->SetTitleFont(43);
   axis0.9941755276392227->GetYaxis()->SetTitle("Events / bin");
   axis0.9941755276392227->GetYaxis()->SetNdivisions(506);
   axis0.9941755276392227->GetYaxis()->SetLabelFont(43);
   axis0.9941755276392227->GetYaxis()->SetLabelOffset(0.0087);
   axis0.9941755276392227->GetYaxis()->SetLabelSize(32);
   axis0.9941755276392227->GetYaxis()->SetTitleSize(35);
   axis0.9941755276392227->GetYaxis()->SetTickLength(0.02631579);
   axis0.9941755276392227->GetYaxis()->SetTitleOffset(1.32);
   axis0.9941755276392227->GetYaxis()->SetTitleFont(43);
   axis0.9941755276392227->GetZaxis()->SetLabelFont(43);
   axis0.9941755276392227->GetZaxis()->SetLabelOffset(0.0087);
   axis0.9941755276392227->GetZaxis()->SetLabelSize(32);
   axis0.9941755276392227->GetZaxis()->SetTitleSize(35);
   axis0.9941755276392227->GetZaxis()->SetTitleOffset(1.32);
   axis0.9941755276392227->GetZaxis()->SetTitleFont(43);
   axis0.9941755276392227->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1712[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *_stack_171_stack_172 = new TH1F("_stack_171_stack_172","",20, xAxis1712);
   _stack_171_stack_172->SetMinimum(-10.62672);
   _stack_171_stack_172->SetMaximum(2262.977);
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
   
   TH1F *setHisttChannel0.2247410950692228 = new TH1F("setHisttChannel0.2247410950692228","",20, xAxis1713);
   setHisttChannel0.2247410950692228->SetBinContent(1,13.17161);
   setHisttChannel0.2247410950692228->SetBinContent(2,5.64376);
   setHisttChannel0.2247410950692228->SetBinContent(3,8.568132);
   setHisttChannel0.2247410950692228->SetBinContent(4,12.46368);
   setHisttChannel0.2247410950692228->SetBinContent(5,18.40663);
   setHisttChannel0.2247410950692228->SetBinContent(6,23.75092);
   setHisttChannel0.2247410950692228->SetBinContent(7,30.51476);
   setHisttChannel0.2247410950692228->SetBinContent(8,44.76646);
   setHisttChannel0.2247410950692228->SetBinContent(9,57.69538);
   setHisttChannel0.2247410950692228->SetBinContent(10,74.93801);
   setHisttChannel0.2247410950692228->SetBinContent(11,93.69745);
   setHisttChannel0.2247410950692228->SetBinContent(12,111.9357);
   setHisttChannel0.2247410950692228->SetBinContent(13,126.2242);
   setHisttChannel0.2247410950692228->SetBinContent(14,113.727);
   setHisttChannel0.2247410950692228->SetBinContent(15,98.82288);
   setHisttChannel0.2247410950692228->SetBinContent(16,61.65007);
   setHisttChannel0.2247410950692228->SetBinContent(17,34.78134);
   setHisttChannel0.2247410950692228->SetBinContent(18,22.6025);
   setHisttChannel0.2247410950692228->SetBinContent(19,9.106204);
   setHisttChannel0.2247410950692228->SetBinContent(20,6.074238);
   setHisttChannel0.2247410950692228->SetBinError(0,0.9856333);
   setHisttChannel0.2247410950692228->SetBinError(1,0.6797408);
   setHisttChannel0.2247410950692228->SetBinError(2,0.7754333);
   setHisttChannel0.2247410950692228->SetBinError(3,0.9771191);
   setHisttChannel0.2247410950692228->SetBinError(4,1.175125);
   setHisttChannel0.2247410950692228->SetBinError(5,1.438336);
   setHisttChannel0.2247410950692228->SetBinError(6,1.617032);
   setHisttChannel0.2247410950692228->SetBinError(7,1.858453);
   setHisttChannel0.2247410950692228->SetBinError(8,2.215962);
   setHisttChannel0.2247410950692228->SetBinError(9,2.523773);
   setHisttChannel0.2247410950692228->SetBinError(10,2.876351);
   setHisttChannel0.2247410950692228->SetBinError(11,3.219565);
   setHisttChannel0.2247410950692228->SetBinError(12,3.522198);
   setHisttChannel0.2247410950692228->SetBinError(13,3.739717);
   setHisttChannel0.2247410950692228->SetBinError(14,3.530269);
   setHisttChannel0.2247410950692228->SetBinError(15,3.296054);
   setHisttChannel0.2247410950692228->SetBinError(16,2.588002);
   setHisttChannel0.2247410950692228->SetBinError(17,1.95312);
   setHisttChannel0.2247410950692228->SetBinError(18,1.571602);
   setHisttChannel0.2247410950692228->SetBinError(19,0.9874901);
   setHisttChannel0.2247410950692228->SetBinError(20,0.6493468);
   setHisttChannel0.2247410950692228->SetBinError(21,0.4798538);
   setHisttChannel0.2247410950692228->SetEntries(20202);
   setHisttChannel0.2247410950692228->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.2247410950692228->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.2247410950692228->SetLineColor(ci);
   setHisttChannel0.2247410950692228->SetLineWidth(2);
   setHisttChannel0.2247410950692228->SetMarkerStyle(20);
   setHisttChannel0.2247410950692228->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.2247410950692228->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.2247410950692228->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.2247410950692228->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.2247410950692228->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.2247410950692228->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.2247410950692228->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.2247410950692228->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.2247410950692228->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.2247410950692228->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.2247410950692228->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.2247410950692228->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.2247410950692228->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.2247410950692228->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.2247410950692228->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.2247410950692228->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.2247410950692228->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.2247410950692228->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.2247410950692228->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.2247410950692228->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.2247410950692228->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.224741095069,"HIST F");
   Double_t xAxis1714[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHisttWs0.4673093578372229 = new TH1F("setHisttWs0.4673093578372229","",20, xAxis1714);
   setHisttWs0.4673093578372229->SetBinContent(1,5.52816);
   setHisttWs0.4673093578372229->SetBinContent(2,2.069354);
   setHisttWs0.4673093578372229->SetBinContent(3,1.666616);
   setHisttWs0.4673093578372229->SetBinContent(4,5.728826);
   setHisttWs0.4673093578372229->SetBinContent(5,8.3187);
   setHisttWs0.4673093578372229->SetBinContent(6,8.731388);
   setHisttWs0.4673093578372229->SetBinContent(7,12.64813);
   setHisttWs0.4673093578372229->SetBinContent(8,15.95766);
   setHisttWs0.4673093578372229->SetBinContent(9,24.07831);
   setHisttWs0.4673093578372229->SetBinContent(10,33.1624);
   setHisttWs0.4673093578372229->SetBinContent(11,40.33545);
   setHisttWs0.4673093578372229->SetBinContent(12,48.16161);
   setHisttWs0.4673093578372229->SetBinContent(13,58.35733);
   setHisttWs0.4673093578372229->SetBinContent(14,57.89266);
   setHisttWs0.4673093578372229->SetBinContent(15,55.82075);
   setHisttWs0.4673093578372229->SetBinContent(16,37.38652);
   setHisttWs0.4673093578372229->SetBinContent(17,27.25132);
   setHisttWs0.4673093578372229->SetBinContent(18,17.42881);
   setHisttWs0.4673093578372229->SetBinContent(19,9.517553);
   setHisttWs0.4673093578372229->SetBinContent(20,8.056043);
   setHisttWs0.4673093578372229->SetBinError(0,1.336876);
   setHisttWs0.4673093578372229->SetBinError(1,0.8035064);
   setHisttWs0.4673093578372229->SetBinError(2,0.9711914);
   setHisttWs0.4673093578372229->SetBinError(3,0.8426538);
   setHisttWs0.4673093578372229->SetBinError(4,1.628689);
   setHisttWs0.4673093578372229->SetBinError(5,1.958104);
   setHisttWs0.4673093578372229->SetBinError(6,2.030927);
   setHisttWs0.4673093578372229->SetBinError(7,2.347922);
   setHisttWs0.4673093578372229->SetBinError(8,2.635341);
   setHisttWs0.4673093578372229->SetBinError(9,3.225433);
   setHisttWs0.4673093578372229->SetBinError(10,3.864479);
   setHisttWs0.4673093578372229->SetBinError(11,4.100861);
   setHisttWs0.4673093578372229->SetBinError(12,4.541165);
   setHisttWs0.4673093578372229->SetBinError(13,4.977138);
   setHisttWs0.4673093578372229->SetBinError(14,4.930327);
   setHisttWs0.4673093578372229->SetBinError(15,4.868289);
   setHisttWs0.4673093578372229->SetBinError(16,3.926758);
   setHisttWs0.4673093578372229->SetBinError(17,3.383865);
   setHisttWs0.4673093578372229->SetBinError(18,2.845255);
   setHisttWs0.4673093578372229->SetBinError(19,1.884868);
   setHisttWs0.4673093578372229->SetBinError(20,1.234726);
   setHisttWs0.4673093578372229->SetBinError(21,1.435162);
   setHisttWs0.4673093578372229->SetEntries(3351);
   setHisttWs0.4673093578372229->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.4673093578372229->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.4673093578372229->SetLineColor(ci);
   setHisttWs0.4673093578372229->SetLineWidth(2);
   setHisttWs0.4673093578372229->SetMarkerStyle(20);
   setHisttWs0.4673093578372229->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.4673093578372229->GetXaxis()->SetLabelFont(43);
   setHisttWs0.4673093578372229->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.4673093578372229->GetXaxis()->SetLabelSize(32);
   setHisttWs0.4673093578372229->GetXaxis()->SetTitleSize(35);
   setHisttWs0.4673093578372229->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.4673093578372229->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.4673093578372229->GetXaxis()->SetTitleFont(43);
   setHisttWs0.4673093578372229->GetYaxis()->SetNdivisions(506);
   setHisttWs0.4673093578372229->GetYaxis()->SetLabelFont(43);
   setHisttWs0.4673093578372229->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.4673093578372229->GetYaxis()->SetLabelSize(32);
   setHisttWs0.4673093578372229->GetYaxis()->SetTitleSize(35);
   setHisttWs0.4673093578372229->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.4673093578372229->GetYaxis()->SetTitleFont(43);
   setHisttWs0.4673093578372229->GetZaxis()->SetLabelFont(43);
   setHisttWs0.4673093578372229->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.4673093578372229->GetZaxis()->SetLabelSize(32);
   setHisttWs0.4673093578372229->GetZaxis()->SetTitleSize(35);
   setHisttWs0.4673093578372229->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.4673093578372229->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.467309357837,"HIST F");
   Double_t xAxis1715[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistTTJets0.1882641639892230 = new TH1F("setHistTTJets0.1882641639892230","",20, xAxis1715);
   setHistTTJets0.1882641639892230->SetBinContent(1,186.7435);
   setHistTTJets0.1882641639892230->SetBinContent(2,85.14056);
   setHistTTJets0.1882641639892230->SetBinContent(3,118.6572);
   setHistTTJets0.1882641639892230->SetBinContent(4,164.9062);
   setHistTTJets0.1882641639892230->SetBinContent(5,229.1973);
   setHistTTJets0.1882641639892230->SetBinContent(6,321.7721);
   setHistTTJets0.1882641639892230->SetBinContent(7,453.1839);
   setHistTTJets0.1882641639892230->SetBinContent(8,611.485);
   setHistTTJets0.1882641639892230->SetBinContent(9,834.1669);
   setHistTTJets0.1882641639892230->SetBinContent(10,1093.415);
   setHistTTJets0.1882641639892230->SetBinContent(11,1383.907);
   setHistTTJets0.1882641639892230->SetBinContent(12,1672.539);
   setHistTTJets0.1882641639892230->SetBinContent(13,1893.525);
   setHistTTJets0.1882641639892230->SetBinContent(14,1870.495);
   setHistTTJets0.1882641639892230->SetBinContent(15,1504.411);
   setHistTTJets0.1882641639892230->SetBinContent(16,1063.891);
   setHistTTJets0.1882641639892230->SetBinContent(17,667.1723);
   setHistTTJets0.1882641639892230->SetBinContent(18,388.2996);
   setHistTTJets0.1882641639892230->SetBinContent(19,191.8718);
   setHistTTJets0.1882641639892230->SetBinContent(20,137.86);
   setHistTTJets0.1882641639892230->SetBinError(0,3.390946);
   setHistTTJets0.1882641639892230->SetBinError(1,2.277157);
   setHistTTJets0.1882641639892230->SetBinError(2,2.736103);
   setHistTTJets0.1882641639892230->SetBinError(3,3.244925);
   setHistTTJets0.1882641639892230->SetBinError(4,3.834914);
   setHistTTJets0.1882641639892230->SetBinError(5,4.510752);
   setHistTTJets0.1882641639892230->SetBinError(6,5.334972);
   setHistTTJets0.1882641639892230->SetBinError(7,6.300141);
   setHistTTJets0.1882641639892230->SetBinError(8,7.333487);
   setHistTTJets0.1882641639892230->SetBinError(9,8.546242);
   setHistTTJets0.1882641639892230->SetBinError(10,9.773113);
   setHistTTJets0.1882641639892230->SetBinError(11,10.9731);
   setHistTTJets0.1882641639892230->SetBinError(12,12.07717);
   setHistTTJets0.1882641639892230->SetBinError(13,12.85793);
   setHistTTJets0.1882641639892230->SetBinError(14,12.78089);
   setHistTTJets0.1882641639892230->SetBinError(15,11.37164);
   setHistTTJets0.1882641639892230->SetBinError(16,9.529984);
   setHistTTJets0.1882641639892230->SetBinError(17,7.569777);
   setHistTTJets0.1882641639892230->SetBinError(18,5.76471);
   setHistTTJets0.1882641639892230->SetBinError(19,4.077793);
   setHistTTJets0.1882641639892230->SetBinError(20,2.75269);
   setHistTTJets0.1882641639892230->SetBinError(21,2.147402);
   setHistTTJets0.1882641639892230->SetEntries(249437);
   setHistTTJets0.1882641639892230->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.1882641639892230->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.1882641639892230->SetLineColor(ci);
   setHistTTJets0.1882641639892230->SetLineWidth(2);
   setHistTTJets0.1882641639892230->SetMarkerStyle(20);
   setHistTTJets0.1882641639892230->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.1882641639892230->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.1882641639892230->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.1882641639892230->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.1882641639892230->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.1882641639892230->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.1882641639892230->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.1882641639892230->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.1882641639892230->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.1882641639892230->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.1882641639892230->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.1882641639892230->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.1882641639892230->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.1882641639892230->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.1882641639892230->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.1882641639892230->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.1882641639892230->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.1882641639892230->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.1882641639892230->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.1882641639892230->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.1882641639892230->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.188264163989,"HIST F");
   Double_t xAxis1716[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistWJetsMGHF0.04350902603312231 = new TH1F("setHistWJetsMGHF0.04350902603312231","",20, xAxis1716);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(1,7.325162);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(2,2.130274);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(3,6.649001);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(4,3.052915);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(5,9.084325);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(6,11.68808);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(7,13.49182);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(8,23.79133);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(9,33.63489);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(10,48.90773);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(11,42.77625);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(12,45.82032);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(13,53.76374);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(14,49.77983);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(15,38.81222);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(16,29.7143);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(17,10.67864);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(18,12.93753);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(19,9.245117);
   setHistWJetsMGHF0.04350902603312231->SetBinContent(20,3.185369);
   setHistWJetsMGHF0.04350902603312231->SetBinError(0,1.685552);
   setHistWJetsMGHF0.04350902603312231->SetBinError(1,1.33687);
   setHistWJetsMGHF0.04350902603312231->SetBinError(2,1.09032);
   setHistWJetsMGHF0.04350902603312231->SetBinError(3,2.206591);
   setHistWJetsMGHF0.04350902603312231->SetBinError(4,1.400137);
   setHistWJetsMGHF0.04350902603312231->SetBinError(5,2.799293);
   setHistWJetsMGHF0.04350902603312231->SetBinError(6,3.165166);
   setHistWJetsMGHF0.04350902603312231->SetBinError(7,3.163063);
   setHistWJetsMGHF0.04350902603312231->SetBinError(8,4.390018);
   setHistWJetsMGHF0.04350902603312231->SetBinError(9,5.301664);
   setHistWJetsMGHF0.04350902603312231->SetBinError(10,6.443149);
   setHistWJetsMGHF0.04350902603312231->SetBinError(11,5.374158);
   setHistWJetsMGHF0.04350902603312231->SetBinError(12,5.597058);
   setHistWJetsMGHF0.04350902603312231->SetBinError(13,6.635855);
   setHistWJetsMGHF0.04350902603312231->SetBinError(14,6.158388);
   setHistWJetsMGHF0.04350902603312231->SetBinError(15,5.433514);
   setHistWJetsMGHF0.04350902603312231->SetBinError(16,4.643825);
   setHistWJetsMGHF0.04350902603312231->SetBinError(17,2.608027);
   setHistWJetsMGHF0.04350902603312231->SetBinError(18,3.030702);
   setHistWJetsMGHF0.04350902603312231->SetBinError(19,2.52381);
   setHistWJetsMGHF0.04350902603312231->SetBinError(20,1.43639);
   setHistWJetsMGHF0.04350902603312231->SetBinError(21,0.5000884);
   setHistWJetsMGHF0.04350902603312231->SetEntries(798);
   setHistWJetsMGHF0.04350902603312231->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.04350902603312231->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.04350902603312231->SetLineColor(ci);
   setHistWJetsMGHF0.04350902603312231->SetLineWidth(2);
   setHistWJetsMGHF0.04350902603312231->SetMarkerStyle(20);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.04350902603312231->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.04350902603312231->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.04350902603312231->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.04350902603312231->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.04350902603312231->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.04350902603312231->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.04350902603312231->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.04350902603312231->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.04350902603312231->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.04350902603312231->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.04350902603312231->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.04350902603312231->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.04350902603312231->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.04350902603312231->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.0435090260331,"HIST F");
   Double_t xAxis1717[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistWJetsMGLF0.9118443786842232 = new TH1F("setHistWJetsMGLF0.9118443786842232","",20, xAxis1717);
   setHistWJetsMGLF0.9118443786842232->SetBinContent(10,1.458258);
   setHistWJetsMGLF0.9118443786842232->SetBinContent(17,1.048948);
   setHistWJetsMGLF0.9118443786842232->SetBinContent(20,0.2029773);
   setHistWJetsMGLF0.9118443786842232->SetBinError(10,1.286046);
   setHistWJetsMGLF0.9118443786842232->SetBinError(17,1.048948);
   setHistWJetsMGLF0.9118443786842232->SetBinError(20,0.2029772);
   setHistWJetsMGLF0.9118443786842232->SetEntries(4);
   setHistWJetsMGLF0.9118443786842232->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.9118443786842232->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.9118443786842232->SetLineColor(ci);
   setHistWJetsMGLF0.9118443786842232->SetLineWidth(2);
   setHistWJetsMGLF0.9118443786842232->SetMarkerStyle(20);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.9118443786842232->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.9118443786842232->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.9118443786842232->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.9118443786842232->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.9118443786842232->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.9118443786842232->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.9118443786842232->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.9118443786842232->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.9118443786842232->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.9118443786842232->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.9118443786842232->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.9118443786842232->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.9118443786842232->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.9118443786842232->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.911844378684,"HIST F");
   Double_t xAxis1718[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistDY0.5034017019372233 = new TH1F("setHistDY0.5034017019372233","",20, xAxis1718);
   setHistDY0.5034017019372233->SetBinContent(4,2.735925);
   setHistDY0.5034017019372233->SetBinContent(7,5.277608);
   setHistDY0.5034017019372233->SetBinContent(9,2.690625);
   setHistDY0.5034017019372233->SetBinContent(10,10.82064);
   setHistDY0.5034017019372233->SetBinContent(11,6.026323);
   setHistDY0.5034017019372233->SetBinContent(12,10.73087);
   setHistDY0.5034017019372233->SetBinContent(13,15.99057);
   setHistDY0.5034017019372233->SetBinContent(14,12.57684);
   setHistDY0.5034017019372233->SetBinContent(15,2.752213);
   setHistDY0.5034017019372233->SetBinContent(16,5.703677);
   setHistDY0.5034017019372233->SetBinContent(17,5.360293);
   setHistDY0.5034017019372233->SetBinContent(18,3.046967);
   setHistDY0.5034017019372233->SetBinContent(19,0.1550702);
   setHistDY0.5034017019372233->SetBinError(4,2.735925);
   setHistDY0.5034017019372233->SetBinError(7,3.738721);
   setHistDY0.5034017019372233->SetBinError(9,2.690625);
   setHistDY0.5034017019372233->SetBinError(10,5.576273);
   setHistDY0.5034017019372233->SetBinError(11,4.262079);
   setHistDY0.5034017019372233->SetBinError(12,5.44271);
   setHistDY0.5034017019372233->SetBinError(13,7.215474);
   setHistDY0.5034017019372233->SetBinError(14,6.295912);
   setHistDY0.5034017019372233->SetBinError(15,2.752213);
   setHistDY0.5034017019372233->SetBinError(16,4.03715);
   setHistDY0.5034017019372233->SetBinError(17,5.239271);
   setHistDY0.5034017019372233->SetBinError(18,3.046966);
   setHistDY0.5034017019372233->SetBinError(19,0.1550702);
   setHistDY0.5034017019372233->SetEntries(30);
   setHistDY0.5034017019372233->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.5034017019372233->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.5034017019372233->SetLineColor(ci);
   setHistDY0.5034017019372233->SetLineWidth(2);
   setHistDY0.5034017019372233->SetMarkerStyle(20);
   setHistDY0.5034017019372233->GetXaxis()->SetNdivisions(1005);
   setHistDY0.5034017019372233->GetXaxis()->SetLabelFont(43);
   setHistDY0.5034017019372233->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.5034017019372233->GetXaxis()->SetLabelSize(32);
   setHistDY0.5034017019372233->GetXaxis()->SetTitleSize(35);
   setHistDY0.5034017019372233->GetXaxis()->SetTickLength(0.05);
   setHistDY0.5034017019372233->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.5034017019372233->GetXaxis()->SetTitleFont(43);
   setHistDY0.5034017019372233->GetYaxis()->SetNdivisions(506);
   setHistDY0.5034017019372233->GetYaxis()->SetLabelFont(43);
   setHistDY0.5034017019372233->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.5034017019372233->GetYaxis()->SetLabelSize(32);
   setHistDY0.5034017019372233->GetYaxis()->SetTitleSize(35);
   setHistDY0.5034017019372233->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.5034017019372233->GetYaxis()->SetTitleFont(43);
   setHistDY0.5034017019372233->GetZaxis()->SetLabelFont(43);
   setHistDY0.5034017019372233->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.5034017019372233->GetZaxis()->SetLabelSize(32);
   setHistDY0.5034017019372233->GetZaxis()->SetTitleSize(35);
   setHistDY0.5034017019372233->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.5034017019372233->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.503401701937,"HIST F");
   Double_t xAxis1719[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistQCD_DD0.5227578753582234 = new TH1F("setHistQCD_DD0.5227578753582234","",20, xAxis1719);
   setHistQCD_DD0.5227578753582234->SetBinContent(1,3.517381);
   setHistQCD_DD0.5227578753582234->SetBinContent(2,-2.907586);
   setHistQCD_DD0.5227578753582234->SetBinContent(3,1.560319);
   setHistQCD_DD0.5227578753582234->SetBinContent(4,-0.0531885);
   setHistQCD_DD0.5227578753582234->SetBinContent(5,-4.624876);
   setHistQCD_DD0.5227578753582234->SetBinContent(6,0.8791482);
   setHistQCD_DD0.5227578753582234->SetBinContent(7,-0.776417);
   setHistQCD_DD0.5227578753582234->SetBinContent(8,4.904765);
   setHistQCD_DD0.5227578753582234->SetBinContent(9,9.821511);
   setHistQCD_DD0.5227578753582234->SetBinContent(10,22.47726);
   setHistQCD_DD0.5227578753582234->SetBinContent(11,-1.195642);
   setHistQCD_DD0.5227578753582234->SetBinContent(12,15.05862);
   setHistQCD_DD0.5227578753582234->SetBinContent(13,7.356172);
   setHistQCD_DD0.5227578753582234->SetBinContent(14,23.13694);
   setHistQCD_DD0.5227578753582234->SetBinContent(15,17.45071);
   setHistQCD_DD0.5227578753582234->SetBinContent(16,-2.917176);
   setHistQCD_DD0.5227578753582234->SetBinContent(17,10.93943);
   setHistQCD_DD0.5227578753582234->SetBinContent(18,-1.550972);
   setHistQCD_DD0.5227578753582234->SetBinContent(19,-4.015713);
   setHistQCD_DD0.5227578753582234->SetBinContent(20,0.06477445);
   setHistQCD_DD0.5227578753582234->SetBinError(0,3.359249);
   setHistQCD_DD0.5227578753582234->SetBinError(1,2.349007);
   setHistQCD_DD0.5227578753582234->SetBinError(2,1.50441);
   setHistQCD_DD0.5227578753582234->SetBinError(3,3.041945);
   setHistQCD_DD0.5227578753582234->SetBinError(4,3.067017);
   setHistQCD_DD0.5227578753582234->SetBinError(5,3.152004);
   setHistQCD_DD0.5227578753582234->SetBinError(6,4.559426);
   setHistQCD_DD0.5227578753582234->SetBinError(7,5.341027);
   setHistQCD_DD0.5227578753582234->SetBinError(8,6.561165);
   setHistQCD_DD0.5227578753582234->SetBinError(9,8.420291);
   setHistQCD_DD0.5227578753582234->SetBinError(10,10.29544);
   setHistQCD_DD0.5227578753582234->SetBinError(11,9.43108);
   setHistQCD_DD0.5227578753582234->SetBinError(12,11.30129);
   setHistQCD_DD0.5227578753582234->SetBinError(13,11.5234);
   setHistQCD_DD0.5227578753582234->SetBinError(14,11.62659);
   setHistQCD_DD0.5227578753582234->SetBinError(15,10.21441);
   setHistQCD_DD0.5227578753582234->SetBinError(16,6.766771);
   setHistQCD_DD0.5227578753582234->SetBinError(17,6.194586);
   setHistQCD_DD0.5227578753582234->SetBinError(18,3.413294);
   setHistQCD_DD0.5227578753582234->SetBinError(19,1.556365);
   setHistQCD_DD0.5227578753582234->SetBinError(20,1.924632);
   setHistQCD_DD0.5227578753582234->SetBinError(21,1.37306);
   setHistQCD_DD0.5227578753582234->SetEntries(19197);
   setHistQCD_DD0.5227578753582234->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.5227578753582234->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.5227578753582234->SetLineColor(ci);
   setHistQCD_DD0.5227578753582234->SetLineWidth(2);
   setHistQCD_DD0.5227578753582234->SetMarkerStyle(20);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.5227578753582234->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.5227578753582234->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.5227578753582234->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.5227578753582234->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.5227578753582234->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.5227578753582234->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.5227578753582234->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.5227578753582234->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.5227578753582234->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.5227578753582234->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.5227578753582234->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.5227578753582234->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.5227578753582234->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.5227578753582234->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.522757875358,"HIST F");
   ->Draw("same");
   Double_t xAxis1720[21] = {10, 12.02264, 14.4544, 17.37801, 20.89296, 25.11886, 30.19952, 36.30781, 43.65158, 52.48075, 63.09573, 75.85776, 91.20108, 109.6478, 131.8257, 158.4893, 190.5461, 229.0868, 275.4229, 331.1311, 398.1072}; 
   
   TH1F *setHistdata0.6735497186462235 = new TH1F("setHistdata0.6735497186462235","",20, xAxis1720);
   setHistdata0.6735497186462235->SetBinContent(1,233);
   setHistdata0.6735497186462235->SetBinContent(2,89);
   setHistdata0.6735497186462235->SetBinContent(3,133);
   setHistdata0.6735497186462235->SetBinContent(4,210);
   setHistdata0.6735497186462235->SetBinContent(5,285);
   setHistdata0.6735497186462235->SetBinContent(6,394);
   setHistdata0.6735497186462235->SetBinContent(7,523);
   setHistdata0.6735497186462235->SetBinContent(8,800);
   setHistdata0.6735497186462235->SetBinContent(9,1032);
   setHistdata0.6735497186462235->SetBinContent(10,1289);
   setHistdata0.6735497186462235->SetBinContent(11,1662);
   setHistdata0.6735497186462235->SetBinContent(12,2006);
   setHistdata0.6735497186462235->SetBinContent(13,2224);
   setHistdata0.6735497186462235->SetBinContent(14,2081);
   setHistdata0.6735497186462235->SetBinContent(15,1669);
   setHistdata0.6735497186462235->SetBinContent(16,1075);
   setHistdata0.6735497186462235->SetBinContent(17,659);
   setHistdata0.6735497186462235->SetBinContent(18,380);
   setHistdata0.6735497186462235->SetBinContent(19,154);
   setHistdata0.6735497186462235->SetBinContent(20,125);
   setHistdata0.6735497186462235->SetBinError(0,12.24745);
   setHistdata0.6735497186462235->SetBinError(1,9.110434);
   setHistdata0.6735497186462235->SetBinError(2,9.433981);
   setHistdata0.6735497186462235->SetBinError(3,11.53256);
   setHistdata0.6735497186462235->SetBinError(4,14.49138);
   setHistdata0.6735497186462235->SetBinError(5,16.88194);
   setHistdata0.6735497186462235->SetBinError(6,19.84943);
   setHistdata0.6735497186462235->SetBinError(7,22.86919);
   setHistdata0.6735497186462235->SetBinError(8,28.28427);
   setHistdata0.6735497186462235->SetBinError(9,32.12476);
   setHistdata0.6735497186462235->SetBinError(10,35.90265);
   setHistdata0.6735497186462235->SetBinError(11,40.76763);
   setHistdata0.6735497186462235->SetBinError(12,44.78839);
   setHistdata0.6735497186462235->SetBinError(13,47.1593);
   setHistdata0.6735497186462235->SetBinError(14,45.61798);
   setHistdata0.6735497186462235->SetBinError(15,40.8534);
   setHistdata0.6735497186462235->SetBinError(16,32.78719);
   setHistdata0.6735497186462235->SetBinError(17,25.671);
   setHistdata0.6735497186462235->SetBinError(18,19.49359);
   setHistdata0.6735497186462235->SetBinError(19,12.40967);
   setHistdata0.6735497186462235->SetBinError(20,9.273618);
   setHistdata0.6735497186462235->SetBinError(21,6.244998);
   setHistdata0.6735497186462235->SetEntries(17023);
   setHistdata0.6735497186462235->SetFillStyle(0);
   setHistdata0.6735497186462235->SetMarkerStyle(20);
   setHistdata0.6735497186462235->SetMarkerSize(1.15);
   setHistdata0.6735497186462235->GetXaxis()->SetNdivisions(1005);
   setHistdata0.6735497186462235->GetXaxis()->SetLabelFont(43);
   setHistdata0.6735497186462235->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.6735497186462235->GetXaxis()->SetLabelSize(32);
   setHistdata0.6735497186462235->GetXaxis()->SetTitleSize(35);
   setHistdata0.6735497186462235->GetXaxis()->SetTickLength(0.05);
   setHistdata0.6735497186462235->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.6735497186462235->GetXaxis()->SetTitleFont(43);
   setHistdata0.6735497186462235->GetYaxis()->SetNdivisions(506);
   setHistdata0.6735497186462235->GetYaxis()->SetLabelFont(43);
   setHistdata0.6735497186462235->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.6735497186462235->GetYaxis()->SetLabelSize(32);
   setHistdata0.6735497186462235->GetYaxis()->SetTitleSize(35);
   setHistdata0.6735497186462235->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.6735497186462235->GetYaxis()->SetTitleFont(43);
   setHistdata0.6735497186462235->GetZaxis()->SetLabelFont(43);
   setHistdata0.6735497186462235->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.6735497186462235->GetZaxis()->SetLabelSize(32);
   setHistdata0.6735497186462235->GetZaxis()->SetTitleSize(35);
   setHistdata0.6735497186462235->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.6735497186462235->GetZaxis()->SetTitleFont(43);
   setHistdata0.6735497186462235->Draw("PESame");
   
   TH2F *axis0.994175527639_copy2236 = new TH2F("axis0.994175527639_copy2236","",50,10,398.1072,50,0,3113.6);
   axis0.994175527639_copy2236->SetDirectory(0);
   axis0.994175527639_copy2236->SetMarkerStyle(20);
   axis0.994175527639_copy2236->GetXaxis()->SetNdivisions(1005);
   axis0.994175527639_copy2236->GetXaxis()->SetLabelFont(43);
   axis0.994175527639_copy2236->GetXaxis()->SetLabelOffset(0.0105);
   axis0.994175527639_copy2236->GetXaxis()->SetLabelSize(0);
   axis0.994175527639_copy2236->GetXaxis()->SetTitleSize(35);
   axis0.994175527639_copy2236->GetXaxis()->SetTickLength(0.025);
   axis0.994175527639_copy2236->GetXaxis()->SetTitleOffset(1.135);
   axis0.994175527639_copy2236->GetXaxis()->SetTitleFont(43);
   axis0.994175527639_copy2236->GetYaxis()->SetTitle("Events / bin");
   axis0.994175527639_copy2236->GetYaxis()->SetNdivisions(506);
   axis0.994175527639_copy2236->GetYaxis()->SetLabelFont(43);
   axis0.994175527639_copy2236->GetYaxis()->SetLabelOffset(0.0087);
   axis0.994175527639_copy2236->GetYaxis()->SetLabelSize(32);
   axis0.994175527639_copy2236->GetYaxis()->SetTitleSize(35);
   axis0.994175527639_copy2236->GetYaxis()->SetTickLength(0.02631579);
   axis0.994175527639_copy2236->GetYaxis()->SetTitleOffset(1.32);
   axis0.994175527639_copy2236->GetYaxis()->SetTitleFont(43);
   axis0.994175527639_copy2236->GetZaxis()->SetLabelFont(43);
   axis0.994175527639_copy2236->GetZaxis()->SetLabelOffset(0.0087);
   axis0.994175527639_copy2236->GetZaxis()->SetLabelSize(32);
   axis0.994175527639_copy2236->GetZaxis()->SetTitleSize(35);
   axis0.994175527639_copy2236->GetZaxis()->SetTitleOffset(1.32);
   axis0.994175527639_copy2236->GetZaxis()->SetTitleFont(43);
   axis0.994175527639_copy2236->Draw("sameaxis");
   
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.673549718646","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.522757875358","Multijet","F");

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
   entry=leg->AddEntry("setHistDY0.503401701937","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.911844378684","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.0435090260331","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.188264163989","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.467309357837","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.224741095069","#it{t}-channel","F");

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
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566_2->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->Modified();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->cd();
   cvmuon_3j2t_top_logpt_qcdbdt0.157367211566->SetSelected(cvmuon_3j2t_top_logpt_qcdbdt0.157367211566);
}
