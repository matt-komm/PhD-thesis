void plots_w/3j2t/muon_3j2t_cosTheta_lj_qcdbdt()
{
//=========Macro generated from canvas: cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405/
//=========  (Mon Apr 24 03:14:01 2017) by ROOT version6.02/05
   TCanvas *cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405 = new TCanvas("cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetHighLightColor(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->Range(0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetLeftMargin(0.1150442);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetRightMargin(0.227083);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetTopMargin(0.04002582);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetBottomMargin(0.08064517);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetFrameLineWidth(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetTopMargin(0.65);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetBottomMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.7715265933872432 = new TH2F("axisRes0.7715265933872432","",50,-1,1,50,0.6,1.4);
   axisRes0.7715265933872432->SetMarkerStyle(20);
   axisRes0.7715265933872432->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.7715265933872432->GetXaxis()->SetNdivisions(1005);
   axisRes0.7715265933872432->GetXaxis()->SetLabelFont(43);
   axisRes0.7715265933872432->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.7715265933872432->GetXaxis()->SetLabelSize(32);
   axisRes0.7715265933872432->GetXaxis()->SetTitleSize(35);
   axisRes0.7715265933872432->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.7715265933872432->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.7715265933872432->GetXaxis()->SetTitleFont(43);
   axisRes0.7715265933872432->GetYaxis()->SetTitle("Data/MC");
   axisRes0.7715265933872432->GetYaxis()->SetNdivisions(406);
   axisRes0.7715265933872432->GetYaxis()->SetLabelFont(43);
   axisRes0.7715265933872432->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.7715265933872432->GetYaxis()->SetLabelSize(32);
   axisRes0.7715265933872432->GetYaxis()->SetTitleSize(35);
   axisRes0.7715265933872432->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.7715265933872432->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.7715265933872432->GetYaxis()->SetTitleFont(43);
   axisRes0.7715265933872432->GetZaxis()->SetLabelFont(43);
   axisRes0.7715265933872432->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.7715265933872432->GetZaxis()->SetLabelSize(32);
   axisRes0.7715265933872432->GetZaxis()->SetTitleSize(35);
   axisRes0.7715265933872432->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.7715265933872432->GetZaxis()->SetTitleFont(43);
   axisRes0.7715265933872432->Draw("AXIS");
   TBox *box = new TBox(-1,0.9855888,-0.9,1.014411);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9855888,-0.9,1.014411);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9851883,-0.8,1.014812);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9851883,-0.8,1.014812);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9861165,-0.7,1.013883);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9861165,-0.7,1.013883);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9863106,-0.6,1.013689);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9863106,-0.6,1.013689);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9865594,-0.5,1.013441);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9865594,-0.5,1.013441);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9854247,-0.4,1.014575);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9854247,-0.4,1.014575);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9854226,-0.3,1.014577);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9854226,-0.3,1.014577);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9858829,-0.2,1.014117);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9858829,-0.2,1.014117);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9866865,-0.1,1.013314);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9866865,-0.1,1.013314);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856325,0,1.014368);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856325,0,1.014368);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9864626,0.1,1.013537);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9864626,0.1,1.013537);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9850693,0.2,1.014931);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9850693,0.2,1.014931);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9861545,0.3,1.013846);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9861545,0.3,1.013846);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9856674,0.4,1.014333);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9856674,0.4,1.014333);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.9856261,0.5,1.014374);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.9856261,0.5,1.014374);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9856796,0.6,1.01432);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9856796,0.6,1.01432);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9838068,0.7,1.016193);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9838068,0.7,1.016193);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9836183,0.8,1.016382);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9836183,0.8,1.016382);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9812485,0.9,1.018751);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9812485,0.9,1.018751);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9568046,1,1.043195);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9568046,1,1.043195);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1871[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.8556065520770.2669361891562433 = new TH1F("setHistdata0.8556065520770.2669361891562433","",20, xAxis1871);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(1,1.014928);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(2,1.034161);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(3,1.032396);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(4,0.9741933);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(5,1.080983);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(6,1.011974);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(7,1.016744);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(8,1.028242);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(9,0.987431);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(10,0.9296713);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(11,1.059636);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(12,0.9357508);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(13,0.9714933);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(14,0.9879431);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(15,1.010909);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(16,1.028385);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(17,1.008506);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(18,0.9846447);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(19,1.013827);
   setHistdata0.8556065520770.2669361891562433->SetBinContent(20,1.102732);
   setHistdata0.8556065520770.2669361891562433->SetBinError(1,0.03402047);
   setHistdata0.8556065520770.2669361891562433->SetBinError(2,0.03411382);
   setHistdata0.8556065520770.2669361891562433->SetBinError(3,0.03428016);
   setHistdata0.8556065520770.2669361891562433->SetBinError(4,0.03289617);
   setHistdata0.8556065520770.2669361891562433->SetBinError(5,0.03544684);
   setHistdata0.8556065520770.2669361891562433->SetBinError(6,0.03340013);
   setHistdata0.8556065520770.2669361891562433->SetBinError(7,0.03318019);
   setHistdata0.8556065520770.2669361891562433->SetBinError(8,0.03357327);
   setHistdata0.8556065520770.2669361891562433->SetBinError(9,0.03291437);
   setHistdata0.8556065520770.2669361891562433->SetBinError(10,0.03114516);
   setHistdata0.8556065520770.2669361891562433->SetBinError(11,0.03404041);
   setHistdata0.8556065520770.2669361891562433->SetBinError(12,0.03134883);
   setHistdata0.8556065520770.2669361891562433->SetBinError(13,0.03247344);
   setHistdata0.8556065520770.2669361891562433->SetBinError(14,0.0328585);
   setHistdata0.8556065520770.2669361891562433->SetBinError(15,0.03386671);
   setHistdata0.8556065520770.2669361891562433->SetBinError(16,0.03435592);
   setHistdata0.8556065520770.2669361891562433->SetBinError(17,0.03434985);
   setHistdata0.8556065520770.2669361891562433->SetBinError(18,0.03583489);
   setHistdata0.8556065520770.2669361891562433->SetBinError(19,0.04055307);
   setHistdata0.8556065520770.2669361891562433->SetBinError(20,0.07335267);
   setHistdata0.8556065520770.2669361891562433->SetEntries(17043);
   setHistdata0.8556065520770.2669361891562433->SetFillStyle(0);
   setHistdata0.8556065520770.2669361891562433->SetMarkerStyle(20);
   setHistdata0.8556065520770.2669361891562433->SetMarkerSize(1.15);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetNdivisions(1005);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetLabelFont(43);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetLabelSize(32);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetTitleSize(35);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetTickLength(0.05);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.8556065520770.2669361891562433->GetXaxis()->SetTitleFont(43);
   setHistdata0.8556065520770.2669361891562433->GetYaxis()->SetNdivisions(506);
   setHistdata0.8556065520770.2669361891562433->GetYaxis()->SetLabelFont(43);
   setHistdata0.8556065520770.2669361891562433->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.8556065520770.2669361891562433->GetYaxis()->SetLabelSize(32);
   setHistdata0.8556065520770.2669361891562433->GetYaxis()->SetTitleSize(35);
   setHistdata0.8556065520770.2669361891562433->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.8556065520770.2669361891562433->GetYaxis()->SetTitleFont(43);
   setHistdata0.8556065520770.2669361891562433->GetZaxis()->SetLabelFont(43);
   setHistdata0.8556065520770.2669361891562433->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.8556065520770.2669361891562433->GetZaxis()->SetLabelSize(32);
   setHistdata0.8556065520770.2669361891562433->GetZaxis()->SetTitleSize(35);
   setHistdata0.8556065520770.2669361891562433->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.8556065520770.2669361891562433->GetZaxis()->SetTitleFont(43);
   setHistdata0.8556065520770.2669361891562433->Draw("PESame");
   
   TF1 *axisLine0.684235879422188 = new TF1("axisLine0.684235879422","1",-1,1);
   axisLine0.684235879422188->SetFillColor(19);
   axisLine0.684235879422188->SetFillStyle(0);
   axisLine0.684235879422188->SetMarkerStyle(20);
   axisLine0.684235879422188->SetLineWidth(1);
   axisLine0.684235879422188->GetXaxis()->SetNdivisions(1005);
   axisLine0.684235879422188->GetXaxis()->SetLabelFont(43);
   axisLine0.684235879422188->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.684235879422188->GetXaxis()->SetLabelSize(32);
   axisLine0.684235879422188->GetXaxis()->SetTitleSize(35);
   axisLine0.684235879422188->GetXaxis()->SetTickLength(0.05);
   axisLine0.684235879422188->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.684235879422188->GetXaxis()->SetTitleFont(43);
   axisLine0.684235879422188->GetYaxis()->SetNdivisions(506);
   axisLine0.684235879422188->GetYaxis()->SetLabelFont(43);
   axisLine0.684235879422188->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.684235879422188->GetYaxis()->SetLabelSize(32);
   axisLine0.684235879422188->GetYaxis()->SetTitleSize(35);
   axisLine0.684235879422188->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.684235879422188->GetYaxis()->SetTitleFont(43);
   axisLine0.684235879422188->Draw("SameL");
   
   TH2F *axisRes0.771526593387_copy2434 = new TH2F("axisRes0.771526593387_copy2434","",50,-1,1,50,0.6,1.4);
   axisRes0.771526593387_copy2434->SetDirectory(0);
   axisRes0.771526593387_copy2434->SetMarkerStyle(20);
   axisRes0.771526593387_copy2434->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.771526593387_copy2434->GetXaxis()->SetNdivisions(1005);
   axisRes0.771526593387_copy2434->GetXaxis()->SetLabelFont(43);
   axisRes0.771526593387_copy2434->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.771526593387_copy2434->GetXaxis()->SetLabelSize(32);
   axisRes0.771526593387_copy2434->GetXaxis()->SetTitleSize(35);
   axisRes0.771526593387_copy2434->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.771526593387_copy2434->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.771526593387_copy2434->GetXaxis()->SetTitleFont(43);
   axisRes0.771526593387_copy2434->GetYaxis()->SetTitle("Data/MC");
   axisRes0.771526593387_copy2434->GetYaxis()->SetNdivisions(406);
   axisRes0.771526593387_copy2434->GetYaxis()->SetLabelFont(43);
   axisRes0.771526593387_copy2434->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.771526593387_copy2434->GetYaxis()->SetLabelSize(32);
   axisRes0.771526593387_copy2434->GetYaxis()->SetTitleSize(35);
   axisRes0.771526593387_copy2434->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.771526593387_copy2434->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.771526593387_copy2434->GetYaxis()->SetTitleFont(43);
   axisRes0.771526593387_copy2434->GetZaxis()->SetLabelFont(43);
   axisRes0.771526593387_copy2434->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.771526593387_copy2434->GetZaxis()->SetLabelSize(32);
   axisRes0.771526593387_copy2434->GetZaxis()->SetTitleSize(35);
   axisRes0.771526593387_copy2434->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.771526593387_copy2434->GetZaxis()->SetTitleFont(43);
   axisRes0.771526593387_copy2434->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_1->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->cd();
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->Range(-1.466667,-833,1.866667,1547);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetTopMargin(0.08);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetBottomMargin(0.35);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->SetFrameBorderMode(0);
   
   TH2F *axis0.5339288060552435 = new TH2F("axis0.5339288060552435","",50,-1,1,50,0,1356.6);
   axis0.5339288060552435->SetMarkerStyle(20);
   axis0.5339288060552435->GetXaxis()->SetNdivisions(1005);
   axis0.5339288060552435->GetXaxis()->SetLabelFont(43);
   axis0.5339288060552435->GetXaxis()->SetLabelOffset(0.0105);
   axis0.5339288060552435->GetXaxis()->SetLabelSize(0);
   axis0.5339288060552435->GetXaxis()->SetTitleSize(35);
   axis0.5339288060552435->GetXaxis()->SetTickLength(0.025);
   axis0.5339288060552435->GetXaxis()->SetTitleOffset(1.135);
   axis0.5339288060552435->GetXaxis()->SetTitleFont(43);
   axis0.5339288060552435->GetYaxis()->SetTitle("Events / bin");
   axis0.5339288060552435->GetYaxis()->SetNdivisions(506);
   axis0.5339288060552435->GetYaxis()->SetLabelFont(43);
   axis0.5339288060552435->GetYaxis()->SetLabelOffset(0.0087);
   axis0.5339288060552435->GetYaxis()->SetLabelSize(32);
   axis0.5339288060552435->GetYaxis()->SetTitleSize(35);
   axis0.5339288060552435->GetYaxis()->SetTickLength(0.02631579);
   axis0.5339288060552435->GetYaxis()->SetTitleOffset(1.32);
   axis0.5339288060552435->GetYaxis()->SetTitleFont(43);
   axis0.5339288060552435->GetZaxis()->SetLabelFont(43);
   axis0.5339288060552435->GetZaxis()->SetLabelOffset(0.0087);
   axis0.5339288060552435->GetZaxis()->SetLabelSize(32);
   axis0.5339288060552435->GetZaxis()->SetTitleSize(35);
   axis0.5339288060552435->GetZaxis()->SetTitleOffset(1.32);
   axis0.5339288060552435->GetZaxis()->SetTitleFont(43);
   axis0.5339288060552435->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1872[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_187_stack_188 = new TH1F("_stack_187_stack_188","",20, xAxis1872);
   _stack_187_stack_188->SetMinimum(-13.18613);
   _stack_187_stack_188->SetMaximum(1006.323);
   _stack_187_stack_188->SetDirectory(0);
   _stack_187_stack_188->SetStats(0);
   _stack_187_stack_188->SetMarkerStyle(20);
   _stack_187_stack_188->GetXaxis()->SetNdivisions(1005);
   _stack_187_stack_188->GetXaxis()->SetLabelFont(43);
   _stack_187_stack_188->GetXaxis()->SetLabelOffset(0.0105);
   _stack_187_stack_188->GetXaxis()->SetLabelSize(32);
   _stack_187_stack_188->GetXaxis()->SetTitleSize(35);
   _stack_187_stack_188->GetXaxis()->SetTickLength(0.05);
   _stack_187_stack_188->GetXaxis()->SetTitleOffset(1.135);
   _stack_187_stack_188->GetXaxis()->SetTitleFont(43);
   _stack_187_stack_188->GetYaxis()->SetNdivisions(506);
   _stack_187_stack_188->GetYaxis()->SetLabelFont(43);
   _stack_187_stack_188->GetYaxis()->SetLabelOffset(0.0087);
   _stack_187_stack_188->GetYaxis()->SetLabelSize(32);
   _stack_187_stack_188->GetYaxis()->SetTitleSize(35);
   _stack_187_stack_188->GetYaxis()->SetTitleOffset(1.32);
   _stack_187_stack_188->GetYaxis()->SetTitleFont(43);
   _stack_187_stack_188->GetZaxis()->SetLabelFont(43);
   _stack_187_stack_188->GetZaxis()->SetLabelOffset(0.0087);
   _stack_187_stack_188->GetZaxis()->SetLabelSize(32);
   _stack_187_stack_188->GetZaxis()->SetTitleSize(35);
   _stack_187_stack_188->GetZaxis()->SetTitleOffset(1.32);
   _stack_187_stack_188->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_187_stack_188);
   
   Double_t xAxis1873[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttChannel0.04454255378182436 = new TH1F("setHisttChannel0.04454255378182436","",20, xAxis1873);
   setHisttChannel0.04454255378182436->SetBinContent(1,24.13267);
   setHisttChannel0.04454255378182436->SetBinContent(2,26.99692);
   setHisttChannel0.04454255378182436->SetBinContent(3,24.75311);
   setHisttChannel0.04454255378182436->SetBinContent(4,30.22013);
   setHisttChannel0.04454255378182436->SetBinContent(5,31.1625);
   setHisttChannel0.04454255378182436->SetBinContent(6,33.40547);
   setHisttChannel0.04454255378182436->SetBinContent(7,36.66896);
   setHisttChannel0.04454255378182436->SetBinContent(8,40.95938);
   setHisttChannel0.04454255378182436->SetBinContent(9,46.31335);
   setHisttChannel0.04454255378182436->SetBinContent(10,48.02217);
   setHisttChannel0.04454255378182436->SetBinContent(11,57.58482);
   setHisttChannel0.04454255378182436->SetBinContent(12,64.07852);
   setHisttChannel0.04454255378182436->SetBinContent(13,64.04989);
   setHisttChannel0.04454255378182436->SetBinContent(14,69.04692);
   setHisttChannel0.04454255378182436->SetBinContent(15,69.3368);
   setHisttChannel0.04454255378182436->SetBinContent(16,76.63512);
   setHisttChannel0.04454255378182436->SetBinContent(17,79.86387);
   setHisttChannel0.04454255378182436->SetBinContent(18,74.84472);
   setHisttChannel0.04454255378182436->SetBinContent(19,54.75772);
   setHisttChannel0.04454255378182436->SetBinContent(20,15.70786);
   setHisttChannel0.04454255378182436->SetBinError(1,1.633121);
   setHisttChannel0.04454255378182436->SetBinError(2,1.709827);
   setHisttChannel0.04454255378182436->SetBinError(3,1.649407);
   setHisttChannel0.04454255378182436->SetBinError(4,1.812723);
   setHisttChannel0.04454255378182436->SetBinError(5,1.854294);
   setHisttChannel0.04454255378182436->SetBinError(6,1.91055);
   setHisttChannel0.04454255378182436->SetBinError(7,2.013708);
   setHisttChannel0.04454255378182436->SetBinError(8,2.145882);
   setHisttChannel0.04454255378182436->SetBinError(9,2.283283);
   setHisttChannel0.04454255378182436->SetBinError(10,2.280172);
   setHisttChannel0.04454255378182436->SetBinError(11,2.543815);
   setHisttChannel0.04454255378182436->SetBinError(12,2.659593);
   setHisttChannel0.04454255378182436->SetBinError(13,2.623406);
   setHisttChannel0.04454255378182436->SetBinError(14,2.738276);
   setHisttChannel0.04454255378182436->SetBinError(15,2.746206);
   setHisttChannel0.04454255378182436->SetBinError(16,2.902526);
   setHisttChannel0.04454255378182436->SetBinError(17,2.97768);
   setHisttChannel0.04454255378182436->SetBinError(18,2.8867);
   setHisttChannel0.04454255378182436->SetBinError(19,2.483553);
   setHisttChannel0.04454255378182436->SetBinError(20,1.318144);
   setHisttChannel0.04454255378182436->SetEntries(20202);
   setHisttChannel0.04454255378182436->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.04454255378182436->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.04454255378182436->SetLineColor(ci);
   setHisttChannel0.04454255378182436->SetLineWidth(2);
   setHisttChannel0.04454255378182436->SetMarkerStyle(20);
   setHisttChannel0.04454255378182436->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.04454255378182436->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.04454255378182436->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.04454255378182436->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.04454255378182436->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.04454255378182436->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.04454255378182436->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.04454255378182436->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.04454255378182436->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.04454255378182436->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.04454255378182436->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.04454255378182436->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.04454255378182436->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.04454255378182436->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.04454255378182436->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.04454255378182436->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.04454255378182436->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.04454255378182436->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.04454255378182436->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.04454255378182436->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.04454255378182436->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.0445425537818,"HIST F");
   Double_t xAxis1874[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttWs0.3615721440842437 = new TH1F("setHisttWs0.3615721440842437","",20, xAxis1874);
   setHisttWs0.3615721440842437->SetBinContent(1,24.46527);
   setHisttWs0.3615721440842437->SetBinContent(2,26.42134);
   setHisttWs0.3615721440842437->SetBinContent(3,32.19923);
   setHisttWs0.3615721440842437->SetBinContent(4,30.92871);
   setHisttWs0.3615721440842437->SetBinContent(5,26.0955);
   setHisttWs0.3615721440842437->SetBinContent(6,31.06591);
   setHisttWs0.3615721440842437->SetBinContent(7,25.77008);
   setHisttWs0.3615721440842437->SetBinContent(8,22.82729);
   setHisttWs0.3615721440842437->SetBinContent(9,22.84325);
   setHisttWs0.3615721440842437->SetBinContent(10,29.30777);
   setHisttWs0.3615721440842437->SetBinContent(11,24.77908);
   setHisttWs0.3615721440842437->SetBinContent(12,25.6287);
   setHisttWs0.3615721440842437->SetBinContent(13,23.59375);
   setHisttWs0.3615721440842437->SetBinContent(14,26.54281);
   setHisttWs0.3615721440842437->SetBinContent(15,21.07952);
   setHisttWs0.3615721440842437->SetBinContent(16,28.05493);
   setHisttWs0.3615721440842437->SetBinContent(17,23.35171);
   setHisttWs0.3615721440842437->SetBinContent(18,15.62121);
   setHisttWs0.3615721440842437->SetBinContent(19,16.2907);
   setHisttWs0.3615721440842437->SetBinContent(20,5.741208);
   setHisttWs0.3615721440842437->SetBinError(1,3.291949);
   setHisttWs0.3615721440842437->SetBinError(2,3.407178);
   setHisttWs0.3615721440842437->SetBinError(3,3.739637);
   setHisttWs0.3615721440842437->SetBinError(4,3.732846);
   setHisttWs0.3615721440842437->SetBinError(5,3.293207);
   setHisttWs0.3615721440842437->SetBinError(6,3.61797);
   setHisttWs0.3615721440842437->SetBinError(7,3.409854);
   setHisttWs0.3615721440842437->SetBinError(8,3.298355);
   setHisttWs0.3615721440842437->SetBinError(9,3.099837);
   setHisttWs0.3615721440842437->SetBinError(10,3.566905);
   setHisttWs0.3615721440842437->SetBinError(11,3.183268);
   setHisttWs0.3615721440842437->SetBinError(12,3.280967);
   setHisttWs0.3615721440842437->SetBinError(13,3.183005);
   setHisttWs0.3615721440842437->SetBinError(14,3.223566);
   setHisttWs0.3615721440842437->SetBinError(15,3.047721);
   setHisttWs0.3615721440842437->SetBinError(16,3.524513);
   setHisttWs0.3615721440842437->SetBinError(17,3.165269);
   setHisttWs0.3615721440842437->SetBinError(18,2.639467);
   setHisttWs0.3615721440842437->SetBinError(19,2.649994);
   setHisttWs0.3615721440842437->SetBinError(20,1.555617);
   setHisttWs0.3615721440842437->SetEntries(3351);
   setHisttWs0.3615721440842437->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.3615721440842437->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.3615721440842437->SetLineColor(ci);
   setHisttWs0.3615721440842437->SetLineWidth(2);
   setHisttWs0.3615721440842437->SetMarkerStyle(20);
   setHisttWs0.3615721440842437->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.3615721440842437->GetXaxis()->SetLabelFont(43);
   setHisttWs0.3615721440842437->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.3615721440842437->GetXaxis()->SetLabelSize(32);
   setHisttWs0.3615721440842437->GetXaxis()->SetTitleSize(35);
   setHisttWs0.3615721440842437->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.3615721440842437->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.3615721440842437->GetXaxis()->SetTitleFont(43);
   setHisttWs0.3615721440842437->GetYaxis()->SetNdivisions(506);
   setHisttWs0.3615721440842437->GetYaxis()->SetLabelFont(43);
   setHisttWs0.3615721440842437->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.3615721440842437->GetYaxis()->SetLabelSize(32);
   setHisttWs0.3615721440842437->GetYaxis()->SetTitleSize(35);
   setHisttWs0.3615721440842437->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.3615721440842437->GetYaxis()->SetTitleFont(43);
   setHisttWs0.3615721440842437->GetZaxis()->SetLabelFont(43);
   setHisttWs0.3615721440842437->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.3615721440842437->GetZaxis()->SetLabelSize(32);
   setHisttWs0.3615721440842437->GetZaxis()->SetTitleSize(35);
   setHisttWs0.3615721440842437->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.3615721440842437->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.361572144084,"HIST F");
   Double_t xAxis1875[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistTTJets0.8483078406162438 = new TH1F("setHistTTJets0.8483078406162438","",20, xAxis1875);
   setHistTTJets0.8483078406162438->SetBinContent(1,794.2532);
   setHistTTJets0.8483078406162438->SetBinContent(2,798.0314);
   setHistTTJets0.8483078406162438->SetBinContent(3,803.5003);
   setHistTTJets0.8483078406162438->SetBinContent(4,809.3513);
   setHistTTJets0.8483078406162438->SetBinContent(5,791.0678);
   setHistTTJets0.8483078406162438->SetBinContent(6,811.928);
   setHistTTJets0.8483078406162438->SetBinContent(7,817.4304);
   setHistTTJets0.8483078406162438->SetBinContent(8,816.0789);
   setHistTTJets0.8483078406162438->SetBinContent(9,822.5624);
   setHistTTJets0.8483078406162438->SetBinContent(10,830.6669);
   setHistTTJets0.8483078406162438->SetBinContent(11,812.6782);
   setHistTTJets0.8483078406162438->SetBinContent(12,819.5492);
   setHistTTJets0.8483078406162438->SetBinContent(13,811.7653);
   setHistTTJets0.8483078406162438->SetBinContent(14,794.5084);
   setHistTTJets0.8483078406162438->SetBinContent(15,763.5802);
   setHistTTJets0.8483078406162438->SetBinContent(16,741.9866);
   setHistTTJets0.8483078406162438->SetBinContent(17,693.0295);
   setHistTTJets0.8483078406162438->SetBinContent(18,645.1193);
   setHistTTJets0.8483078406162438->SetBinContent(19,515.6872);
   setHistTTJets0.8483078406162438->SetBinContent(20,161.7409);
   setHistTTJets0.8483078406162438->SetBinError(1,8.236683);
   setHistTTJets0.8483078406162438->SetBinError(2,8.269337);
   setHistTTJets0.8483078406162438->SetBinError(3,8.30712);
   setHistTTJets0.8483078406162438->SetBinError(4,8.394065);
   setHistTTJets0.8483078406162438->SetBinError(5,8.262668);
   setHistTTJets0.8483078406162438->SetBinError(6,8.403538);
   setHistTTJets0.8483078406162438->SetBinError(7,8.454887);
   setHistTTJets0.8483078406162438->SetBinError(8,8.46942);
   setHistTTJets0.8483078406162438->SetBinError(9,8.511433);
   setHistTTJets0.8483078406162438->SetBinError(10,8.527035);
   setHistTTJets0.8483078406162438->SetBinError(11,8.485147);
   setHistTTJets0.8483078406162438->SetBinError(12,8.507601);
   setHistTTJets0.8483078406162438->SetBinError(13,8.484673);
   setHistTTJets0.8483078406162438->SetBinError(14,8.391127);
   setHistTTJets0.8483078406162438->SetBinError(15,8.236729);
   setHistTTJets0.8483078406162438->SetBinError(16,8.159504);
   setHistTTJets0.8483078406162438->SetBinError(17,7.867244);
   setHistTTJets0.8483078406162438->SetBinError(18,7.649202);
   setHistTTJets0.8483078406162438->SetBinError(19,6.880305);
   setHistTTJets0.8483078406162438->SetBinError(20,3.831469);
   setHistTTJets0.8483078406162438->SetEntries(249437);
   setHistTTJets0.8483078406162438->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.8483078406162438->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.8483078406162438->SetLineColor(ci);
   setHistTTJets0.8483078406162438->SetLineWidth(2);
   setHistTTJets0.8483078406162438->SetMarkerStyle(20);
   setHistTTJets0.8483078406162438->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.8483078406162438->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.8483078406162438->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.8483078406162438->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.8483078406162438->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.8483078406162438->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.8483078406162438->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.8483078406162438->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.8483078406162438->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.8483078406162438->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.8483078406162438->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.8483078406162438->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.8483078406162438->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.8483078406162438->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.8483078406162438->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.8483078406162438->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.8483078406162438->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.8483078406162438->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.8483078406162438->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.8483078406162438->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.8483078406162438->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.848307840616,"HIST F");
   Double_t xAxis1876[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGHF0.2175738823772439 = new TH1F("setHistWJetsMGHF0.2175738823772439","",20, xAxis1876);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(1,29.18897);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(2,25.86177);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(3,17.10824);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(4,18.14218);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(5,15.49824);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(6,18.83109);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(7,26.51953);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(8,23.18751);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(9,24.36377);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(10,26.70748);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(11,17.5056);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(12,25.28724);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(13,18.27357);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(14,18.41142);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(15,20.66231);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(16,18.99269);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(17,27.69541);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(18,23.82443);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(19,21.58904);
   setHistWJetsMGHF0.2175738823772439->SetBinContent(20,10.82645);
   setHistWJetsMGHF0.2175738823772439->SetBinError(1,5.276027);
   setHistWJetsMGHF0.2175738823772439->SetBinError(2,5.079058);
   setHistWJetsMGHF0.2175738823772439->SetBinError(3,3.413614);
   setHistWJetsMGHF0.2175738823772439->SetBinError(4,3.846759);
   setHistWJetsMGHF0.2175738823772439->SetBinError(5,3.258069);
   setHistWJetsMGHF0.2175738823772439->SetBinError(6,4.034222);
   setHistWJetsMGHF0.2175738823772439->SetBinError(7,4.658146);
   setHistWJetsMGHF0.2175738823772439->SetBinError(8,4.614474);
   setHistWJetsMGHF0.2175738823772439->SetBinError(9,4.614888);
   setHistWJetsMGHF0.2175738823772439->SetBinError(10,4.580047);
   setHistWJetsMGHF0.2175738823772439->SetBinError(11,3.665352);
   setHistWJetsMGHF0.2175738823772439->SetBinError(12,4.081258);
   setHistWJetsMGHF0.2175738823772439->SetBinError(13,3.927602);
   setHistWJetsMGHF0.2175738823772439->SetBinError(14,3.40714);
   setHistWJetsMGHF0.2175738823772439->SetBinError(15,3.721536);
   setHistWJetsMGHF0.2175738823772439->SetBinError(16,3.332546);
   setHistWJetsMGHF0.2175738823772439->SetBinError(17,4.041855);
   setHistWJetsMGHF0.2175738823772439->SetBinError(18,3.746003);
   setHistWJetsMGHF0.2175738823772439->SetBinError(19,3.399189);
   setHistWJetsMGHF0.2175738823772439->SetBinError(20,2.509768);
   setHistWJetsMGHF0.2175738823772439->SetEntries(798);
   setHistWJetsMGHF0.2175738823772439->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.2175738823772439->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.2175738823772439->SetLineColor(ci);
   setHistWJetsMGHF0.2175738823772439->SetLineWidth(2);
   setHistWJetsMGHF0.2175738823772439->SetMarkerStyle(20);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.2175738823772439->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.2175738823772439->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.2175738823772439->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.2175738823772439->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.2175738823772439->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.2175738823772439->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.2175738823772439->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.2175738823772439->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.2175738823772439->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.2175738823772439->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.2175738823772439->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.2175738823772439->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.2175738823772439->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.2175738823772439->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.217573882377,"HIST F");
   Double_t xAxis1877[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGLF0.1368335484132440 = new TH1F("setHistWJetsMGLF0.1368335484132440","",20, xAxis1877);
   setHistWJetsMGLF0.1368335484132440->SetBinContent(2,0.1663905);
   setHistWJetsMGLF0.1368335484132440->SetBinContent(8,1.388154);
   setHistWJetsMGLF0.1368335484132440->SetBinContent(12,0.1675788);
   setHistWJetsMGLF0.1368335484132440->SetBinContent(18,0.9516768);
   setHistWJetsMGLF0.1368335484132440->SetBinError(2,0.1663905);
   setHistWJetsMGLF0.1368335484132440->SetBinError(8,1.388154);
   setHistWJetsMGLF0.1368335484132440->SetBinError(12,0.1675788);
   setHistWJetsMGLF0.1368335484132440->SetBinError(18,0.9516768);
   setHistWJetsMGLF0.1368335484132440->SetEntries(4);
   setHistWJetsMGLF0.1368335484132440->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.1368335484132440->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.1368335484132440->SetLineColor(ci);
   setHistWJetsMGLF0.1368335484132440->SetLineWidth(2);
   setHistWJetsMGLF0.1368335484132440->SetMarkerStyle(20);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.1368335484132440->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.1368335484132440->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.1368335484132440->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.1368335484132440->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.1368335484132440->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.1368335484132440->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.1368335484132440->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.1368335484132440->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.1368335484132440->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.1368335484132440->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.1368335484132440->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.1368335484132440->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.1368335484132440->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.1368335484132440->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.136833548413,"HIST F");
   Double_t xAxis1878[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistDY0.2559670654292441 = new TH1F("setHistDY0.2559670654292441","",20, xAxis1878);
   setHistDY0.2559670654292441->SetBinContent(1,2.923422);
   setHistDY0.2559670654292441->SetBinContent(2,8.339119);
   setHistDY0.2559670654292441->SetBinContent(3,8.469999);
   setHistDY0.2559670654292441->SetBinContent(4,1.960731);
   setHistDY0.2559670654292441->SetBinContent(5,4.059233);
   setHistDY0.2559670654292441->SetBinContent(6,4.996093);
   setHistDY0.2559670654292441->SetBinContent(7,5.41131);
   setHistDY0.2559670654292441->SetBinContent(8,2.670842);
   setHistDY0.2559670654292441->SetBinContent(9,2.364007);
   setHistDY0.2559670654292441->SetBinContent(10,2.861963);
   setHistDY0.2559670654292441->SetBinContent(12,7.224475);
   setHistDY0.2559670654292441->SetBinContent(13,5.705039);
   setHistDY0.2559670654292441->SetBinContent(14,5.564243);
   setHistDY0.2559670654292441->SetBinContent(16,2.906337);
   setHistDY0.2559670654292441->SetBinContent(17,5.682427);
   setHistDY0.2559670654292441->SetBinContent(18,5.951832);
   setHistDY0.2559670654292441->SetBinContent(19,2.90574);
   setHistDY0.2559670654292441->SetBinError(1,2.923422);
   setHistDY0.2559670654292441->SetBinError(2,4.82208);
   setHistDY0.2559670654292441->SetBinError(3,4.893804);
   setHistDY0.2559670654292441->SetBinError(4,1.847624);
   setHistDY0.2559670654292441->SetBinError(5,2.972177);
   setHistDY0.2559670654292441->SetBinError(6,4.996093);
   setHistDY0.2559670654292441->SetBinError(7,3.828066);
   setHistDY0.2559670654292441->SetBinError(8,2.670842);
   setHistDY0.2559670654292441->SetBinError(9,2.364007);
   setHistDY0.2559670654292441->SetBinError(10,2.861963);
   setHistDY0.2559670654292441->SetBinError(12,5.022358);
   setHistDY0.2559670654292441->SetBinError(13,4.034375);
   setHistDY0.2559670654292441->SetBinError(14,3.942067);
   setHistDY0.2559670654292441->SetBinError(16,2.906337);
   setHistDY0.2559670654292441->SetBinError(17,4.032728);
   setHistDY0.2559670654292441->SetBinError(18,4.214659);
   setHistDY0.2559670654292441->SetBinError(19,2.90574);
   setHistDY0.2559670654292441->SetEntries(30);
   setHistDY0.2559670654292441->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.2559670654292441->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.2559670654292441->SetLineColor(ci);
   setHistDY0.2559670654292441->SetLineWidth(2);
   setHistDY0.2559670654292441->SetMarkerStyle(20);
   setHistDY0.2559670654292441->GetXaxis()->SetNdivisions(1005);
   setHistDY0.2559670654292441->GetXaxis()->SetLabelFont(43);
   setHistDY0.2559670654292441->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.2559670654292441->GetXaxis()->SetLabelSize(32);
   setHistDY0.2559670654292441->GetXaxis()->SetTitleSize(35);
   setHistDY0.2559670654292441->GetXaxis()->SetTickLength(0.05);
   setHistDY0.2559670654292441->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.2559670654292441->GetXaxis()->SetTitleFont(43);
   setHistDY0.2559670654292441->GetYaxis()->SetNdivisions(506);
   setHistDY0.2559670654292441->GetYaxis()->SetLabelFont(43);
   setHistDY0.2559670654292441->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.2559670654292441->GetYaxis()->SetLabelSize(32);
   setHistDY0.2559670654292441->GetYaxis()->SetTitleSize(35);
   setHistDY0.2559670654292441->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.2559670654292441->GetYaxis()->SetTitleFont(43);
   setHistDY0.2559670654292441->GetZaxis()->SetLabelFont(43);
   setHistDY0.2559670654292441->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.2559670654292441->GetZaxis()->SetLabelSize(32);
   setHistDY0.2559670654292441->GetZaxis()->SetTitleSize(35);
   setHistDY0.2559670654292441->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.2559670654292441->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.255967065429,"HIST F");
   Double_t xAxis1879[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistQCD_DD0.5330836757182442 = new TH1F("setHistQCD_DD0.5330836757182442","",20, xAxis1879);
   setHistQCD_DD0.5330836757182442->SetBinContent(1,1.945837);
   setHistQCD_DD0.5330836757182442->SetBinContent(2,2.826244);
   setHistQCD_DD0.5330836757182442->SetBinContent(3,-7.492262);
   setHistQCD_DD0.5330836757182442->SetBinContent(4,9.629053);
   setHistQCD_DD0.5330836757182442->SetBinContent(5,-7.55533);
   setHistQCD_DD0.5330836757182442->SetBinContent(6,6.910938);
   setHistQCD_DD0.5330836757182442->SetBinContent(7,11.73596);
   setHistQCD_DD0.5330836757182442->SetBinContent(8,5.124996);
   setHistQCD_DD0.5330836757182442->SetBinContent(9,-6.990788);
   setHistQCD_DD0.5330836757182442->SetBinContent(10,20.83699);
   setHistQCD_DD0.5330836757182442->SetBinContent(11,1.917147);
   setHistQCD_DD0.5330836757182442->SetBinContent(12,10.24077);
   setHistQCD_DD0.5330836757182442->SetBinContent(13,-2.125333);
   setHistQCD_DD0.5330836757182442->SetBinContent(14,0.9586017);
   setHistQCD_DD0.5330836757182442->SetBinContent(15,6.726412);
   setHistQCD_DD0.5330836757182442->SetBinContent(16,2.693745);
   setHistQCD_DD0.5330836757182442->SetBinContent(17,25.1066);
   setHistQCD_DD0.5330836757182442->SetBinContent(18,0.4608882);
   setHistQCD_DD0.5330836757182442->SetBinContent(19,5.245767);
   setHistQCD_DD0.5330836757182442->SetBinContent(20,10.92903);
   setHistQCD_DD0.5330836757182442->SetBinError(1,6.478632);
   setHistQCD_DD0.5330836757182442->SetBinError(2,6.423019);
   setHistQCD_DD0.5330836757182442->SetBinError(3,5.239752);
   setHistQCD_DD0.5330836757182442->SetBinError(4,6.78089);
   setHistQCD_DD0.5330836757182442->SetBinError(5,5.630805);
   setHistQCD_DD0.5330836757182442->SetBinError(6,6.798637);
   setHistQCD_DD0.5330836757182442->SetBinError(7,7.597697);
   setHistQCD_DD0.5330836757182442->SetBinError(8,6.948151);
   setHistQCD_DD0.5330836757182442->SetBinError(9,5.75312);
   setHistQCD_DD0.5330836757182442->SetBinError(10,8.355231);
   setHistQCD_DD0.5330836757182442->SetBinError(11,7.156417);
   setHistQCD_DD0.5330836757182442->SetBinError(12,8.365768);
   setHistQCD_DD0.5330836757182442->SetBinError(13,6.480194);
   setHistQCD_DD0.5330836757182442->SetBinError(14,7.519862);
   setHistQCD_DD0.5330836757182442->SetBinError(15,7.872688);
   setHistQCD_DD0.5330836757182442->SetBinError(16,6.978295);
   setHistQCD_DD0.5330836757182442->SetBinError(17,8.842433);
   setHistQCD_DD0.5330836757182442->SetBinError(18,7.160175);
   setHistQCD_DD0.5330836757182442->SetBinError(19,7.287157);
   setHistQCD_DD0.5330836757182442->SetBinError(20,7.296141);
   setHistQCD_DD0.5330836757182442->SetEntries(19197);
   setHistQCD_DD0.5330836757182442->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.5330836757182442->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.5330836757182442->SetLineColor(ci);
   setHistQCD_DD0.5330836757182442->SetLineWidth(2);
   setHistQCD_DD0.5330836757182442->SetMarkerStyle(20);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.5330836757182442->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.5330836757182442->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.5330836757182442->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.5330836757182442->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.5330836757182442->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.5330836757182442->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.5330836757182442->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.5330836757182442->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.5330836757182442->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.5330836757182442->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.5330836757182442->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.5330836757182442->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.5330836757182442->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.5330836757182442->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.533083675718,"HIST F");
   ->Draw("same");
   Double_t xAxis1880[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.8556065520772443 = new TH1F("setHistdata0.8556065520772443","",20, xAxis1880);
   setHistdata0.8556065520772443->SetBinContent(1,890);
   setHistdata0.8556065520772443->SetBinContent(2,919);
   setHistdata0.8556065520772443->SetBinContent(3,907);
   setHistdata0.8556065520772443->SetBinContent(4,877);
   setHistdata0.8556065520772443->SetBinContent(5,930);
   setHistdata0.8556065520772443->SetBinContent(6,918);
   setHistdata0.8556065520772443->SetBinContent(7,939);
   setHistdata0.8556065520772443->SetBinContent(8,938);
   setHistdata0.8556065520772443->SetBinContent(9,900);
   setHistdata0.8556065520772443->SetBinContent(10,891);
   setHistdata0.8556065520772443->SetBinContent(11,969);
   setHistdata0.8556065520772443->SetBinContent(12,891);
   setHistdata0.8556065520772443->SetBinContent(13,895);
   setHistdata0.8556065520772443->SetBinContent(14,904);
   setHistdata0.8556065520772443->SetBinContent(15,891);
   setHistdata0.8556065520772443->SetBinContent(16,896);
   setHistdata0.8556065520772443->SetBinContent(17,862);
   setHistdata0.8556065520772443->SetBinContent(18,755);
   setHistdata0.8556065520772443->SetBinContent(19,625);
   setHistdata0.8556065520772443->SetBinContent(20,226);
   setHistdata0.8556065520772443->SetBinError(1,29.83287);
   setHistdata0.8556065520772443->SetBinError(2,30.31501);
   setHistdata0.8556065520772443->SetBinError(3,30.11644);
   setHistdata0.8556065520772443->SetBinError(4,29.61419);
   setHistdata0.8556065520772443->SetBinError(5,30.4959);
   setHistdata0.8556065520772443->SetBinError(6,30.29851);
   setHistdata0.8556065520772443->SetBinError(7,30.64311);
   setHistdata0.8556065520772443->SetBinError(8,30.62679);
   setHistdata0.8556065520772443->SetBinError(9,30);
   setHistdata0.8556065520772443->SetBinError(10,29.84962);
   setHistdata0.8556065520772443->SetBinError(11,31.12876);
   setHistdata0.8556065520772443->SetBinError(12,29.84962);
   setHistdata0.8556065520772443->SetBinError(13,29.91655);
   setHistdata0.8556065520772443->SetBinError(14,30.06659);
   setHistdata0.8556065520772443->SetBinError(15,29.84962);
   setHistdata0.8556065520772443->SetBinError(16,29.93326);
   setHistdata0.8556065520772443->SetBinError(17,29.35984);
   setHistdata0.8556065520772443->SetBinError(18,27.47726);
   setHistdata0.8556065520772443->SetBinError(19,25);
   setHistdata0.8556065520772443->SetBinError(20,15.0333);
   setHistdata0.8556065520772443->SetEntries(17023);
   setHistdata0.8556065520772443->SetFillStyle(0);
   setHistdata0.8556065520772443->SetMarkerStyle(20);
   setHistdata0.8556065520772443->SetMarkerSize(1.15);
   setHistdata0.8556065520772443->GetXaxis()->SetNdivisions(1005);
   setHistdata0.8556065520772443->GetXaxis()->SetLabelFont(43);
   setHistdata0.8556065520772443->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.8556065520772443->GetXaxis()->SetLabelSize(32);
   setHistdata0.8556065520772443->GetXaxis()->SetTitleSize(35);
   setHistdata0.8556065520772443->GetXaxis()->SetTickLength(0.05);
   setHistdata0.8556065520772443->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.8556065520772443->GetXaxis()->SetTitleFont(43);
   setHistdata0.8556065520772443->GetYaxis()->SetNdivisions(506);
   setHistdata0.8556065520772443->GetYaxis()->SetLabelFont(43);
   setHistdata0.8556065520772443->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.8556065520772443->GetYaxis()->SetLabelSize(32);
   setHistdata0.8556065520772443->GetYaxis()->SetTitleSize(35);
   setHistdata0.8556065520772443->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.8556065520772443->GetYaxis()->SetTitleFont(43);
   setHistdata0.8556065520772443->GetZaxis()->SetLabelFont(43);
   setHistdata0.8556065520772443->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.8556065520772443->GetZaxis()->SetLabelSize(32);
   setHistdata0.8556065520772443->GetZaxis()->SetTitleSize(35);
   setHistdata0.8556065520772443->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.8556065520772443->GetZaxis()->SetTitleFont(43);
   setHistdata0.8556065520772443->Draw("PESame");
   
   TH2F *axis0.533928806055_copy2444 = new TH2F("axis0.533928806055_copy2444","",50,-1,1,50,0,1356.6);
   axis0.533928806055_copy2444->SetDirectory(0);
   axis0.533928806055_copy2444->SetMarkerStyle(20);
   axis0.533928806055_copy2444->GetXaxis()->SetNdivisions(1005);
   axis0.533928806055_copy2444->GetXaxis()->SetLabelFont(43);
   axis0.533928806055_copy2444->GetXaxis()->SetLabelOffset(0.0105);
   axis0.533928806055_copy2444->GetXaxis()->SetLabelSize(0);
   axis0.533928806055_copy2444->GetXaxis()->SetTitleSize(35);
   axis0.533928806055_copy2444->GetXaxis()->SetTickLength(0.025);
   axis0.533928806055_copy2444->GetXaxis()->SetTitleOffset(1.135);
   axis0.533928806055_copy2444->GetXaxis()->SetTitleFont(43);
   axis0.533928806055_copy2444->GetYaxis()->SetTitle("Events / bin");
   axis0.533928806055_copy2444->GetYaxis()->SetNdivisions(506);
   axis0.533928806055_copy2444->GetYaxis()->SetLabelFont(43);
   axis0.533928806055_copy2444->GetYaxis()->SetLabelOffset(0.0087);
   axis0.533928806055_copy2444->GetYaxis()->SetLabelSize(32);
   axis0.533928806055_copy2444->GetYaxis()->SetTitleSize(35);
   axis0.533928806055_copy2444->GetYaxis()->SetTickLength(0.02631579);
   axis0.533928806055_copy2444->GetYaxis()->SetTitleOffset(1.32);
   axis0.533928806055_copy2444->GetYaxis()->SetTitleFont(43);
   axis0.533928806055_copy2444->GetZaxis()->SetLabelFont(43);
   axis0.533928806055_copy2444->GetZaxis()->SetLabelOffset(0.0087);
   axis0.533928806055_copy2444->GetZaxis()->SetLabelSize(32);
   axis0.533928806055_copy2444->GetZaxis()->SetTitleSize(35);
   axis0.533928806055_copy2444->GetZaxis()->SetTitleOffset(1.32);
   axis0.533928806055_copy2444->GetZaxis()->SetTitleFont(43);
   axis0.533928806055_copy2444->Draw("sameaxis");
   
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.855606552077","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.533083675718","Multijet","F");

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
   entry=leg->AddEntry("setHistDY0.255967065429","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.136833548413","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.217573882377","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.848307840616","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.361572144084","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.0445425537818","#it{t}-channel","F");

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
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405_2->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405->SetSelected(cvmuon_3j2t_cosTheta_lj_qcdbdt0.629416079405);
}
