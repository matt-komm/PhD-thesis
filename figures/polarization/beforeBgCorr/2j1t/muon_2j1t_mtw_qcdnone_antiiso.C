void plots/2j1t/muon_2j1t_mtw_qcdnone_antiiso()
{
//=========Macro generated from canvas: cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216/
//=========  (Thu Apr 20 00:28:32 2017) by ROOT version6.02/05
   TCanvas *cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216 = new TCanvas("cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetHighLightColor(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->Range(0,0,1,1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetFillColor(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetBorderSize(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetTickx(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetTicky(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetLeftMargin(0.1150442);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetRightMargin(0.227083);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetTopMargin(0.04002582);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetBottomMargin(0.08064517);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetFrameLineWidth(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetFrameBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1
   TPad *cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1 = new TPad("cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1", "",0,0,1,1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->Draw();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->Range(-46.66667,0.06666676,286.6667,3.87619);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetFillColor(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetFillStyle(4000);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetBorderSize(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetTickx(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetTicky(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetLeftMargin(0.14);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetRightMargin(0.26);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetTopMargin(0.65);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetBottomMargin(0.14);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetFrameBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.288398179836229 = new TH2F("axisRes0.288398179836229","",50,0,200,50,0.6,1.4);
   axisRes0.288398179836229->SetMarkerStyle(20);
   axisRes0.288398179836229->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.288398179836229->GetXaxis()->SetNdivisions(1005);
   axisRes0.288398179836229->GetXaxis()->SetLabelFont(43);
   axisRes0.288398179836229->GetXaxis()->SetLabelOffset(0.0077);
   axisRes0.288398179836229->GetXaxis()->SetLabelSize(32);
   axisRes0.288398179836229->GetXaxis()->SetTitleSize(35);
   axisRes0.288398179836229->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.288398179836229->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.288398179836229->GetXaxis()->SetTitleFont(43);
   axisRes0.288398179836229->GetYaxis()->SetTitle("Data/MC");
   axisRes0.288398179836229->GetYaxis()->SetNdivisions(406);
   axisRes0.288398179836229->GetYaxis()->SetLabelFont(43);
   axisRes0.288398179836229->GetYaxis()->SetLabelOffset(0.0077);
   axisRes0.288398179836229->GetYaxis()->SetLabelSize(32);
   axisRes0.288398179836229->GetYaxis()->SetTitleSize(35);
   axisRes0.288398179836229->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.288398179836229->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.288398179836229->GetYaxis()->SetTitleFont(43);
   axisRes0.288398179836229->GetZaxis()->SetLabelFont(43);
   axisRes0.288398179836229->GetZaxis()->SetLabelOffset(0.0077);
   axisRes0.288398179836229->GetZaxis()->SetLabelSize(32);
   axisRes0.288398179836229->GetZaxis()->SetTitleSize(35);
   axisRes0.288398179836229->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.288398179836229->GetZaxis()->SetTitleFont(43);
   axisRes0.288398179836229->Draw("AXIS");
   TBox *box = new TBox(0,0.9270643,10,1.072936);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9270643,10,1.072936);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9462165,20,1.053784);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9462165,20,1.053784);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.9418284,30,1.058172);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.9418284,30,1.058172);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.8762994,40,1.123701);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.8762994,40,1.123701);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9350359,50,1.064964);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9350359,50,1.064964);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9622148,60,1.037785);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9622148,60,1.037785);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9509842,70,1.049016);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9509842,70,1.049016);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9679285,80,1.032072);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9679285,80,1.032072);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.966271,90,1.033729);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.966271,90,1.033729);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9633904,100,1.03661);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9633904,100,1.03661);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.9533044,110,1.046696);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.9533044,110,1.046696);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.9400695,120,1.05993);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.9400695,120,1.05993);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.949803,130,1.050197);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.949803,130,1.050197);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.9294185,140,1.070582);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.9294185,140,1.070582);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.9238277,150,1.076172);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.9238277,150,1.076172);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.8914965,160,1.108503);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.8914965,160,1.108503);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.9092313,170,1.090769);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.9092313,170,1.090769);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.9084442,180,1.091556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.9084442,180,1.091556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.8923193,190,1.107681);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.8923193,190,1.107681);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9582498,200,1.04175);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9582498,200,1.04175);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis172[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata0.6389672952180.863715014778230 = new TH1F("setHistdata0.6389672952180.863715014778230","",20, xAxis172);
   setHistdata0.6389672952180.863715014778230->SetBinContent(1,61.31766);
   setHistdata0.6389672952180.863715014778230->SetBinContent(2,60.9776);
   setHistdata0.6389672952180.863715014778230->SetBinContent(3,45.64212);
   setHistdata0.6389672952180.863715014778230->SetBinContent(4,23.12049);
   setHistdata0.6389672952180.863715014778230->SetBinContent(5,17.50571);
   setHistdata0.6389672952180.863715014778230->SetBinContent(6,8.872078);
   setHistdata0.6389672952180.863715014778230->SetBinContent(7,3.869402);
   setHistdata0.6389672952180.863715014778230->SetBinContent(8,2.549078);
   setHistdata0.6389672952180.863715014778230->SetBinContent(9,1.745685);
   setHistdata0.6389672952180.863715014778230->SetBinContent(10,1.241642);
   setHistdata0.6389672952180.863715014778230->SetBinContent(11,1.20344);
   setHistdata0.6389672952180.863715014778230->SetBinContent(12,1.251538);
   setHistdata0.6389672952180.863715014778230->SetBinContent(13,1.233805);
   setHistdata0.6389672952180.863715014778230->SetBinContent(14,1.305815);
   setHistdata0.6389672952180.863715014778230->SetBinContent(15,1.523827);
   setHistdata0.6389672952180.863715014778230->SetBinContent(16,1.10781);
   setHistdata0.6389672952180.863715014778230->SetBinContent(17,1.210895);
   setHistdata0.6389672952180.863715014778230->SetBinContent(18,1.258397);
   setHistdata0.6389672952180.863715014778230->SetBinContent(19,1.492049);
   setHistdata0.6389672952180.863715014778230->SetBinContent(20,1.116218);
   setHistdata0.6389672952180.863715014778230->SetBinError(1,0.7205868);
   setHistdata0.6389672952180.863715014778230->SetBinError(2,0.7427461);
   setHistdata0.6389672952180.863715014778230->SetBinError(3,0.5939582);
   setHistdata0.6389672952180.863715014778230->SetBinError(4,0.3294199);
   setHistdata0.6389672952180.863715014778230->SetBinError(5,0.2788892);
   setHistdata0.6389672952180.863715014778230->SetBinError(6,0.1733966);
   setHistdata0.6389672952180.863715014778230->SetBinError(7,0.09753073);
   setHistdata0.6389672952180.863715014778230->SetBinError(8,0.07616829);
   setHistdata0.6389672952180.863715014778230->SetBinError(9,0.06739144);
   setHistdata0.6389672952180.863715014778230->SetBinError(10,0.06571466);
   setHistdata0.6389672952180.863715014778230->SetBinError(11,0.08707788);
   setHistdata0.6389672952180.863715014778230->SetBinError(12,0.1215601);
   setHistdata0.6389672952180.863715014778230->SetBinError(13,0.1554448);
   setHistdata0.6389672952180.863715014778230->SetBinError(14,0.203934);
   setHistdata0.6389672952180.863715014778230->SetBinError(15,0.2932606);
   setHistdata0.6389672952180.863715014778230->SetBinError(16,0.2686834);
   setHistdata0.6389672952180.863715014778230->SetBinError(17,0.3829185);
   setHistdata0.6389672952180.863715014778230->SetBinError(18,0.4449104);
   setHistdata0.6389672952180.863715014778230->SetBinError(19,0.5639416);
   setHistdata0.6389672952180.863715014778230->SetBinError(20,0.1208342);
   setHistdata0.6389672952180.863715014778230->SetBinError(21,3.605551);
   setHistdata0.6389672952180.863715014778230->SetEntries(35598);
   setHistdata0.6389672952180.863715014778230->SetFillStyle(0);
   setHistdata0.6389672952180.863715014778230->SetMarkerStyle(20);
   setHistdata0.6389672952180.863715014778230->SetMarkerSize(1.15);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetNdivisions(1005);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetLabelFont(43);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetLabelOffset(0.0077);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetLabelSize(32);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetTitleSize(35);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetTickLength(0.05);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.6389672952180.863715014778230->GetXaxis()->SetTitleFont(43);
   setHistdata0.6389672952180.863715014778230->GetYaxis()->SetNdivisions(506);
   setHistdata0.6389672952180.863715014778230->GetYaxis()->SetLabelFont(43);
   setHistdata0.6389672952180.863715014778230->GetYaxis()->SetLabelOffset(0.0077);
   setHistdata0.6389672952180.863715014778230->GetYaxis()->SetLabelSize(32);
   setHistdata0.6389672952180.863715014778230->GetYaxis()->SetTitleSize(35);
   setHistdata0.6389672952180.863715014778230->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.6389672952180.863715014778230->GetYaxis()->SetTitleFont(43);
   setHistdata0.6389672952180.863715014778230->GetZaxis()->SetLabelFont(43);
   setHistdata0.6389672952180.863715014778230->GetZaxis()->SetLabelOffset(0.0077);
   setHistdata0.6389672952180.863715014778230->GetZaxis()->SetLabelSize(32);
   setHistdata0.6389672952180.863715014778230->GetZaxis()->SetTitleSize(35);
   setHistdata0.6389672952180.863715014778230->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.6389672952180.863715014778230->GetZaxis()->SetTitleFont(43);
   setHistdata0.6389672952180.863715014778230->Draw("PESame");
   
   TF1 *axisLine0.65410542144420 = new TF1("axisLine0.654105421444","1",0,200);
   axisLine0.65410542144420->SetFillColor(19);
   axisLine0.65410542144420->SetFillStyle(0);
   axisLine0.65410542144420->SetMarkerStyle(20);
   axisLine0.65410542144420->SetLineWidth(1);
   axisLine0.65410542144420->GetXaxis()->SetNdivisions(1005);
   axisLine0.65410542144420->GetXaxis()->SetLabelFont(43);
   axisLine0.65410542144420->GetXaxis()->SetLabelOffset(0.0077);
   axisLine0.65410542144420->GetXaxis()->SetLabelSize(32);
   axisLine0.65410542144420->GetXaxis()->SetTitleSize(35);
   axisLine0.65410542144420->GetXaxis()->SetTickLength(0.05);
   axisLine0.65410542144420->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.65410542144420->GetXaxis()->SetTitleFont(43);
   axisLine0.65410542144420->GetYaxis()->SetNdivisions(506);
   axisLine0.65410542144420->GetYaxis()->SetLabelFont(43);
   axisLine0.65410542144420->GetYaxis()->SetLabelOffset(0.0077);
   axisLine0.65410542144420->GetYaxis()->SetLabelSize(32);
   axisLine0.65410542144420->GetYaxis()->SetTitleSize(35);
   axisLine0.65410542144420->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.65410542144420->GetYaxis()->SetTitleFont(43);
   axisLine0.65410542144420->Draw("SameL");
   
   TH2F *axisRes0.288398179836_copy231 = new TH2F("axisRes0.288398179836_copy231","",50,0,200,50,0.6,1.4);
   axisRes0.288398179836_copy231->SetDirectory(0);
   axisRes0.288398179836_copy231->SetMarkerStyle(20);
   axisRes0.288398179836_copy231->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.288398179836_copy231->GetXaxis()->SetNdivisions(1005);
   axisRes0.288398179836_copy231->GetXaxis()->SetLabelFont(43);
   axisRes0.288398179836_copy231->GetXaxis()->SetLabelOffset(0.0077);
   axisRes0.288398179836_copy231->GetXaxis()->SetLabelSize(32);
   axisRes0.288398179836_copy231->GetXaxis()->SetTitleSize(35);
   axisRes0.288398179836_copy231->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.288398179836_copy231->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.288398179836_copy231->GetXaxis()->SetTitleFont(43);
   axisRes0.288398179836_copy231->GetYaxis()->SetTitle("Data/MC");
   axisRes0.288398179836_copy231->GetYaxis()->SetNdivisions(406);
   axisRes0.288398179836_copy231->GetYaxis()->SetLabelFont(43);
   axisRes0.288398179836_copy231->GetYaxis()->SetLabelOffset(0.0077);
   axisRes0.288398179836_copy231->GetYaxis()->SetLabelSize(32);
   axisRes0.288398179836_copy231->GetYaxis()->SetTitleSize(35);
   axisRes0.288398179836_copy231->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.288398179836_copy231->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.288398179836_copy231->GetYaxis()->SetTitleFont(43);
   axisRes0.288398179836_copy231->GetZaxis()->SetLabelFont(43);
   axisRes0.288398179836_copy231->GetZaxis()->SetLabelOffset(0.0077);
   axisRes0.288398179836_copy231->GetZaxis()->SetLabelSize(32);
   axisRes0.288398179836_copy231->GetZaxis()->SetTitleSize(35);
   axisRes0.288398179836_copy231->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.288398179836_copy231->GetZaxis()->SetTitleFont(43);
   axisRes0.288398179836_copy231->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_1->Modified();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->cd();
  
// ------------>Primitives in pad: cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2
   TPad *cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2 = new TPad("cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2", "",0,0,1,1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->Draw();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->Range(-46.66667,-6224.719,286.6667,11560.19);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetFillColor(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetFillStyle(4000);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetBorderSize(2);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetTickx(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetTicky(1);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetLeftMargin(0.14);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetRightMargin(0.26);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetTopMargin(0.08);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetBottomMargin(0.35);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetFrameBorderMode(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetFrameFillStyle(0);
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->SetFrameBorderMode(0);
   
   TH2F *axis0.0408277423257232 = new TH2F("axis0.0408277423257232","",50,0,200,50,0,10137.4);
   axis0.0408277423257232->SetMarkerStyle(20);
   axis0.0408277423257232->GetXaxis()->SetNdivisions(1005);
   axis0.0408277423257232->GetXaxis()->SetLabelFont(43);
   axis0.0408277423257232->GetXaxis()->SetLabelOffset(0.0077);
   axis0.0408277423257232->GetXaxis()->SetLabelSize(0);
   axis0.0408277423257232->GetXaxis()->SetTitleSize(35);
   axis0.0408277423257232->GetXaxis()->SetTickLength(0.025);
   axis0.0408277423257232->GetXaxis()->SetTitleOffset(1.135);
   axis0.0408277423257232->GetXaxis()->SetTitleFont(43);
   axis0.0408277423257232->GetYaxis()->SetTitle("Events / bin");
   axis0.0408277423257232->GetYaxis()->SetNdivisions(506);
   axis0.0408277423257232->GetYaxis()->SetLabelFont(43);
   axis0.0408277423257232->GetYaxis()->SetLabelOffset(0.0077);
   axis0.0408277423257232->GetYaxis()->SetLabelSize(32);
   axis0.0408277423257232->GetYaxis()->SetTitleSize(35);
   axis0.0408277423257232->GetYaxis()->SetTickLength(0.02631579);
   axis0.0408277423257232->GetYaxis()->SetTitleOffset(1.32);
   axis0.0408277423257232->GetYaxis()->SetTitleFont(43);
   axis0.0408277423257232->GetZaxis()->SetLabelFont(43);
   axis0.0408277423257232->GetZaxis()->SetLabelOffset(0.0077);
   axis0.0408277423257232->GetZaxis()->SetLabelSize(32);
   axis0.0408277423257232->GetZaxis()->SetTitleSize(35);
   axis0.0408277423257232->GetZaxis()->SetTitleOffset(1.32);
   axis0.0408277423257232->GetZaxis()->SetTitleFont(43);
   axis0.0408277423257232->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis173[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *_stack_19_stack_20 = new TH1F("_stack_19_stack_20","",20, xAxis173);
   _stack_19_stack_20->SetMinimum(-1.026585e-08);
   _stack_19_stack_20->SetMaximum(461.3432);
   _stack_19_stack_20->SetDirectory(0);
   _stack_19_stack_20->SetStats(0);
   _stack_19_stack_20->SetMarkerStyle(20);
   _stack_19_stack_20->GetXaxis()->SetNdivisions(1005);
   _stack_19_stack_20->GetXaxis()->SetLabelFont(43);
   _stack_19_stack_20->GetXaxis()->SetLabelOffset(0.0077);
   _stack_19_stack_20->GetXaxis()->SetLabelSize(32);
   _stack_19_stack_20->GetXaxis()->SetTitleSize(35);
   _stack_19_stack_20->GetXaxis()->SetTickLength(0.05);
   _stack_19_stack_20->GetXaxis()->SetTitleOffset(1.135);
   _stack_19_stack_20->GetXaxis()->SetTitleFont(43);
   _stack_19_stack_20->GetYaxis()->SetNdivisions(506);
   _stack_19_stack_20->GetYaxis()->SetLabelFont(43);
   _stack_19_stack_20->GetYaxis()->SetLabelOffset(0.0077);
   _stack_19_stack_20->GetYaxis()->SetLabelSize(32);
   _stack_19_stack_20->GetYaxis()->SetTitleSize(35);
   _stack_19_stack_20->GetYaxis()->SetTitleOffset(1.32);
   _stack_19_stack_20->GetYaxis()->SetTitleFont(43);
   _stack_19_stack_20->GetZaxis()->SetLabelFont(43);
   _stack_19_stack_20->GetZaxis()->SetLabelOffset(0.0077);
   _stack_19_stack_20->GetZaxis()->SetLabelSize(32);
   _stack_19_stack_20->GetZaxis()->SetTitleSize(35);
   _stack_19_stack_20->GetZaxis()->SetTitleOffset(1.32);
   _stack_19_stack_20->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_19_stack_20);
   
   Double_t xAxis174[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttChannel0.133774428111233 = new TH1F("setHisttChannel0.133774428111233","",20, xAxis174);
   setHisttChannel0.133774428111233->SetBinContent(1,8.789623);
   setHisttChannel0.133774428111233->SetBinContent(2,10.83312);
   setHisttChannel0.133774428111233->SetBinContent(3,14.53801);
   setHisttChannel0.133774428111233->SetBinContent(4,15.46776);
   setHisttChannel0.133774428111233->SetBinContent(5,23.01196);
   setHisttChannel0.133774428111233->SetBinContent(6,28.4969);
   setHisttChannel0.133774428111233->SetBinContent(7,38.68081);
   setHisttChannel0.133774428111233->SetBinContent(8,46.35852);
   setHisttChannel0.133774428111233->SetBinContent(9,42.9584);
   setHisttChannel0.133774428111233->SetBinContent(10,25.62545);
   setHisttChannel0.133774428111233->SetBinContent(11,12.44293);
   setHisttChannel0.133774428111233->SetBinContent(12,5.117807);
   setHisttChannel0.133774428111233->SetBinContent(13,1.21875);
   setHisttChannel0.133774428111233->SetBinContent(14,0.8828264);
   setHisttChannel0.133774428111233->SetBinContent(15,0.06433205);
   setHisttChannel0.133774428111233->SetBinContent(16,0.1492615);
   setHisttChannel0.133774428111233->SetBinContent(17,0.04606431);
   setHisttChannel0.133774428111233->SetBinContent(18,0.1409724);
   setHisttChannel0.133774428111233->SetBinContent(20,0.125739);
   setHisttChannel0.133774428111233->SetBinError(1,1.031425);
   setHisttChannel0.133774428111233->SetBinError(2,1.115727);
   setHisttChannel0.133774428111233->SetBinError(3,1.299189);
   setHisttChannel0.133774428111233->SetBinError(4,1.349182);
   setHisttChannel0.133774428111233->SetBinError(5,1.678218);
   setHisttChannel0.133774428111233->SetBinError(6,1.804382);
   setHisttChannel0.133774428111233->SetBinError(7,2.169907);
   setHisttChannel0.133774428111233->SetBinError(8,2.343323);
   setHisttChannel0.133774428111233->SetBinError(9,2.26763);
   setHisttChannel0.133774428111233->SetBinError(10,1.713172);
   setHisttChannel0.133774428111233->SetBinError(11,1.222083);
   setHisttChannel0.133774428111233->SetBinError(12,0.7871155);
   setHisttChannel0.133774428111233->SetBinError(13,0.3598898);
   setHisttChannel0.133774428111233->SetBinError(14,0.3075089);
   setHisttChannel0.133774428111233->SetBinError(15,0.05616323);
   setHisttChannel0.133774428111233->SetBinError(16,0.1312948);
   setHisttChannel0.133774428111233->SetBinError(17,0.0460643);
   setHisttChannel0.133774428111233->SetBinError(18,0.1409724);
   setHisttChannel0.133774428111233->SetBinError(21,0.125739);
   setHisttChannel0.133774428111233->SetEntries(5444);
   setHisttChannel0.133774428111233->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.133774428111233->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.133774428111233->SetLineColor(ci);
   setHisttChannel0.133774428111233->SetLineWidth(2);
   setHisttChannel0.133774428111233->SetMarkerStyle(20);
   setHisttChannel0.133774428111233->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.133774428111233->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.133774428111233->GetXaxis()->SetLabelOffset(0.0077);
   setHisttChannel0.133774428111233->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.133774428111233->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.133774428111233->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.133774428111233->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.133774428111233->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.133774428111233->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.133774428111233->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.133774428111233->GetYaxis()->SetLabelOffset(0.0077);
   setHisttChannel0.133774428111233->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.133774428111233->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.133774428111233->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.133774428111233->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.133774428111233->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.133774428111233->GetZaxis()->SetLabelOffset(0.0077);
   setHisttChannel0.133774428111233->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.133774428111233->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.133774428111233->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.133774428111233->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.133774428111,"HIST F");
   Double_t xAxis175[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttWs0.110727052141234 = new TH1F("setHisttWs0.110727052141234","",20, xAxis175);
   setHisttWs0.110727052141234->SetBinContent(1,6.822194);
   setHisttWs0.110727052141234->SetBinContent(2,5.813278);
   setHisttWs0.110727052141234->SetBinContent(3,5.772861);
   setHisttWs0.110727052141234->SetBinContent(4,11.14731);
   setHisttWs0.110727052141234->SetBinContent(5,10.98476);
   setHisttWs0.110727052141234->SetBinContent(6,18.46493);
   setHisttWs0.110727052141234->SetBinContent(7,26.32938);
   setHisttWs0.110727052141234->SetBinContent(8,24.76273);
   setHisttWs0.110727052141234->SetBinContent(9,24.41329);
   setHisttWs0.110727052141234->SetBinContent(10,14.15311);
   setHisttWs0.110727052141234->SetBinContent(11,10.24298);
   setHisttWs0.110727052141234->SetBinContent(12,4.343924);
   setHisttWs0.110727052141234->SetBinContent(13,1.459768);
   setHisttWs0.110727052141234->SetBinContent(14,1.457758);
   setHisttWs0.110727052141234->SetBinContent(15,1.54356);
   setHisttWs0.110727052141234->SetBinContent(16,1.008117);
   setHisttWs0.110727052141234->SetBinContent(17,0.3187066);
   setHisttWs0.110727052141234->SetBinContent(20,2.335451);
   setHisttWs0.110727052141234->SetBinError(1,1.807861);
   setHisttWs0.110727052141234->SetBinError(2,1.75134);
   setHisttWs0.110727052141234->SetBinError(3,1.649208);
   setHisttWs0.110727052141234->SetBinError(4,2.455805);
   setHisttWs0.110727052141234->SetBinError(5,2.251156);
   setHisttWs0.110727052141234->SetBinError(6,2.894603);
   setHisttWs0.110727052141234->SetBinError(7,3.489589);
   setHisttWs0.110727052141234->SetBinError(8,3.426597);
   setHisttWs0.110727052141234->SetBinError(9,3.397535);
   setHisttWs0.110727052141234->SetBinError(10,2.517046);
   setHisttWs0.110727052141234->SetBinError(11,2.260833);
   setHisttWs0.110727052141234->SetBinError(12,1.472921);
   setHisttWs0.110727052141234->SetBinError(13,0.8288137);
   setHisttWs0.110727052141234->SetBinError(14,0.8197335);
   setHisttWs0.110727052141234->SetBinError(15,0.8422399);
   setHisttWs0.110727052141234->SetBinError(16,0.7173211);
   setHisttWs0.110727052141234->SetBinError(17,0.3187066);
   setHisttWs0.110727052141234->SetBinError(20,0.5021003);
   setHisttWs0.110727052141234->SetBinError(21,0.9344956);
   setHisttWs0.110727052141234->SetEntries(1140);
   setHisttWs0.110727052141234->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.110727052141234->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.110727052141234->SetLineColor(ci);
   setHisttWs0.110727052141234->SetLineWidth(2);
   setHisttWs0.110727052141234->SetMarkerStyle(20);
   setHisttWs0.110727052141234->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.110727052141234->GetXaxis()->SetLabelFont(43);
   setHisttWs0.110727052141234->GetXaxis()->SetLabelOffset(0.0077);
   setHisttWs0.110727052141234->GetXaxis()->SetLabelSize(32);
   setHisttWs0.110727052141234->GetXaxis()->SetTitleSize(35);
   setHisttWs0.110727052141234->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.110727052141234->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.110727052141234->GetXaxis()->SetTitleFont(43);
   setHisttWs0.110727052141234->GetYaxis()->SetNdivisions(506);
   setHisttWs0.110727052141234->GetYaxis()->SetLabelFont(43);
   setHisttWs0.110727052141234->GetYaxis()->SetLabelOffset(0.0077);
   setHisttWs0.110727052141234->GetYaxis()->SetLabelSize(32);
   setHisttWs0.110727052141234->GetYaxis()->SetTitleSize(35);
   setHisttWs0.110727052141234->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.110727052141234->GetYaxis()->SetTitleFont(43);
   setHisttWs0.110727052141234->GetZaxis()->SetLabelFont(43);
   setHisttWs0.110727052141234->GetZaxis()->SetLabelOffset(0.0077);
   setHisttWs0.110727052141234->GetZaxis()->SetLabelSize(32);
   setHisttWs0.110727052141234->GetZaxis()->SetTitleSize(35);
   setHisttWs0.110727052141234->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.110727052141234->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.110727052141,"HIST F");
   Double_t xAxis176[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistTTJets0.738929558773235 = new TH1F("setHistTTJets0.738929558773235","",20, xAxis176);
   setHistTTJets0.738929558773235->SetBinContent(1,69.62186);
   setHistTTJets0.738929558773235->SetBinContent(2,77.49484);
   setHistTTJets0.738929558773235->SetBinContent(3,79.63978);
   setHistTTJets0.738929558773235->SetBinContent(4,111.902);
   setHistTTJets0.738929558773235->SetBinContent(5,131.2635);
   setHistTTJets0.738929558773235->SetBinContent(6,184.7037);
   setHistTTJets0.738929558773235->SetBinContent(7,237.4604);
   setHistTTJets0.738929558773235->SetBinContent(8,264.005);
   setHistTTJets0.738929558773235->SetBinContent(9,233.1214);
   setHistTTJets0.738929558773235->SetBinContent(10,179.0609);
   setHistTTJets0.738929558773235->SetBinContent(11,107.9072);
   setHistTTJets0.738929558773235->SetBinContent(12,60.83386);
   setHistTTJets0.738929558773235->SetBinContent(13,44.40928);
   setHistTTJets0.738929558773235->SetBinContent(14,26.94158);
   setHistTTJets0.738929558773235->SetBinContent(15,15.72713);
   setHistTTJets0.738929558773235->SetBinContent(16,12.01678);
   setHistTTJets0.738929558773235->SetBinContent(17,7.893585);
   setHistTTJets0.738929558773235->SetBinContent(18,6.216323);
   setHistTTJets0.738929558773235->SetBinContent(19,4.691534);
   setHistTTJets0.738929558773235->SetBinContent(20,11.46685);
   setHistTTJets0.738929558773235->SetBinError(1,2.645553);
   setHistTTJets0.738929558773235->SetBinError(2,2.768513);
   setHistTTJets0.738929558773235->SetBinError(3,2.800812);
   setHistTTJets0.738929558773235->SetBinError(4,3.335408);
   setHistTTJets0.738929558773235->SetBinError(5,3.625223);
   setHistTTJets0.738929558773235->SetBinError(6,4.376816);
   setHistTTJets0.738929558773235->SetBinError(7,4.988701);
   setHistTTJets0.738929558773235->SetBinError(8,5.264406);
   setHistTTJets0.738929558773235->SetBinError(9,4.905992);
   setHistTTJets0.738929558773235->SetBinError(10,4.247347);
   setHistTTJets0.738929558773235->SetBinError(11,3.153504);
   setHistTTJets0.738929558773235->SetBinError(12,2.246658);
   setHistTTJets0.738929558773235->SetBinError(13,1.825778);
   setHistTTJets0.738929558773235->SetBinError(14,1.353727);
   setHistTTJets0.738929558773235->SetBinError(15,0.9808043);
   setHistTTJets0.738929558773235->SetBinError(16,0.8095263);
   setHistTTJets0.738929558773235->SetBinError(17,0.6769083);
   setHistTTJets0.738929558773235->SetBinError(18,0.5647172);
   setHistTTJets0.738929558773235->SetBinError(19,0.5051875);
   setHistTTJets0.738929558773235->SetBinError(20,0.3256371);
   setHistTTJets0.738929558773235->SetBinError(21,0.645993);
   setHistTTJets0.738929558773235->SetEntries(28960);
   setHistTTJets0.738929558773235->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.738929558773235->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.738929558773235->SetLineColor(ci);
   setHistTTJets0.738929558773235->SetLineWidth(2);
   setHistTTJets0.738929558773235->SetMarkerStyle(20);
   setHistTTJets0.738929558773235->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.738929558773235->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.738929558773235->GetXaxis()->SetLabelOffset(0.0077);
   setHistTTJets0.738929558773235->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.738929558773235->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.738929558773235->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.738929558773235->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.738929558773235->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.738929558773235->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.738929558773235->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.738929558773235->GetYaxis()->SetLabelOffset(0.0077);
   setHistTTJets0.738929558773235->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.738929558773235->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.738929558773235->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.738929558773235->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.738929558773235->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.738929558773235->GetZaxis()->SetLabelOffset(0.0077);
   setHistTTJets0.738929558773235->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.738929558773235->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.738929558773235->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.738929558773235->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.738929558773,"HIST F");
   Double_t xAxis177[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsMGHF0.860287586869236 = new TH1F("setHistWJetsMGHF0.860287586869236","",20, xAxis177);
   setHistWJetsMGHF0.860287586869236->SetBinContent(1,22.05194);
   setHistWJetsMGHF0.860287586869236->SetBinContent(2,11.67263);
   setHistWJetsMGHF0.860287586869236->SetBinContent(3,20.11395);
   setHistWJetsMGHF0.860287586869236->SetBinContent(4,66.68866);
   setHistWJetsMGHF0.860287586869236->SetBinContent(5,38.02452);
   setHistWJetsMGHF0.860287586869236->SetBinContent(6,50.11607);
   setHistWJetsMGHF0.860287586869236->SetBinContent(7,68.51685);
   setHistWJetsMGHF0.860287586869236->SetBinContent(8,84.17229);
   setHistWJetsMGHF0.860287586869236->SetBinContent(9,67.31101);
   setHistWJetsMGHF0.860287586869236->SetBinContent(10,59.71711);
   setHistWJetsMGHF0.860287586869236->SetBinContent(11,23.59661);
   setHistWJetsMGHF0.860287586869236->SetBinContent(12,13.71462);
   setHistWJetsMGHF0.860287586869236->SetBinContent(13,3.97377);
   setHistWJetsMGHF0.860287586869236->SetBinContent(14,2.11586);
   setHistWJetsMGHF0.860287586869236->SetBinContent(15,0.3835239);
   setHistWJetsMGHF0.860287586869236->SetBinContent(16,2.171433);
   setHistWJetsMGHF0.860287586869236->SetBinContent(20,0.4060735);
   setHistWJetsMGHF0.860287586869236->SetBinError(1,5.77281);
   setHistWJetsMGHF0.860287586869236->SetBinError(2,3.155166);
   setHistWJetsMGHF0.860287586869236->SetBinError(3,4.277379);
   setHistWJetsMGHF0.860287586869236->SetBinError(4,25.7021);
   setHistWJetsMGHF0.860287586869236->SetBinError(5,6.890773);
   setHistWJetsMGHF0.860287586869236->SetBinError(6,7.572389);
   setHistWJetsMGHF0.860287586869236->SetBinError(7,8.723857);
   setHistWJetsMGHF0.860287586869236->SetBinError(8,9.892142);
   setHistWJetsMGHF0.860287586869236->SetBinError(9,8.816461);
   setHistWJetsMGHF0.860287586869236->SetBinError(10,8.37556);
   setHistWJetsMGHF0.860287586869236->SetBinError(11,5.21142);
   setHistWJetsMGHF0.860287586869236->SetBinError(12,4.178256);
   setHistWJetsMGHF0.860287586869236->SetBinError(13,1.555556);
   setHistWJetsMGHF0.860287586869236->SetBinError(14,1.520555);
   setHistWJetsMGHF0.860287586869236->SetBinError(15,0.3835239);
   setHistWJetsMGHF0.860287586869236->SetBinError(16,1.259075);
   setHistWJetsMGHF0.860287586869236->SetBinError(21,0.4060735);
   setHistWJetsMGHF0.860287586869236->SetEntries(638);
   setHistWJetsMGHF0.860287586869236->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.860287586869236->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.860287586869236->SetLineColor(ci);
   setHistWJetsMGHF0.860287586869236->SetLineWidth(2);
   setHistWJetsMGHF0.860287586869236->SetMarkerStyle(20);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetLabelOffset(0.0077);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.860287586869236->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.860287586869236->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.860287586869236->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.860287586869236->GetYaxis()->SetLabelOffset(0.0077);
   setHistWJetsMGHF0.860287586869236->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.860287586869236->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.860287586869236->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.860287586869236->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.860287586869236->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.860287586869236->GetZaxis()->SetLabelOffset(0.0077);
   setHistWJetsMGHF0.860287586869236->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.860287586869236->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.860287586869236->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.860287586869236->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.860287586869,"HIST F");
   Double_t xAxis178[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsMGLF0.866877614625237 = new TH1F("setHistWJetsMGLF0.866877614625237","",20, xAxis178);
   setHistWJetsMGLF0.866877614625237->SetBinContent(1,3.982282);
   setHistWJetsMGLF0.866877614625237->SetBinContent(2,0.7202669);
   setHistWJetsMGLF0.866877614625237->SetBinContent(3,0.5558129);
   setHistWJetsMGLF0.866877614625237->SetBinContent(4,3.804653);
   setHistWJetsMGLF0.866877614625237->SetBinContent(5,14.09377);
   setHistWJetsMGLF0.866877614625237->SetBinContent(6,7.947906);
   setHistWJetsMGLF0.866877614625237->SetBinContent(7,35.79381);
   setHistWJetsMGLF0.866877614625237->SetBinContent(8,11.60173);
   setHistWJetsMGLF0.866877614625237->SetBinContent(9,5.824175);
   setHistWJetsMGLF0.866877614625237->SetBinContent(10,6.997045);
   setHistWJetsMGLF0.866877614625237->SetBinContent(12,0.6855644);
   setHistWJetsMGLF0.866877614625237->SetBinError(1,2.364954);
   setHistWJetsMGLF0.866877614625237->SetBinError(2,0.7202669);
   setHistWJetsMGLF0.866877614625237->SetBinError(3,0.5558129);
   setHistWJetsMGLF0.866877614625237->SetBinError(4,2.181602);
   setHistWJetsMGLF0.866877614625237->SetBinError(5,11.12553);
   setHistWJetsMGLF0.866877614625237->SetBinError(6,4.634397);
   setHistWJetsMGLF0.866877614625237->SetBinError(7,16.72346);
   setHistWJetsMGLF0.866877614625237->SetBinError(8,5.596507);
   setHistWJetsMGLF0.866877614625237->SetBinError(9,3.172592);
   setHistWJetsMGLF0.866877614625237->SetBinError(10,3.075946);
   setHistWJetsMGLF0.866877614625237->SetBinError(12,0.6855644);
   setHistWJetsMGLF0.866877614625237->SetEntries(50);
   setHistWJetsMGLF0.866877614625237->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.866877614625237->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.866877614625237->SetLineColor(ci);
   setHistWJetsMGLF0.866877614625237->SetLineWidth(2);
   setHistWJetsMGLF0.866877614625237->SetMarkerStyle(20);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetLabelOffset(0.0077);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.866877614625237->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.866877614625237->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.866877614625237->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.866877614625237->GetYaxis()->SetLabelOffset(0.0077);
   setHistWJetsMGLF0.866877614625237->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.866877614625237->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.866877614625237->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.866877614625237->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.866877614625237->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.866877614625237->GetZaxis()->SetLabelOffset(0.0077);
   setHistWJetsMGLF0.866877614625237->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.866877614625237->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.866877614625237->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.866877614625237->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.866877614625,"HIST F");
   Double_t xAxis179[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistDY0.788662445837238 = new TH1F("setHistDY0.788662445837238","",20, xAxis179);
   setHistDY0.788662445837238->SetBinContent(1,6.822065);
   setHistDY0.788662445837238->SetBinContent(2,3.998251);
   setHistDY0.788662445837238->SetBinContent(3,8.755676);
   setHistDY0.788662445837238->SetBinContent(4,4.047369);
   setHistDY0.788662445837238->SetBinContent(5,7.690806);
   setHistDY0.788662445837238->SetBinContent(6,5.353549);
   setHistDY0.788662445837238->SetBinContent(8,8.474114);
   setHistDY0.788662445837238->SetBinContent(9,10.74796);
   setHistDY0.788662445837238->SetBinContent(10,1.96887);
   setHistDY0.788662445837238->SetBinContent(11,4.521926);
   setHistDY0.788662445837238->SetBinError(1,4.892224);
   setHistDY0.788662445837238->SetBinError(2,3.59031);
   setHistDY0.788662445837238->SetBinError(3,5.077763);
   setHistDY0.788662445837238->SetBinError(4,3.205036);
   setHistDY0.788662445837238->SetBinError(5,4.636786);
   setHistDY0.788662445837238->SetBinError(6,3.835043);
   setHistDY0.788662445837238->SetBinError(8,4.944292);
   setHistDY0.788662445837238->SetBinError(9,6.287487);
   setHistDY0.788662445837238->SetBinError(10,1.96887);
   setHistDY0.788662445837238->SetBinError(11,3.349125);
   setHistDY0.788662445837238->SetEntries(24);
   setHistDY0.788662445837238->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.788662445837238->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.788662445837238->SetLineColor(ci);
   setHistDY0.788662445837238->SetLineWidth(2);
   setHistDY0.788662445837238->SetMarkerStyle(20);
   setHistDY0.788662445837238->GetXaxis()->SetNdivisions(1005);
   setHistDY0.788662445837238->GetXaxis()->SetLabelFont(43);
   setHistDY0.788662445837238->GetXaxis()->SetLabelOffset(0.0077);
   setHistDY0.788662445837238->GetXaxis()->SetLabelSize(32);
   setHistDY0.788662445837238->GetXaxis()->SetTitleSize(35);
   setHistDY0.788662445837238->GetXaxis()->SetTickLength(0.05);
   setHistDY0.788662445837238->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.788662445837238->GetXaxis()->SetTitleFont(43);
   setHistDY0.788662445837238->GetYaxis()->SetNdivisions(506);
   setHistDY0.788662445837238->GetYaxis()->SetLabelFont(43);
   setHistDY0.788662445837238->GetYaxis()->SetLabelOffset(0.0077);
   setHistDY0.788662445837238->GetYaxis()->SetLabelSize(32);
   setHistDY0.788662445837238->GetYaxis()->SetTitleSize(35);
   setHistDY0.788662445837238->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.788662445837238->GetYaxis()->SetTitleFont(43);
   setHistDY0.788662445837238->GetZaxis()->SetLabelFont(43);
   setHistDY0.788662445837238->GetZaxis()->SetLabelOffset(0.0077);
   setHistDY0.788662445837238->GetZaxis()->SetLabelSize(32);
   setHistDY0.788662445837238->GetZaxis()->SetTitleSize(35);
   setHistDY0.788662445837238->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.788662445837238->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.788662445837,"HIST F");
   ->Draw("same");
   Double_t xAxis180[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata0.638967295218239 = new TH1F("setHistdata0.638967295218239","",20, xAxis180);
   setHistdata0.638967295218239->SetBinContent(1,7241);
   setHistdata0.638967295218239->SetBinContent(2,6740);
   setHistdata0.638967295218239->SetBinContent(3,5905);
   setHistdata0.638967295218239->SetBinContent(4,4926);
   setHistdata0.638967295218239->SetBinContent(5,3940);
   setHistdata0.638967295218239->SetBinContent(6,2618);
   setHistdata0.638967295218239->SetBinContent(7,1574);
   setHistdata0.638967295218239->SetBinContent(8,1120);
   setHistdata0.638967295218239->SetBinContent(9,671);
   setHistdata0.638967295218239->SetBinContent(10,357);
   setHistdata0.638967295218239->SetBinContent(11,191);
   setHistdata0.638967295218239->SetBinContent(12,106);
   setHistdata0.638967295218239->SetBinContent(13,63);
   setHistdata0.638967295218239->SetBinContent(14,41);
   setHistdata0.638967295218239->SetBinContent(15,27);
   setHistdata0.638967295218239->SetBinContent(16,17);
   setHistdata0.638967295218239->SetBinContent(17,10);
   setHistdata0.638967295218239->SetBinContent(18,8);
   setHistdata0.638967295218239->SetBinContent(19,7);
   setHistdata0.638967295218239->SetBinContent(20,16);
   setHistdata0.638967295218239->SetBinError(1,85.09407);
   setHistdata0.638967295218239->SetBinError(2,82.0975);
   setHistdata0.638967295218239->SetBinError(3,76.844);
   setHistdata0.638967295218239->SetBinError(4,70.18547);
   setHistdata0.638967295218239->SetBinError(5,62.76942);
   setHistdata0.638967295218239->SetBinError(6,51.1664);
   setHistdata0.638967295218239->SetBinError(7,39.67367);
   setHistdata0.638967295218239->SetBinError(8,33.4664);
   setHistdata0.638967295218239->SetBinError(9,25.90367);
   setHistdata0.638967295218239->SetBinError(10,18.89444);
   setHistdata0.638967295218239->SetBinError(11,13.82027);
   setHistdata0.638967295218239->SetBinError(12,10.29563);
   setHistdata0.638967295218239->SetBinError(13,7.937254);
   setHistdata0.638967295218239->SetBinError(14,6.403124);
   setHistdata0.638967295218239->SetBinError(15,5.196152);
   setHistdata0.638967295218239->SetBinError(16,4.123106);
   setHistdata0.638967295218239->SetBinError(17,3.162278);
   setHistdata0.638967295218239->SetBinError(18,2.828427);
   setHistdata0.638967295218239->SetBinError(19,2.645751);
   setHistdata0.638967295218239->SetBinError(20,1.732051);
   setHistdata0.638967295218239->SetBinError(21,3.605551);
   setHistdata0.638967295218239->SetEntries(35578);
   setHistdata0.638967295218239->SetFillStyle(0);
   setHistdata0.638967295218239->SetMarkerStyle(20);
   setHistdata0.638967295218239->SetMarkerSize(1.15);
   setHistdata0.638967295218239->GetXaxis()->SetNdivisions(1005);
   setHistdata0.638967295218239->GetXaxis()->SetLabelFont(43);
   setHistdata0.638967295218239->GetXaxis()->SetLabelOffset(0.0077);
   setHistdata0.638967295218239->GetXaxis()->SetLabelSize(32);
   setHistdata0.638967295218239->GetXaxis()->SetTitleSize(35);
   setHistdata0.638967295218239->GetXaxis()->SetTickLength(0.05);
   setHistdata0.638967295218239->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.638967295218239->GetXaxis()->SetTitleFont(43);
   setHistdata0.638967295218239->GetYaxis()->SetNdivisions(506);
   setHistdata0.638967295218239->GetYaxis()->SetLabelFont(43);
   setHistdata0.638967295218239->GetYaxis()->SetLabelOffset(0.0077);
   setHistdata0.638967295218239->GetYaxis()->SetLabelSize(32);
   setHistdata0.638967295218239->GetYaxis()->SetTitleSize(35);
   setHistdata0.638967295218239->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.638967295218239->GetYaxis()->SetTitleFont(43);
   setHistdata0.638967295218239->GetZaxis()->SetLabelFont(43);
   setHistdata0.638967295218239->GetZaxis()->SetLabelOffset(0.0077);
   setHistdata0.638967295218239->GetZaxis()->SetLabelSize(32);
   setHistdata0.638967295218239->GetZaxis()->SetTitleSize(35);
   setHistdata0.638967295218239->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.638967295218239->GetZaxis()->SetTitleFont(43);
   setHistdata0.638967295218239->Draw("PESame");
   
   TH2F *axis0.0408277423257_copy240 = new TH2F("axis0.0408277423257_copy240","",50,0,200,50,0,10137.4);
   axis0.0408277423257_copy240->SetDirectory(0);
   axis0.0408277423257_copy240->SetMarkerStyle(20);
   axis0.0408277423257_copy240->GetXaxis()->SetNdivisions(1005);
   axis0.0408277423257_copy240->GetXaxis()->SetLabelFont(43);
   axis0.0408277423257_copy240->GetXaxis()->SetLabelOffset(0.0077);
   axis0.0408277423257_copy240->GetXaxis()->SetLabelSize(0);
   axis0.0408277423257_copy240->GetXaxis()->SetTitleSize(35);
   axis0.0408277423257_copy240->GetXaxis()->SetTickLength(0.025);
   axis0.0408277423257_copy240->GetXaxis()->SetTitleOffset(1.135);
   axis0.0408277423257_copy240->GetXaxis()->SetTitleFont(43);
   axis0.0408277423257_copy240->GetYaxis()->SetTitle("Events / bin");
   axis0.0408277423257_copy240->GetYaxis()->SetNdivisions(506);
   axis0.0408277423257_copy240->GetYaxis()->SetLabelFont(43);
   axis0.0408277423257_copy240->GetYaxis()->SetLabelOffset(0.0077);
   axis0.0408277423257_copy240->GetYaxis()->SetLabelSize(32);
   axis0.0408277423257_copy240->GetYaxis()->SetTitleSize(35);
   axis0.0408277423257_copy240->GetYaxis()->SetTickLength(0.02631579);
   axis0.0408277423257_copy240->GetYaxis()->SetTitleOffset(1.32);
   axis0.0408277423257_copy240->GetYaxis()->SetTitleFont(43);
   axis0.0408277423257_copy240->GetZaxis()->SetLabelFont(43);
   axis0.0408277423257_copy240->GetZaxis()->SetLabelOffset(0.0077);
   axis0.0408277423257_copy240->GetZaxis()->SetLabelSize(32);
   axis0.0408277423257_copy240->GetZaxis()->SetTitleSize(35);
   axis0.0408277423257_copy240->GetZaxis()->SetTitleOffset(1.32);
   axis0.0408277423257_copy240->GetZaxis()->SetTitleFont(43);
   axis0.0408277423257_copy240->Draw("sameaxis");
   
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
   AText = pt->AddText("");
   pt->Draw();
   
   pt = new TPaveText(0.74,0.94,0.74,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(31);
   pt->SetTextFont(43);
   pt->SetTextSize(34);
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 19.7#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (8TeV)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.745,0.36,0.99,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(34);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("setHistdata0.638967295218","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistDY0.788662445837","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.866877614625","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.860287586869","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.738929558773","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.110727052141","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.133774428111","#it{t}-channel","F");

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
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216_2->Modified();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->Modified();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->cd();
   cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216->SetSelected(cvmuon_2j1t_mtw_qcdnone_antiiso0.94030800216);
}
