void plots_w2/3j2t/muon_3j2t_cosTheta_lj_qcdbdt()
{
//=========Macro generated from canvas: cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483/
//=========  (Mon Aug  7 16:37:00 2017) by ROOT version6.02/05
   TCanvas *cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483 = new TCanvas("cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetHighLightColor(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->Range(0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetLeftMargin(0.1150442);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetRightMargin(0.227083);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetTopMargin(0.04002582);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetBottomMargin(0.08064517);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetFrameLineWidth(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetTopMargin(0.65);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetBottomMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.49440525136840 = new TH2F("axisRes0.49440525136840","",50,-1,1,50,0.6,1.4);
   axisRes0.49440525136840->SetMarkerStyle(20);
   axisRes0.49440525136840->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.49440525136840->GetXaxis()->SetNdivisions(1005);
   axisRes0.49440525136840->GetXaxis()->SetLabelFont(43);
   axisRes0.49440525136840->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.49440525136840->GetXaxis()->SetLabelSize(32);
   axisRes0.49440525136840->GetXaxis()->SetTitleSize(35);
   axisRes0.49440525136840->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.49440525136840->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.49440525136840->GetXaxis()->SetTitleFont(43);
   axisRes0.49440525136840->GetYaxis()->SetTitle("Data/MC");
   axisRes0.49440525136840->GetYaxis()->SetNdivisions(406);
   axisRes0.49440525136840->GetYaxis()->SetLabelFont(43);
   axisRes0.49440525136840->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.49440525136840->GetYaxis()->SetLabelSize(32);
   axisRes0.49440525136840->GetYaxis()->SetTitleSize(35);
   axisRes0.49440525136840->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.49440525136840->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.49440525136840->GetYaxis()->SetTitleFont(43);
   axisRes0.49440525136840->GetZaxis()->SetLabelFont(43);
   axisRes0.49440525136840->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.49440525136840->GetZaxis()->SetLabelSize(32);
   axisRes0.49440525136840->GetZaxis()->SetTitleSize(35);
   axisRes0.49440525136840->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.49440525136840->GetZaxis()->SetTitleFont(43);
   axisRes0.49440525136840->Draw("AXIS");
   TBox *box = new TBox(-1,0.985606,-0.9,1.014394);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.985606,-0.9,1.014394);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9852033,-0.8,1.014797);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9852033,-0.8,1.014797);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9861341,-0.7,1.013866);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9861341,-0.7,1.013866);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9863246,-0.6,1.013675);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9863246,-0.6,1.013675);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9865755,-0.5,1.013424);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9865755,-0.5,1.013424);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9854437,-0.4,1.014556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9854437,-0.4,1.014556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9854409,-0.3,1.014559);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9854409,-0.3,1.014559);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9858926,-0.2,1.014107);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9858926,-0.2,1.014107);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9867029,-0.1,1.013297);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9867029,-0.1,1.013297);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856521,0,1.014348);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856521,0,1.014348);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9864797,0.1,1.01352);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9864797,0.1,1.01352);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9850912,0.2,1.014909);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9850912,0.2,1.014909);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9861725,0.3,1.013828);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9861725,0.3,1.013828);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9856893,0.4,1.014311);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9856893,0.4,1.014311);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.9856471,0.5,1.014353);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.9856471,0.5,1.014353);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9857004,0.6,1.0143);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9857004,0.6,1.0143);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9838187,0.7,1.016181);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9838187,0.7,1.016181);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9836484,0.8,1.016352);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9836484,0.8,1.016352);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9812857,0.9,1.018714);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9812857,0.9,1.018714);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9568648,1,1.043135);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9568648,1,1.043135);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis31[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.3904992921780.065738700101941 = new TH1F("setHistdata0.3904992921780.065738700101941","",20, xAxis31);
   setHistdata0.3904992921780.065738700101941->SetBinContent(1,1.013232);
   setHistdata0.3904992921780.065738700101941->SetBinContent(2,1.032841);
   setHistdata0.3904992921780.065738700101941->SetBinContent(3,1.030489);
   setHistdata0.3904992921780.065738700101941->SetBinContent(4,0.9728432);
   setHistdata0.3904992921780.065738700101941->SetBinContent(5,1.07916);
   setHistdata0.3904992921780.065738700101941->SetBinContent(6,1.010272);
   setHistdata0.3904992921780.065738700101941->SetBinContent(7,1.015102);
   setHistdata0.3904992921780.065738700101941->SetBinContent(8,1.027261);
   setHistdata0.3904992921780.065738700101941->SetBinContent(9,0.9857901);
   setHistdata0.3904992921780.065738700101941->SetBinContent(10,0.9280322);
   setHistdata0.3904992921780.065738700101941->SetBinContent(11,1.057798);
   setHistdata0.3904992921780.065738700101941->SetBinContent(12,0.9340028);
   setHistdata0.3904992921780.065738700101941->SetBinContent(13,0.969744);
   setHistdata0.3904992921780.065738700101941->SetBinContent(14,0.9858874);
   setHistdata0.3904992921780.065738700101941->SetBinContent(15,1.008874);
   setHistdata0.3904992921780.065738700101941->SetBinContent(16,1.026358);
   setHistdata0.3904992921780.065738700101941->SetBinContent(17,1.00757);
   setHistdata0.3904992921780.065738700101941->SetBinContent(18,0.9822936);
   setHistdata0.3904992921780.065738700101941->SetBinContent(19,1.011233);
   setHistdata0.3904992921780.065738700101941->SetBinContent(20,1.100987);
   setHistdata0.3904992921780.065738700101941->SetBinError(1,0.03396363);
   setHistdata0.3904992921780.065738700101941->SetBinError(2,0.0340703);
   setHistdata0.3904992921780.065738700101941->SetBinError(3,0.03421682);
   setHistdata0.3904992921780.065738700101941->SetBinError(4,0.03285058);
   setHistdata0.3904992921780.065738700101941->SetBinError(5,0.03538704);
   setHistdata0.3904992921780.065738700101941->SetBinError(6,0.03334394);
   setHistdata0.3904992921780.065738700101941->SetBinError(7,0.03312661);
   setHistdata0.3904992921780.065738700101941->SetBinError(8,0.03354126);
   setHistdata0.3904992921780.065738700101941->SetBinError(9,0.03285967);
   setHistdata0.3904992921780.065738700101941->SetBinError(10,0.03109025);
   setHistdata0.3904992921780.065738700101941->SetBinError(11,0.03398136);
   setHistdata0.3904992921780.065738700101941->SetBinError(12,0.03129027);
   setHistdata0.3904992921780.065738700101941->SetBinError(13,0.03241497);
   setHistdata0.3904992921780.065738700101941->SetBinError(14,0.03279013);
   setHistdata0.3904992921780.065738700101941->SetBinError(15,0.03379854);
   setHistdata0.3904992921780.065738700101941->SetBinError(16,0.03428821);
   setHistdata0.3904992921780.065738700101941->SetBinError(17,0.03431799);
   setHistdata0.3904992921780.065738700101941->SetBinError(18,0.03574932);
   setHistdata0.3904992921780.065738700101941->SetBinError(19,0.04044931);
   setHistdata0.3904992921780.065738700101941->SetBinError(20,0.07323657);
   setHistdata0.3904992921780.065738700101941->SetEntries(17043);
   setHistdata0.3904992921780.065738700101941->SetFillStyle(0);
   setHistdata0.3904992921780.065738700101941->SetMarkerStyle(20);
   setHistdata0.3904992921780.065738700101941->SetMarkerSize(1.15);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetNdivisions(1005);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetLabelFont(43);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetLabelSize(32);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetTitleSize(35);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetTickLength(0.05);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.3904992921780.065738700101941->GetXaxis()->SetTitleFont(43);
   setHistdata0.3904992921780.065738700101941->GetYaxis()->SetNdivisions(506);
   setHistdata0.3904992921780.065738700101941->GetYaxis()->SetLabelFont(43);
   setHistdata0.3904992921780.065738700101941->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.3904992921780.065738700101941->GetYaxis()->SetLabelSize(32);
   setHistdata0.3904992921780.065738700101941->GetYaxis()->SetTitleSize(35);
   setHistdata0.3904992921780.065738700101941->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.3904992921780.065738700101941->GetYaxis()->SetTitleFont(43);
   setHistdata0.3904992921780.065738700101941->GetZaxis()->SetLabelFont(43);
   setHistdata0.3904992921780.065738700101941->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.3904992921780.065738700101941->GetZaxis()->SetLabelSize(32);
   setHistdata0.3904992921780.065738700101941->GetZaxis()->SetTitleSize(35);
   setHistdata0.3904992921780.065738700101941->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.3904992921780.065738700101941->GetZaxis()->SetTitleFont(43);
   setHistdata0.3904992921780.065738700101941->Draw("PESame");
   
   TF1 *axisLine0.6163876167844 = new TF1("axisLine0.616387616784","1",-1,1);
   axisLine0.6163876167844->SetFillColor(19);
   axisLine0.6163876167844->SetFillStyle(0);
   axisLine0.6163876167844->SetMarkerStyle(20);
   axisLine0.6163876167844->SetLineWidth(1);
   axisLine0.6163876167844->GetXaxis()->SetNdivisions(1005);
   axisLine0.6163876167844->GetXaxis()->SetLabelFont(43);
   axisLine0.6163876167844->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.6163876167844->GetXaxis()->SetLabelSize(32);
   axisLine0.6163876167844->GetXaxis()->SetTitleSize(35);
   axisLine0.6163876167844->GetXaxis()->SetTickLength(0.05);
   axisLine0.6163876167844->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.6163876167844->GetXaxis()->SetTitleFont(43);
   axisLine0.6163876167844->GetYaxis()->SetNdivisions(506);
   axisLine0.6163876167844->GetYaxis()->SetLabelFont(43);
   axisLine0.6163876167844->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.6163876167844->GetYaxis()->SetLabelSize(32);
   axisLine0.6163876167844->GetYaxis()->SetTitleSize(35);
   axisLine0.6163876167844->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.6163876167844->GetYaxis()->SetTitleFont(43);
   axisLine0.6163876167844->Draw("SameL");
   
   TH2F *axisRes0.494405251368_copy42 = new TH2F("axisRes0.494405251368_copy42","",50,-1,1,50,0.6,1.4);
   axisRes0.494405251368_copy42->SetDirectory(0);
   axisRes0.494405251368_copy42->SetMarkerStyle(20);
   axisRes0.494405251368_copy42->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.494405251368_copy42->GetXaxis()->SetNdivisions(1005);
   axisRes0.494405251368_copy42->GetXaxis()->SetLabelFont(43);
   axisRes0.494405251368_copy42->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.494405251368_copy42->GetXaxis()->SetLabelSize(32);
   axisRes0.494405251368_copy42->GetXaxis()->SetTitleSize(35);
   axisRes0.494405251368_copy42->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.494405251368_copy42->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.494405251368_copy42->GetXaxis()->SetTitleFont(43);
   axisRes0.494405251368_copy42->GetYaxis()->SetTitle("Data/MC");
   axisRes0.494405251368_copy42->GetYaxis()->SetNdivisions(406);
   axisRes0.494405251368_copy42->GetYaxis()->SetLabelFont(43);
   axisRes0.494405251368_copy42->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.494405251368_copy42->GetYaxis()->SetLabelSize(32);
   axisRes0.494405251368_copy42->GetYaxis()->SetTitleSize(35);
   axisRes0.494405251368_copy42->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.494405251368_copy42->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.494405251368_copy42->GetYaxis()->SetTitleFont(43);
   axisRes0.494405251368_copy42->GetZaxis()->SetLabelFont(43);
   axisRes0.494405251368_copy42->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.494405251368_copy42->GetZaxis()->SetLabelSize(32);
   axisRes0.494405251368_copy42->GetZaxis()->SetTitleSize(35);
   axisRes0.494405251368_copy42->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.494405251368_copy42->GetZaxis()->SetTitleFont(43);
   axisRes0.494405251368_copy42->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_1->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->cd();
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->Range(-1.466667,-833,1.866667,1547);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetTopMargin(0.08);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetBottomMargin(0.35);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->SetFrameBorderMode(0);
   
   TH2F *axis0.78439447164743 = new TH2F("axis0.78439447164743","",50,-1,1,50,0,1356.6);
   axis0.78439447164743->SetMarkerStyle(20);
   axis0.78439447164743->GetXaxis()->SetNdivisions(1005);
   axis0.78439447164743->GetXaxis()->SetLabelFont(43);
   axis0.78439447164743->GetXaxis()->SetLabelOffset(0.0105);
   axis0.78439447164743->GetXaxis()->SetLabelSize(0);
   axis0.78439447164743->GetXaxis()->SetTitleSize(35);
   axis0.78439447164743->GetXaxis()->SetTickLength(0.025);
   axis0.78439447164743->GetXaxis()->SetTitleOffset(1.135);
   axis0.78439447164743->GetXaxis()->SetTitleFont(43);
   axis0.78439447164743->GetYaxis()->SetTitle("Events / bin");
   axis0.78439447164743->GetYaxis()->SetNdivisions(506);
   axis0.78439447164743->GetYaxis()->SetLabelFont(43);
   axis0.78439447164743->GetYaxis()->SetLabelOffset(0.0087);
   axis0.78439447164743->GetYaxis()->SetLabelSize(32);
   axis0.78439447164743->GetYaxis()->SetTitleSize(35);
   axis0.78439447164743->GetYaxis()->SetTickLength(0.02631579);
   axis0.78439447164743->GetYaxis()->SetTitleOffset(1.32);
   axis0.78439447164743->GetYaxis()->SetTitleFont(43);
   axis0.78439447164743->GetZaxis()->SetLabelFont(43);
   axis0.78439447164743->GetZaxis()->SetLabelOffset(0.0087);
   axis0.78439447164743->GetZaxis()->SetLabelSize(32);
   axis0.78439447164743->GetZaxis()->SetTitleSize(35);
   axis0.78439447164743->GetZaxis()->SetTitleOffset(1.32);
   axis0.78439447164743->GetZaxis()->SetTitleFont(43);
   axis0.78439447164743->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis32[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_3_stack_4 = new TH1F("_stack_3_stack_4","",20, xAxis32);
   _stack_3_stack_4->SetMinimum(-13.18613);
   _stack_3_stack_4->SetMaximum(1008.101);
   _stack_3_stack_4->SetDirectory(0);
   _stack_3_stack_4->SetStats(0);
   _stack_3_stack_4->SetMarkerStyle(20);
   _stack_3_stack_4->GetXaxis()->SetNdivisions(1005);
   _stack_3_stack_4->GetXaxis()->SetLabelFont(43);
   _stack_3_stack_4->GetXaxis()->SetLabelOffset(0.0105);
   _stack_3_stack_4->GetXaxis()->SetLabelSize(32);
   _stack_3_stack_4->GetXaxis()->SetTitleSize(35);
   _stack_3_stack_4->GetXaxis()->SetTickLength(0.05);
   _stack_3_stack_4->GetXaxis()->SetTitleOffset(1.135);
   _stack_3_stack_4->GetXaxis()->SetTitleFont(43);
   _stack_3_stack_4->GetYaxis()->SetNdivisions(506);
   _stack_3_stack_4->GetYaxis()->SetLabelFont(43);
   _stack_3_stack_4->GetYaxis()->SetLabelOffset(0.0087);
   _stack_3_stack_4->GetYaxis()->SetLabelSize(32);
   _stack_3_stack_4->GetYaxis()->SetTitleSize(35);
   _stack_3_stack_4->GetYaxis()->SetTitleOffset(1.32);
   _stack_3_stack_4->GetYaxis()->SetTitleFont(43);
   _stack_3_stack_4->GetZaxis()->SetLabelFont(43);
   _stack_3_stack_4->GetZaxis()->SetLabelOffset(0.0087);
   _stack_3_stack_4->GetZaxis()->SetLabelSize(32);
   _stack_3_stack_4->GetZaxis()->SetTitleSize(35);
   _stack_3_stack_4->GetZaxis()->SetTitleOffset(1.32);
   _stack_3_stack_4->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_3_stack_4);
   
   Double_t xAxis33[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttChannel0.11401994673444 = new TH1F("setHisttChannel0.11401994673444","",20, xAxis33);
   setHisttChannel0.11401994673444->SetBinContent(1,24.13267);
   setHisttChannel0.11401994673444->SetBinContent(2,26.99692);
   setHisttChannel0.11401994673444->SetBinContent(3,24.75311);
   setHisttChannel0.11401994673444->SetBinContent(4,30.22013);
   setHisttChannel0.11401994673444->SetBinContent(5,31.1625);
   setHisttChannel0.11401994673444->SetBinContent(6,33.40547);
   setHisttChannel0.11401994673444->SetBinContent(7,36.66896);
   setHisttChannel0.11401994673444->SetBinContent(8,40.95938);
   setHisttChannel0.11401994673444->SetBinContent(9,46.31335);
   setHisttChannel0.11401994673444->SetBinContent(10,48.02217);
   setHisttChannel0.11401994673444->SetBinContent(11,57.58482);
   setHisttChannel0.11401994673444->SetBinContent(12,64.07852);
   setHisttChannel0.11401994673444->SetBinContent(13,64.04989);
   setHisttChannel0.11401994673444->SetBinContent(14,69.04692);
   setHisttChannel0.11401994673444->SetBinContent(15,69.3368);
   setHisttChannel0.11401994673444->SetBinContent(16,76.63512);
   setHisttChannel0.11401994673444->SetBinContent(17,79.86387);
   setHisttChannel0.11401994673444->SetBinContent(18,74.84472);
   setHisttChannel0.11401994673444->SetBinContent(19,54.75772);
   setHisttChannel0.11401994673444->SetBinContent(20,15.70786);
   setHisttChannel0.11401994673444->SetBinError(1,1.633121);
   setHisttChannel0.11401994673444->SetBinError(2,1.709827);
   setHisttChannel0.11401994673444->SetBinError(3,1.649407);
   setHisttChannel0.11401994673444->SetBinError(4,1.812723);
   setHisttChannel0.11401994673444->SetBinError(5,1.854294);
   setHisttChannel0.11401994673444->SetBinError(6,1.91055);
   setHisttChannel0.11401994673444->SetBinError(7,2.013708);
   setHisttChannel0.11401994673444->SetBinError(8,2.145882);
   setHisttChannel0.11401994673444->SetBinError(9,2.283283);
   setHisttChannel0.11401994673444->SetBinError(10,2.280172);
   setHisttChannel0.11401994673444->SetBinError(11,2.543815);
   setHisttChannel0.11401994673444->SetBinError(12,2.659593);
   setHisttChannel0.11401994673444->SetBinError(13,2.623406);
   setHisttChannel0.11401994673444->SetBinError(14,2.738276);
   setHisttChannel0.11401994673444->SetBinError(15,2.746206);
   setHisttChannel0.11401994673444->SetBinError(16,2.902526);
   setHisttChannel0.11401994673444->SetBinError(17,2.97768);
   setHisttChannel0.11401994673444->SetBinError(18,2.8867);
   setHisttChannel0.11401994673444->SetBinError(19,2.483553);
   setHisttChannel0.11401994673444->SetBinError(20,1.318144);
   setHisttChannel0.11401994673444->SetEntries(20202);
   setHisttChannel0.11401994673444->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.11401994673444->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.11401994673444->SetLineColor(ci);
   setHisttChannel0.11401994673444->SetLineWidth(2);
   setHisttChannel0.11401994673444->SetMarkerStyle(20);
   setHisttChannel0.11401994673444->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.11401994673444->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.11401994673444->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.11401994673444->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.11401994673444->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.11401994673444->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.11401994673444->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.11401994673444->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.11401994673444->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.11401994673444->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.11401994673444->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.11401994673444->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.11401994673444->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.11401994673444->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.11401994673444->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.11401994673444->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.11401994673444->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.11401994673444->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.11401994673444->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.11401994673444->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.11401994673444->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.114019946734,"HIST F");
   Double_t xAxis34[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttWs0.40616349771345 = new TH1F("setHisttWs0.40616349771345","",20, xAxis34);
   setHisttWs0.40616349771345->SetBinContent(1,24.46527);
   setHisttWs0.40616349771345->SetBinContent(2,26.42134);
   setHisttWs0.40616349771345->SetBinContent(3,32.19923);
   setHisttWs0.40616349771345->SetBinContent(4,30.92871);
   setHisttWs0.40616349771345->SetBinContent(5,26.0955);
   setHisttWs0.40616349771345->SetBinContent(6,31.06591);
   setHisttWs0.40616349771345->SetBinContent(7,25.77008);
   setHisttWs0.40616349771345->SetBinContent(8,22.82729);
   setHisttWs0.40616349771345->SetBinContent(9,22.84325);
   setHisttWs0.40616349771345->SetBinContent(10,29.30777);
   setHisttWs0.40616349771345->SetBinContent(11,24.77908);
   setHisttWs0.40616349771345->SetBinContent(12,25.6287);
   setHisttWs0.40616349771345->SetBinContent(13,23.59375);
   setHisttWs0.40616349771345->SetBinContent(14,26.54281);
   setHisttWs0.40616349771345->SetBinContent(15,21.07952);
   setHisttWs0.40616349771345->SetBinContent(16,28.05493);
   setHisttWs0.40616349771345->SetBinContent(17,23.35171);
   setHisttWs0.40616349771345->SetBinContent(18,15.62121);
   setHisttWs0.40616349771345->SetBinContent(19,16.2907);
   setHisttWs0.40616349771345->SetBinContent(20,5.741208);
   setHisttWs0.40616349771345->SetBinError(1,3.291949);
   setHisttWs0.40616349771345->SetBinError(2,3.407178);
   setHisttWs0.40616349771345->SetBinError(3,3.739637);
   setHisttWs0.40616349771345->SetBinError(4,3.732846);
   setHisttWs0.40616349771345->SetBinError(5,3.293207);
   setHisttWs0.40616349771345->SetBinError(6,3.61797);
   setHisttWs0.40616349771345->SetBinError(7,3.409854);
   setHisttWs0.40616349771345->SetBinError(8,3.298355);
   setHisttWs0.40616349771345->SetBinError(9,3.099837);
   setHisttWs0.40616349771345->SetBinError(10,3.566905);
   setHisttWs0.40616349771345->SetBinError(11,3.183268);
   setHisttWs0.40616349771345->SetBinError(12,3.280967);
   setHisttWs0.40616349771345->SetBinError(13,3.183005);
   setHisttWs0.40616349771345->SetBinError(14,3.223566);
   setHisttWs0.40616349771345->SetBinError(15,3.047721);
   setHisttWs0.40616349771345->SetBinError(16,3.524513);
   setHisttWs0.40616349771345->SetBinError(17,3.165269);
   setHisttWs0.40616349771345->SetBinError(18,2.639467);
   setHisttWs0.40616349771345->SetBinError(19,2.649994);
   setHisttWs0.40616349771345->SetBinError(20,1.555617);
   setHisttWs0.40616349771345->SetEntries(3351);
   setHisttWs0.40616349771345->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.40616349771345->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.40616349771345->SetLineColor(ci);
   setHisttWs0.40616349771345->SetLineWidth(2);
   setHisttWs0.40616349771345->SetMarkerStyle(20);
   setHisttWs0.40616349771345->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.40616349771345->GetXaxis()->SetLabelFont(43);
   setHisttWs0.40616349771345->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.40616349771345->GetXaxis()->SetLabelSize(32);
   setHisttWs0.40616349771345->GetXaxis()->SetTitleSize(35);
   setHisttWs0.40616349771345->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.40616349771345->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.40616349771345->GetXaxis()->SetTitleFont(43);
   setHisttWs0.40616349771345->GetYaxis()->SetNdivisions(506);
   setHisttWs0.40616349771345->GetYaxis()->SetLabelFont(43);
   setHisttWs0.40616349771345->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.40616349771345->GetYaxis()->SetLabelSize(32);
   setHisttWs0.40616349771345->GetYaxis()->SetTitleSize(35);
   setHisttWs0.40616349771345->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.40616349771345->GetYaxis()->SetTitleFont(43);
   setHisttWs0.40616349771345->GetZaxis()->SetLabelFont(43);
   setHisttWs0.40616349771345->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.40616349771345->GetZaxis()->SetLabelSize(32);
   setHisttWs0.40616349771345->GetZaxis()->SetTitleSize(35);
   setHisttWs0.40616349771345->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.40616349771345->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.406163497713,"HIST F");
   Double_t xAxis35[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistTTJets0.98266728431446 = new TH1F("setHistTTJets0.98266728431446","",20, xAxis35);
   setHistTTJets0.98266728431446->SetBinContent(1,794.2532);
   setHistTTJets0.98266728431446->SetBinContent(2,798.0314);
   setHistTTJets0.98266728431446->SetBinContent(3,803.5003);
   setHistTTJets0.98266728431446->SetBinContent(4,809.3513);
   setHistTTJets0.98266728431446->SetBinContent(5,791.0678);
   setHistTTJets0.98266728431446->SetBinContent(6,811.928);
   setHistTTJets0.98266728431446->SetBinContent(7,817.4304);
   setHistTTJets0.98266728431446->SetBinContent(8,816.0789);
   setHistTTJets0.98266728431446->SetBinContent(9,822.5624);
   setHistTTJets0.98266728431446->SetBinContent(10,830.6669);
   setHistTTJets0.98266728431446->SetBinContent(11,812.6782);
   setHistTTJets0.98266728431446->SetBinContent(12,819.5492);
   setHistTTJets0.98266728431446->SetBinContent(13,811.7653);
   setHistTTJets0.98266728431446->SetBinContent(14,794.5084);
   setHistTTJets0.98266728431446->SetBinContent(15,763.5802);
   setHistTTJets0.98266728431446->SetBinContent(16,741.9866);
   setHistTTJets0.98266728431446->SetBinContent(17,693.0295);
   setHistTTJets0.98266728431446->SetBinContent(18,645.1193);
   setHistTTJets0.98266728431446->SetBinContent(19,515.6872);
   setHistTTJets0.98266728431446->SetBinContent(20,161.7409);
   setHistTTJets0.98266728431446->SetBinError(1,8.236683);
   setHistTTJets0.98266728431446->SetBinError(2,8.269337);
   setHistTTJets0.98266728431446->SetBinError(3,8.30712);
   setHistTTJets0.98266728431446->SetBinError(4,8.394065);
   setHistTTJets0.98266728431446->SetBinError(5,8.262668);
   setHistTTJets0.98266728431446->SetBinError(6,8.403538);
   setHistTTJets0.98266728431446->SetBinError(7,8.454887);
   setHistTTJets0.98266728431446->SetBinError(8,8.46942);
   setHistTTJets0.98266728431446->SetBinError(9,8.511433);
   setHistTTJets0.98266728431446->SetBinError(10,8.527035);
   setHistTTJets0.98266728431446->SetBinError(11,8.485147);
   setHistTTJets0.98266728431446->SetBinError(12,8.507601);
   setHistTTJets0.98266728431446->SetBinError(13,8.484673);
   setHistTTJets0.98266728431446->SetBinError(14,8.391127);
   setHistTTJets0.98266728431446->SetBinError(15,8.236729);
   setHistTTJets0.98266728431446->SetBinError(16,8.159504);
   setHistTTJets0.98266728431446->SetBinError(17,7.867244);
   setHistTTJets0.98266728431446->SetBinError(18,7.649202);
   setHistTTJets0.98266728431446->SetBinError(19,6.880305);
   setHistTTJets0.98266728431446->SetBinError(20,3.831469);
   setHistTTJets0.98266728431446->SetEntries(249437);
   setHistTTJets0.98266728431446->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.98266728431446->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.98266728431446->SetLineColor(ci);
   setHistTTJets0.98266728431446->SetLineWidth(2);
   setHistTTJets0.98266728431446->SetMarkerStyle(20);
   setHistTTJets0.98266728431446->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.98266728431446->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.98266728431446->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.98266728431446->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.98266728431446->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.98266728431446->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.98266728431446->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.98266728431446->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.98266728431446->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.98266728431446->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.98266728431446->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.98266728431446->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.98266728431446->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.98266728431446->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.98266728431446->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.98266728431446->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.98266728431446->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.98266728431446->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.98266728431446->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.98266728431446->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.98266728431446->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.982667284314,"HIST F");
   Double_t xAxis36[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGHF0.23226684223347 = new TH1F("setHistWJetsMGHF0.23226684223347","",20, xAxis36);
   setHistWJetsMGHF0.23226684223347->SetBinContent(1,29.18897);
   setHistWJetsMGHF0.23226684223347->SetBinContent(2,25.86177);
   setHistWJetsMGHF0.23226684223347->SetBinContent(3,17.10824);
   setHistWJetsMGHF0.23226684223347->SetBinContent(4,18.14218);
   setHistWJetsMGHF0.23226684223347->SetBinContent(5,15.49824);
   setHistWJetsMGHF0.23226684223347->SetBinContent(6,18.83109);
   setHistWJetsMGHF0.23226684223347->SetBinContent(7,26.51953);
   setHistWJetsMGHF0.23226684223347->SetBinContent(8,23.18751);
   setHistWJetsMGHF0.23226684223347->SetBinContent(9,24.36377);
   setHistWJetsMGHF0.23226684223347->SetBinContent(10,26.70748);
   setHistWJetsMGHF0.23226684223347->SetBinContent(11,17.5056);
   setHistWJetsMGHF0.23226684223347->SetBinContent(12,25.28724);
   setHistWJetsMGHF0.23226684223347->SetBinContent(13,18.27357);
   setHistWJetsMGHF0.23226684223347->SetBinContent(14,18.41142);
   setHistWJetsMGHF0.23226684223347->SetBinContent(15,20.66231);
   setHistWJetsMGHF0.23226684223347->SetBinContent(16,18.99269);
   setHistWJetsMGHF0.23226684223347->SetBinContent(17,27.69541);
   setHistWJetsMGHF0.23226684223347->SetBinContent(18,23.82443);
   setHistWJetsMGHF0.23226684223347->SetBinContent(19,21.58904);
   setHistWJetsMGHF0.23226684223347->SetBinContent(20,10.82645);
   setHistWJetsMGHF0.23226684223347->SetBinError(1,5.276027);
   setHistWJetsMGHF0.23226684223347->SetBinError(2,5.079058);
   setHistWJetsMGHF0.23226684223347->SetBinError(3,3.413614);
   setHistWJetsMGHF0.23226684223347->SetBinError(4,3.846759);
   setHistWJetsMGHF0.23226684223347->SetBinError(5,3.258069);
   setHistWJetsMGHF0.23226684223347->SetBinError(6,4.034222);
   setHistWJetsMGHF0.23226684223347->SetBinError(7,4.658146);
   setHistWJetsMGHF0.23226684223347->SetBinError(8,4.614474);
   setHistWJetsMGHF0.23226684223347->SetBinError(9,4.614888);
   setHistWJetsMGHF0.23226684223347->SetBinError(10,4.580047);
   setHistWJetsMGHF0.23226684223347->SetBinError(11,3.665352);
   setHistWJetsMGHF0.23226684223347->SetBinError(12,4.081258);
   setHistWJetsMGHF0.23226684223347->SetBinError(13,3.927602);
   setHistWJetsMGHF0.23226684223347->SetBinError(14,3.40714);
   setHistWJetsMGHF0.23226684223347->SetBinError(15,3.721536);
   setHistWJetsMGHF0.23226684223347->SetBinError(16,3.332546);
   setHistWJetsMGHF0.23226684223347->SetBinError(17,4.041855);
   setHistWJetsMGHF0.23226684223347->SetBinError(18,3.746003);
   setHistWJetsMGHF0.23226684223347->SetBinError(19,3.399189);
   setHistWJetsMGHF0.23226684223347->SetBinError(20,2.509768);
   setHistWJetsMGHF0.23226684223347->SetEntries(798);
   setHistWJetsMGHF0.23226684223347->SetDirectory(0);

   ci = TColor::GetColor("#1bb320");
   setHistWJetsMGHF0.23226684223347->SetFillColor(ci);

   ci = TColor::GetColor("#106b13");
   setHistWJetsMGHF0.23226684223347->SetLineColor(ci);
   setHistWJetsMGHF0.23226684223347->SetLineWidth(2);
   setHistWJetsMGHF0.23226684223347->SetMarkerStyle(20);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.23226684223347->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.23226684223347->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.23226684223347->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.23226684223347->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.23226684223347->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.23226684223347->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.23226684223347->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.23226684223347->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.23226684223347->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.23226684223347->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.23226684223347->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.23226684223347->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.23226684223347->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.23226684223347->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.232266842233,"HIST F");
   Double_t xAxis37[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGLF0.5445011765948 = new TH1F("setHistWJetsMGLF0.5445011765948","",20, xAxis37);
   setHistWJetsMGLF0.5445011765948->SetBinContent(2,0.1663905);
   setHistWJetsMGLF0.5445011765948->SetBinContent(8,1.388154);
   setHistWJetsMGLF0.5445011765948->SetBinContent(12,0.1675788);
   setHistWJetsMGLF0.5445011765948->SetBinContent(18,0.9516768);
   setHistWJetsMGLF0.5445011765948->SetBinError(2,0.1663905);
   setHistWJetsMGLF0.5445011765948->SetBinError(8,1.388154);
   setHistWJetsMGLF0.5445011765948->SetBinError(12,0.1675788);
   setHistWJetsMGLF0.5445011765948->SetBinError(18,0.9516768);
   setHistWJetsMGLF0.5445011765948->SetEntries(4);
   setHistWJetsMGLF0.5445011765948->SetDirectory(0);

   ci = TColor::GetColor("#4dff97");
   setHistWJetsMGLF0.5445011765948->SetFillColor(ci);

   ci = TColor::GetColor("#2e995a");
   setHistWJetsMGLF0.5445011765948->SetLineColor(ci);
   setHistWJetsMGLF0.5445011765948->SetLineWidth(2);
   setHistWJetsMGLF0.5445011765948->SetMarkerStyle(20);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.5445011765948->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.5445011765948->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.5445011765948->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5445011765948->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.5445011765948->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5445011765948->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5445011765948->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.5445011765948->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.5445011765948->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.5445011765948->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.5445011765948->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.5445011765948->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.5445011765948->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.5445011765948->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.54450117659,"HIST F");
   Double_t xAxis38[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistDYVV0.75696466714149 = new TH1F("setHistDYVV0.75696466714149","",20, xAxis38);
   setHistDYVV0.75696466714149->SetBinContent(1,4.391083);
   setHistDYVV0.75696466714149->SetBinContent(2,9.474304);
   setHistDYVV0.75696466714149->SetBinContent(3,10.09613);
   setHistDYVV0.75696466714149->SetBinContent(4,3.210045);
   setHistDYVV0.75696466714149->SetBinContent(5,5.512975);
   setHistDYVV0.75696466714149->SetBinContent(6,6.524754);
   setHistDYVV0.75696466714149->SetBinContent(7,6.904924);
   setHistDYVV0.75696466714149->SetBinContent(8,3.541625);
   setHistDYVV0.75696466714149->SetBinContent(9,3.88122);
   setHistDYVV0.75696466714149->SetBinContent(10,4.554668);
   setHistDYVV0.75696466714149->SetBinContent(11,1.589136);
   setHistDYVV0.75696466714149->SetBinContent(12,9.006602);
   setHistDYVV0.75696466714149->SetBinContent(13,7.366902);
   setHistDYVV0.75696466714149->SetBinContent(14,7.472211);
   setHistDYVV0.75696466714149->SetBinContent(15,1.777692);
   setHistDYVV0.75696466714149->SetBinContent(16,4.626727);
   setHistDYVV0.75696466714149->SetBinContent(17,6.47614);
   setHistDYVV0.75696466714149->SetBinContent(18,7.787092);
   setHistDYVV0.75696466714149->SetBinContent(19,4.487148);
   setHistDYVV0.75696466714149->SetBinContent(20,0.3248744);
   setHistDYVV0.75696466714149->SetBinError(1,2.949347);
   setHistDYVV0.75696466714149->SetBinError(2,4.83165);
   setHistDYVV0.75696466714149->SetBinError(3,4.91159);
   setHistDYVV0.75696466714149->SetBinError(4,1.876979);
   setHistDYVV0.75696466714149->SetBinError(5,2.994038);
   setHistDYVV0.75696466714149->SetBinError(6,5.009215);
   setHistDYVV0.75696466714149->SetBinError(7,3.845251);
   setHistDYVV0.75696466714149->SetBinError(8,2.68761);
   setHistDYVV0.75696466714149->SetBinError(9,2.390637);
   setHistDYVV0.75696466714149->SetBinError(10,2.888109);
   setHistDYVV0.75696466714149->SetBinError(11,0.380395);
   setHistDYVV0.75696466714149->SetBinError(12,5.038604);
   setHistDYVV0.75696466714149->SetBinError(13,4.054681);
   setHistDYVV0.75696466714149->SetBinError(14,3.966348);
   setHistDYVV0.75696466714149->SetBinError(15,0.420464);
   setHistDYVV0.75696466714149->SetBinError(16,2.933859);
   setHistDYVV0.75696466714149->SetBinError(17,4.0419);
   setHistDYVV0.75696466714149->SetBinError(18,4.235279);
   setHistDYVV0.75696466714149->SetBinError(19,2.932145);
   setHistDYVV0.75696466714149->SetBinError(20,0.1724703);
   setHistDYVV0.75696466714149->SetEntries(444);
   setHistDYVV0.75696466714149->SetDirectory(0);

   ci = TColor::GetColor("#3d7bea");
   setHistDYVV0.75696466714149->SetFillColor(ci);

   ci = TColor::GetColor("#24498c");
   setHistDYVV0.75696466714149->SetLineColor(ci);
   setHistDYVV0.75696466714149->SetLineWidth(2);
   setHistDYVV0.75696466714149->SetMarkerStyle(20);
   setHistDYVV0.75696466714149->GetXaxis()->SetNdivisions(1005);
   setHistDYVV0.75696466714149->GetXaxis()->SetLabelFont(43);
   setHistDYVV0.75696466714149->GetXaxis()->SetLabelOffset(0.0105);
   setHistDYVV0.75696466714149->GetXaxis()->SetLabelSize(32);
   setHistDYVV0.75696466714149->GetXaxis()->SetTitleSize(35);
   setHistDYVV0.75696466714149->GetXaxis()->SetTickLength(0.05);
   setHistDYVV0.75696466714149->GetXaxis()->SetTitleOffset(1.135);
   setHistDYVV0.75696466714149->GetXaxis()->SetTitleFont(43);
   setHistDYVV0.75696466714149->GetYaxis()->SetNdivisions(506);
   setHistDYVV0.75696466714149->GetYaxis()->SetLabelFont(43);
   setHistDYVV0.75696466714149->GetYaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.75696466714149->GetYaxis()->SetLabelSize(32);
   setHistDYVV0.75696466714149->GetYaxis()->SetTitleSize(35);
   setHistDYVV0.75696466714149->GetYaxis()->SetTitleOffset(1.32);
   setHistDYVV0.75696466714149->GetYaxis()->SetTitleFont(43);
   setHistDYVV0.75696466714149->GetZaxis()->SetLabelFont(43);
   setHistDYVV0.75696466714149->GetZaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.75696466714149->GetZaxis()->SetLabelSize(32);
   setHistDYVV0.75696466714149->GetZaxis()->SetTitleSize(35);
   setHistDYVV0.75696466714149->GetZaxis()->SetTitleOffset(1.32);
   setHistDYVV0.75696466714149->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDYVV0.756964667141,"HIST F");
   Double_t xAxis39[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistQCD_DD0.98335999397450 = new TH1F("setHistQCD_DD0.98335999397450","",20, xAxis39);
   setHistQCD_DD0.98335999397450->SetBinContent(1,1.945837);
   setHistQCD_DD0.98335999397450->SetBinContent(2,2.826244);
   setHistQCD_DD0.98335999397450->SetBinContent(3,-7.492262);
   setHistQCD_DD0.98335999397450->SetBinContent(4,9.629053);
   setHistQCD_DD0.98335999397450->SetBinContent(5,-7.55533);
   setHistQCD_DD0.98335999397450->SetBinContent(6,6.910938);
   setHistQCD_DD0.98335999397450->SetBinContent(7,11.73596);
   setHistQCD_DD0.98335999397450->SetBinContent(8,5.124996);
   setHistQCD_DD0.98335999397450->SetBinContent(9,-6.990788);
   setHistQCD_DD0.98335999397450->SetBinContent(10,20.83699);
   setHistQCD_DD0.98335999397450->SetBinContent(11,1.917147);
   setHistQCD_DD0.98335999397450->SetBinContent(12,10.24077);
   setHistQCD_DD0.98335999397450->SetBinContent(13,-2.125333);
   setHistQCD_DD0.98335999397450->SetBinContent(14,0.9586017);
   setHistQCD_DD0.98335999397450->SetBinContent(15,6.726412);
   setHistQCD_DD0.98335999397450->SetBinContent(16,2.693745);
   setHistQCD_DD0.98335999397450->SetBinContent(17,25.1066);
   setHistQCD_DD0.98335999397450->SetBinContent(18,0.4608882);
   setHistQCD_DD0.98335999397450->SetBinContent(19,5.245767);
   setHistQCD_DD0.98335999397450->SetBinContent(20,10.92903);
   setHistQCD_DD0.98335999397450->SetBinError(1,6.478632);
   setHistQCD_DD0.98335999397450->SetBinError(2,6.423019);
   setHistQCD_DD0.98335999397450->SetBinError(3,5.239752);
   setHistQCD_DD0.98335999397450->SetBinError(4,6.78089);
   setHistQCD_DD0.98335999397450->SetBinError(5,5.630805);
   setHistQCD_DD0.98335999397450->SetBinError(6,6.798637);
   setHistQCD_DD0.98335999397450->SetBinError(7,7.597697);
   setHistQCD_DD0.98335999397450->SetBinError(8,6.948151);
   setHistQCD_DD0.98335999397450->SetBinError(9,5.75312);
   setHistQCD_DD0.98335999397450->SetBinError(10,8.355231);
   setHistQCD_DD0.98335999397450->SetBinError(11,7.156417);
   setHistQCD_DD0.98335999397450->SetBinError(12,8.365768);
   setHistQCD_DD0.98335999397450->SetBinError(13,6.480194);
   setHistQCD_DD0.98335999397450->SetBinError(14,7.519862);
   setHistQCD_DD0.98335999397450->SetBinError(15,7.872688);
   setHistQCD_DD0.98335999397450->SetBinError(16,6.978295);
   setHistQCD_DD0.98335999397450->SetBinError(17,8.842433);
   setHistQCD_DD0.98335999397450->SetBinError(18,7.160175);
   setHistQCD_DD0.98335999397450->SetBinError(19,7.287157);
   setHistQCD_DD0.98335999397450->SetBinError(20,7.296141);
   setHistQCD_DD0.98335999397450->SetEntries(19197);
   setHistQCD_DD0.98335999397450->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.98335999397450->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.98335999397450->SetLineColor(ci);
   setHistQCD_DD0.98335999397450->SetLineWidth(2);
   setHistQCD_DD0.98335999397450->SetMarkerStyle(20);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.98335999397450->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.98335999397450->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.98335999397450->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.98335999397450->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.98335999397450->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.98335999397450->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.98335999397450->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.98335999397450->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.98335999397450->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.98335999397450->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.98335999397450->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.98335999397450->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.98335999397450->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.98335999397450->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.983359993974,"HIST F");
   ->Draw("same");
   Double_t xAxis40[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.39049929217851 = new TH1F("setHistdata0.39049929217851","",20, xAxis40);
   setHistdata0.39049929217851->SetBinContent(1,890);
   setHistdata0.39049929217851->SetBinContent(2,919);
   setHistdata0.39049929217851->SetBinContent(3,907);
   setHistdata0.39049929217851->SetBinContent(4,877);
   setHistdata0.39049929217851->SetBinContent(5,930);
   setHistdata0.39049929217851->SetBinContent(6,918);
   setHistdata0.39049929217851->SetBinContent(7,939);
   setHistdata0.39049929217851->SetBinContent(8,938);
   setHistdata0.39049929217851->SetBinContent(9,900);
   setHistdata0.39049929217851->SetBinContent(10,891);
   setHistdata0.39049929217851->SetBinContent(11,969);
   setHistdata0.39049929217851->SetBinContent(12,891);
   setHistdata0.39049929217851->SetBinContent(13,895);
   setHistdata0.39049929217851->SetBinContent(14,904);
   setHistdata0.39049929217851->SetBinContent(15,891);
   setHistdata0.39049929217851->SetBinContent(16,896);
   setHistdata0.39049929217851->SetBinContent(17,862);
   setHistdata0.39049929217851->SetBinContent(18,755);
   setHistdata0.39049929217851->SetBinContent(19,625);
   setHistdata0.39049929217851->SetBinContent(20,226);
   setHistdata0.39049929217851->SetBinError(1,29.83287);
   setHistdata0.39049929217851->SetBinError(2,30.31501);
   setHistdata0.39049929217851->SetBinError(3,30.11644);
   setHistdata0.39049929217851->SetBinError(4,29.61419);
   setHistdata0.39049929217851->SetBinError(5,30.4959);
   setHistdata0.39049929217851->SetBinError(6,30.29851);
   setHistdata0.39049929217851->SetBinError(7,30.64311);
   setHistdata0.39049929217851->SetBinError(8,30.62679);
   setHistdata0.39049929217851->SetBinError(9,30);
   setHistdata0.39049929217851->SetBinError(10,29.84962);
   setHistdata0.39049929217851->SetBinError(11,31.12876);
   setHistdata0.39049929217851->SetBinError(12,29.84962);
   setHistdata0.39049929217851->SetBinError(13,29.91655);
   setHistdata0.39049929217851->SetBinError(14,30.06659);
   setHistdata0.39049929217851->SetBinError(15,29.84962);
   setHistdata0.39049929217851->SetBinError(16,29.93326);
   setHistdata0.39049929217851->SetBinError(17,29.35984);
   setHistdata0.39049929217851->SetBinError(18,27.47726);
   setHistdata0.39049929217851->SetBinError(19,25);
   setHistdata0.39049929217851->SetBinError(20,15.0333);
   setHistdata0.39049929217851->SetEntries(17023);
   setHistdata0.39049929217851->SetFillStyle(0);
   setHistdata0.39049929217851->SetMarkerStyle(20);
   setHistdata0.39049929217851->SetMarkerSize(1.15);
   setHistdata0.39049929217851->GetXaxis()->SetNdivisions(1005);
   setHistdata0.39049929217851->GetXaxis()->SetLabelFont(43);
   setHistdata0.39049929217851->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.39049929217851->GetXaxis()->SetLabelSize(32);
   setHistdata0.39049929217851->GetXaxis()->SetTitleSize(35);
   setHistdata0.39049929217851->GetXaxis()->SetTickLength(0.05);
   setHistdata0.39049929217851->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.39049929217851->GetXaxis()->SetTitleFont(43);
   setHistdata0.39049929217851->GetYaxis()->SetNdivisions(506);
   setHistdata0.39049929217851->GetYaxis()->SetLabelFont(43);
   setHistdata0.39049929217851->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.39049929217851->GetYaxis()->SetLabelSize(32);
   setHistdata0.39049929217851->GetYaxis()->SetTitleSize(35);
   setHistdata0.39049929217851->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.39049929217851->GetYaxis()->SetTitleFont(43);
   setHistdata0.39049929217851->GetZaxis()->SetLabelFont(43);
   setHistdata0.39049929217851->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.39049929217851->GetZaxis()->SetLabelSize(32);
   setHistdata0.39049929217851->GetZaxis()->SetTitleSize(35);
   setHistdata0.39049929217851->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.39049929217851->GetZaxis()->SetTitleFont(43);
   setHistdata0.39049929217851->Draw("PESame");
   
   TH2F *axis0.784394471647_copy52 = new TH2F("axis0.784394471647_copy52","",50,-1,1,50,0,1356.6);
   axis0.784394471647_copy52->SetDirectory(0);
   axis0.784394471647_copy52->SetMarkerStyle(20);
   axis0.784394471647_copy52->GetXaxis()->SetNdivisions(1005);
   axis0.784394471647_copy52->GetXaxis()->SetLabelFont(43);
   axis0.784394471647_copy52->GetXaxis()->SetLabelOffset(0.0105);
   axis0.784394471647_copy52->GetXaxis()->SetLabelSize(0);
   axis0.784394471647_copy52->GetXaxis()->SetTitleSize(35);
   axis0.784394471647_copy52->GetXaxis()->SetTickLength(0.025);
   axis0.784394471647_copy52->GetXaxis()->SetTitleOffset(1.135);
   axis0.784394471647_copy52->GetXaxis()->SetTitleFont(43);
   axis0.784394471647_copy52->GetYaxis()->SetTitle("Events / bin");
   axis0.784394471647_copy52->GetYaxis()->SetNdivisions(506);
   axis0.784394471647_copy52->GetYaxis()->SetLabelFont(43);
   axis0.784394471647_copy52->GetYaxis()->SetLabelOffset(0.0087);
   axis0.784394471647_copy52->GetYaxis()->SetLabelSize(32);
   axis0.784394471647_copy52->GetYaxis()->SetTitleSize(35);
   axis0.784394471647_copy52->GetYaxis()->SetTickLength(0.02631579);
   axis0.784394471647_copy52->GetYaxis()->SetTitleOffset(1.32);
   axis0.784394471647_copy52->GetYaxis()->SetTitleFont(43);
   axis0.784394471647_copy52->GetZaxis()->SetLabelFont(43);
   axis0.784394471647_copy52->GetZaxis()->SetLabelOffset(0.0087);
   axis0.784394471647_copy52->GetZaxis()->SetLabelSize(32);
   axis0.784394471647_copy52->GetZaxis()->SetTitleSize(35);
   axis0.784394471647_copy52->GetZaxis()->SetTitleOffset(1.32);
   axis0.784394471647_copy52->GetZaxis()->SetTitleFont(43);
   axis0.784394471647_copy52->Draw("sameaxis");
   
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
   AText = pt->AddText("BDT#lower[0.3]{#scale[0.7]{multi.}}#kern[-0.5]{ }>#kern[-0.5]{ }-0.15");
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.390499292178","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.983359993974","Multijet","F");

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
   entry=leg->AddEntry("setHistDYVV0.756964667141","Z/#gamma/VV","F");

   ci = TColor::GetColor("#3d7bea");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#24498c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsMGLF0.54450117659","W+LF","F");

   ci = TColor::GetColor("#4dff97");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#2e995a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistWJetsMGHF0.232266842233","W+HF","F");

   ci = TColor::GetColor("#1bb320");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#106b13");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistTTJets0.982667284314","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.406163497713","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.114019946734","#it{t}-channel","F");

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
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483_2->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483->SetSelected(cvmuon_3j2t_cosTheta_lj_qcdbdt0.217090817483);
}
