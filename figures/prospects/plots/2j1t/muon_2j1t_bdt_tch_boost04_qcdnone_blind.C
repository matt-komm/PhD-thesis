void plots/2j1t/muon_2j1t_bdt_tch_boost04_qcdnone_blind()
{
//=========Macro generated from canvas: cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767/
//=========  (Thu May 25 16:15:13 2017) by ROOT version6.02/05
   TCanvas *cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767 = new TCanvas("cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetHighLightColor(2);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->Range(0,0,1,1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetFillColor(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetBorderMode(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetBorderSize(2);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetTickx(1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetTicky(1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetLeftMargin(0.1150442);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetRightMargin(0.227083);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetTopMargin(0.04002582);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetBottomMargin(0.08064517);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetFrameLineWidth(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetFrameBorderMode(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1
   TPad *cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1 = new TPad("cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1", "",0,0,1,1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->Draw();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->cd();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetFillColor(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetFillStyle(4000);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetBorderMode(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetBorderSize(2);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetTickx(1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetTicky(1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetLeftMargin(0.14);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetRightMargin(0.26);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetTopMargin(0.65);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetBottomMargin(0.14);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetFrameBorderMode(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.11607954188614 = new TH2F("axisRes0.11607954188614","",50,-1,1,50,0.6,1.4);
   axisRes0.11607954188614->SetMarkerStyle(20);
   axisRes0.11607954188614->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes0.11607954188614->GetXaxis()->SetNdivisions(1005);
   axisRes0.11607954188614->GetXaxis()->SetLabelFont(43);
   axisRes0.11607954188614->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.11607954188614->GetXaxis()->SetLabelSize(32);
   axisRes0.11607954188614->GetXaxis()->SetTitleSize(35);
   axisRes0.11607954188614->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.11607954188614->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.11607954188614->GetXaxis()->SetTitleFont(43);
   axisRes0.11607954188614->GetYaxis()->SetTitle("Data/MC");
   axisRes0.11607954188614->GetYaxis()->SetNdivisions(406);
   axisRes0.11607954188614->GetYaxis()->SetLabelFont(43);
   axisRes0.11607954188614->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.11607954188614->GetYaxis()->SetLabelSize(32);
   axisRes0.11607954188614->GetYaxis()->SetTitleSize(35);
   axisRes0.11607954188614->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.11607954188614->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.11607954188614->GetYaxis()->SetTitleFont(43);
   axisRes0.11607954188614->GetZaxis()->SetLabelFont(43);
   axisRes0.11607954188614->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.11607954188614->GetZaxis()->SetLabelSize(32);
   axisRes0.11607954188614->GetZaxis()->SetTitleSize(35);
   axisRes0.11607954188614->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.11607954188614->GetZaxis()->SetTitleFont(43);
   axisRes0.11607954188614->Draw("AXIS");
   TBox *box = new TBox(-1,0.9788018,-0.9230769,1.021198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9788018,-0.9230769,1.021198);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.985826,-0.8461538,1.014174);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.985826,-0.8461538,1.014174);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9856198,-0.7692308,1.01438);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9856198,-0.7692308,1.01438);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9853071,-0.6923077,1.014693);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9853071,-0.6923077,1.014693);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.9843516,-0.6153846,1.015648);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.9843516,-0.6153846,1.015648);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.9839114,-0.5384615,1.016089);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.9839114,-0.5384615,1.016089);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9836106,-0.4615385,1.016389);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9836106,-0.4615385,1.016389);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.9832714,-0.3846154,1.016729);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.9832714,-0.3846154,1.016729);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9836646,-0.3076923,1.016335);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9836646,-0.3076923,1.016335);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.9827617,-0.2307692,1.017238);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.9827617,-0.2307692,1.017238);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9846069,-0.1538462,1.015393);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9846069,-0.1538462,1.015393);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.9841157,-0.07692308,1.015884);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.9841157,-0.07692308,1.015884);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.9843686,0,1.015631);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.9843686,0,1.015631);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.983969,0.07692308,1.016031);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.983969,0.07692308,1.016031);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9843732,0.1538462,1.015627);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9843732,0.1538462,1.015627);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.984512,0.2307692,1.015488);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.984512,0.2307692,1.015488);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9838697,0.3076923,1.01613);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9838697,0.3076923,1.01613);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9844719,0.3846154,1.015528);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9844719,0.3846154,1.015528);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9850249,0.4615385,1.014975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9850249,0.4615385,1.014975);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9849213,0.5384615,1.015079);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9849213,0.5384615,1.015079);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9841281,0.6153846,1.015872);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9841281,0.6153846,1.015872);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9842768,0.6923077,1.015723);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9842768,0.6923077,1.015723);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9835061,0.7692308,1.016494);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9835061,0.7692308,1.016494);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9836211,0.8461538,1.016379);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9836211,0.8461538,1.016379);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.9801932,0.9230769,1.019807);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.9801932,0.9230769,1.019807);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9774446,1,1.022555);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9774446,1,1.022555);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis11[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata0.9862318526330.58120981444815 = new TH1F("setHistdata0.9862318526330.58120981444815","",26, xAxis11);
   setHistdata0.9862318526330.58120981444815->SetBinContent(1,1.017469);
   setHistdata0.9862318526330.58120981444815->SetBinContent(2,0.9987785);
   setHistdata0.9862318526330.58120981444815->SetBinContent(3,0.9908528);
   setHistdata0.9862318526330.58120981444815->SetBinContent(4,1.004002);
   setHistdata0.9862318526330.58120981444815->SetBinContent(5,0.9896546);
   setHistdata0.9862318526330.58120981444815->SetBinContent(6,1.016576);
   setHistdata0.9862318526330.58120981444815->SetBinContent(7,1.012591);
   setHistdata0.9862318526330.58120981444815->SetBinContent(8,1.007215);
   setHistdata0.9862318526330.58120981444815->SetBinContent(9,1.016266);
   setHistdata0.9862318526330.58120981444815->SetBinContent(10,1.001449);
   setHistdata0.9862318526330.58120981444815->SetBinContent(11,1.015288);
   setHistdata0.9862318526330.58120981444815->SetBinContent(12,1.020304);
   setHistdata0.9862318526330.58120981444815->SetBinContent(13,1.034842);
   setHistdata0.9862318526330.58120981444815->SetBinError(1,0.005789959);
   setHistdata0.9862318526330.58120981444815->SetBinError(2,0.004807546);
   setHistdata0.9862318526330.58120981444815->SetBinError(3,0.005118107);
   setHistdata0.9862318526330.58120981444815->SetBinError(4,0.005632557);
   setHistdata0.9862318526330.58120981444815->SetBinError(5,0.005953462);
   setHistdata0.9862318526330.58120981444815->SetBinError(6,0.006362303);
   setHistdata0.9862318526330.58120981444815->SetBinError(7,0.006586384);
   setHistdata0.9862318526330.58120981444815->SetBinError(8,0.006700486);
   setHistdata0.9862318526330.58120981444815->SetBinError(9,0.006929428);
   setHistdata0.9862318526330.58120981444815->SetBinError(10,0.006902116);
   setHistdata0.9862318526330.58120981444815->SetBinError(11,0.00703756);
   setHistdata0.9862318526330.58120981444815->SetBinError(12,0.007149166);
   setHistdata0.9862318526330.58120981444815->SetBinError(13,0.007303211);
   setHistdata0.9862318526330.58120981444815->SetEntries(346536);
   setHistdata0.9862318526330.58120981444815->SetFillStyle(0);
   setHistdata0.9862318526330.58120981444815->SetMarkerStyle(20);
   setHistdata0.9862318526330.58120981444815->SetMarkerSize(1.15);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetNdivisions(1005);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetLabelFont(43);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetLabelSize(32);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetTitleSize(35);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetTickLength(0.05);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.9862318526330.58120981444815->GetXaxis()->SetTitleFont(43);
   setHistdata0.9862318526330.58120981444815->GetYaxis()->SetNdivisions(506);
   setHistdata0.9862318526330.58120981444815->GetYaxis()->SetLabelFont(43);
   setHistdata0.9862318526330.58120981444815->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.9862318526330.58120981444815->GetYaxis()->SetLabelSize(32);
   setHistdata0.9862318526330.58120981444815->GetYaxis()->SetTitleSize(35);
   setHistdata0.9862318526330.58120981444815->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.9862318526330.58120981444815->GetYaxis()->SetTitleFont(43);
   setHistdata0.9862318526330.58120981444815->GetZaxis()->SetLabelFont(43);
   setHistdata0.9862318526330.58120981444815->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.9862318526330.58120981444815->GetZaxis()->SetLabelSize(32);
   setHistdata0.9862318526330.58120981444815->GetZaxis()->SetTitleSize(35);
   setHistdata0.9862318526330.58120981444815->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.9862318526330.58120981444815->GetZaxis()->SetTitleFont(43);
   setHistdata0.9862318526330.58120981444815->Draw("PESame");
   
   TF1 *axisLine0.3444140117922 = new TF1("axisLine0.344414011792","1",-1,1);
   axisLine0.3444140117922->SetFillColor(19);
   axisLine0.3444140117922->SetFillStyle(0);
   axisLine0.3444140117922->SetMarkerStyle(20);
   axisLine0.3444140117922->SetLineWidth(1);
   axisLine0.3444140117922->GetXaxis()->SetNdivisions(1005);
   axisLine0.3444140117922->GetXaxis()->SetLabelFont(43);
   axisLine0.3444140117922->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.3444140117922->GetXaxis()->SetLabelSize(32);
   axisLine0.3444140117922->GetXaxis()->SetTitleSize(35);
   axisLine0.3444140117922->GetXaxis()->SetTickLength(0.05);
   axisLine0.3444140117922->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.3444140117922->GetXaxis()->SetTitleFont(43);
   axisLine0.3444140117922->GetYaxis()->SetNdivisions(506);
   axisLine0.3444140117922->GetYaxis()->SetLabelFont(43);
   axisLine0.3444140117922->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.3444140117922->GetYaxis()->SetLabelSize(32);
   axisLine0.3444140117922->GetYaxis()->SetTitleSize(35);
   axisLine0.3444140117922->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.3444140117922->GetYaxis()->SetTitleFont(43);
   axisLine0.3444140117922->Draw("SameL");
   
   TH2F *axisRes0.116079541886_copy16 = new TH2F("axisRes0.116079541886_copy16","",50,-1,1,50,0.6,1.4);
   axisRes0.116079541886_copy16->SetDirectory(0);
   axisRes0.116079541886_copy16->SetMarkerStyle(20);
   axisRes0.116079541886_copy16->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes0.116079541886_copy16->GetXaxis()->SetNdivisions(1005);
   axisRes0.116079541886_copy16->GetXaxis()->SetLabelFont(43);
   axisRes0.116079541886_copy16->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.116079541886_copy16->GetXaxis()->SetLabelSize(32);
   axisRes0.116079541886_copy16->GetXaxis()->SetTitleSize(35);
   axisRes0.116079541886_copy16->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.116079541886_copy16->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.116079541886_copy16->GetXaxis()->SetTitleFont(43);
   axisRes0.116079541886_copy16->GetYaxis()->SetTitle("Data/MC");
   axisRes0.116079541886_copy16->GetYaxis()->SetNdivisions(406);
   axisRes0.116079541886_copy16->GetYaxis()->SetLabelFont(43);
   axisRes0.116079541886_copy16->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.116079541886_copy16->GetYaxis()->SetLabelSize(32);
   axisRes0.116079541886_copy16->GetYaxis()->SetTitleSize(35);
   axisRes0.116079541886_copy16->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.116079541886_copy16->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.116079541886_copy16->GetYaxis()->SetTitleFont(43);
   axisRes0.116079541886_copy16->GetZaxis()->SetLabelFont(43);
   axisRes0.116079541886_copy16->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.116079541886_copy16->GetZaxis()->SetLabelSize(32);
   axisRes0.116079541886_copy16->GetZaxis()->SetTitleSize(35);
   axisRes0.116079541886_copy16->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.116079541886_copy16->GetZaxis()->SetTitleFont(43);
   axisRes0.116079541886_copy16->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_1->Modified();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->cd();
  
// ------------>Primitives in pad: cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2
   TPad *cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2 = new TPad("cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2", "",0,0,1,1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->Draw();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->cd();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->Range(-1.466667,-37944.74,1.866667,70468.8);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetFillColor(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetFillStyle(4000);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetBorderMode(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetBorderSize(2);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetTickx(1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetTicky(1);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetLeftMargin(0.14);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetRightMargin(0.26);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetTopMargin(0.08);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetBottomMargin(0.35);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetFrameBorderMode(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetFrameFillStyle(0);
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->SetFrameBorderMode(0);
   
   TH2F *axis0.07770922118617 = new TH2F("axis0.07770922118617","",50,-1,1,50,0,61795.71);
   axis0.07770922118617->SetMarkerStyle(20);
   axis0.07770922118617->GetXaxis()->SetNdivisions(1005);
   axis0.07770922118617->GetXaxis()->SetLabelFont(43);
   axis0.07770922118617->GetXaxis()->SetLabelOffset(0.0105);
   axis0.07770922118617->GetXaxis()->SetLabelSize(0);
   axis0.07770922118617->GetXaxis()->SetTitleSize(35);
   axis0.07770922118617->GetXaxis()->SetTickLength(0.025);
   axis0.07770922118617->GetXaxis()->SetTitleOffset(1.135);
   axis0.07770922118617->GetXaxis()->SetTitleFont(43);
   axis0.07770922118617->GetYaxis()->SetTitle("Events / bin");
   axis0.07770922118617->GetYaxis()->SetNdivisions(506);
   axis0.07770922118617->GetYaxis()->SetLabelFont(43);
   axis0.07770922118617->GetYaxis()->SetLabelOffset(0.0087);
   axis0.07770922118617->GetYaxis()->SetLabelSize(32);
   axis0.07770922118617->GetYaxis()->SetTitleSize(35);
   axis0.07770922118617->GetYaxis()->SetTickLength(0.02631579);
   axis0.07770922118617->GetYaxis()->SetTitleOffset(1.32);
   axis0.07770922118617->GetYaxis()->SetTitleFont(43);
   axis0.07770922118617->GetZaxis()->SetLabelFont(43);
   axis0.07770922118617->GetZaxis()->SetLabelOffset(0.0087);
   axis0.07770922118617->GetZaxis()->SetLabelSize(32);
   axis0.07770922118617->GetZaxis()->SetTitleSize(35);
   axis0.07770922118617->GetZaxis()->SetTitleOffset(1.32);
   axis0.07770922118617->GetZaxis()->SetTitleFont(43);
   axis0.07770922118617->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis12[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *_stack_1_stack_2 = new TH1F("_stack_1_stack_2","",26, xAxis12);
   _stack_1_stack_2->SetMinimum(0);
   _stack_1_stack_2->SetMaximum(45374.47);
   _stack_1_stack_2->SetDirectory(0);
   _stack_1_stack_2->SetStats(0);
   _stack_1_stack_2->SetMarkerStyle(20);
   _stack_1_stack_2->GetXaxis()->SetNdivisions(1005);
   _stack_1_stack_2->GetXaxis()->SetLabelFont(43);
   _stack_1_stack_2->GetXaxis()->SetLabelOffset(0.0105);
   _stack_1_stack_2->GetXaxis()->SetLabelSize(32);
   _stack_1_stack_2->GetXaxis()->SetTitleSize(35);
   _stack_1_stack_2->GetXaxis()->SetTickLength(0.05);
   _stack_1_stack_2->GetXaxis()->SetTitleOffset(1.135);
   _stack_1_stack_2->GetXaxis()->SetTitleFont(43);
   _stack_1_stack_2->GetYaxis()->SetNdivisions(506);
   _stack_1_stack_2->GetYaxis()->SetLabelFont(43);
   _stack_1_stack_2->GetYaxis()->SetLabelOffset(0.0087);
   _stack_1_stack_2->GetYaxis()->SetLabelSize(32);
   _stack_1_stack_2->GetYaxis()->SetTitleSize(35);
   _stack_1_stack_2->GetYaxis()->SetTitleOffset(1.32);
   _stack_1_stack_2->GetYaxis()->SetTitleFont(43);
   _stack_1_stack_2->GetZaxis()->SetLabelFont(43);
   _stack_1_stack_2->GetZaxis()->SetLabelOffset(0.0087);
   _stack_1_stack_2->GetZaxis()->SetLabelSize(32);
   _stack_1_stack_2->GetZaxis()->SetTitleSize(35);
   _stack_1_stack_2->GetZaxis()->SetTitleOffset(1.32);
   _stack_1_stack_2->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_1_stack_2);
   
   Double_t xAxis13[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHisttChannel0.41824586837918 = new TH1F("setHisttChannel0.41824586837918","",26, xAxis13);
   setHisttChannel0.41824586837918->SetBinContent(1,401.0641);
   setHisttChannel0.41824586837918->SetBinContent(2,866.533);
   setHisttChannel0.41824586837918->SetBinContent(3,1025.914);
   setHisttChannel0.41824586837918->SetBinContent(4,1113.033);
   setHisttChannel0.41824586837918->SetBinContent(5,1193.462);
   setHisttChannel0.41824586837918->SetBinContent(6,1254.19);
   setHisttChannel0.41824586837918->SetBinContent(7,1328.163);
   setHisttChannel0.41824586837918->SetBinContent(8,1414.467);
   setHisttChannel0.41824586837918->SetBinContent(9,1492.311);
   setHisttChannel0.41824586837918->SetBinContent(10,1585.126);
   setHisttChannel0.41824586837918->SetBinContent(11,1723.19);
   setHisttChannel0.41824586837918->SetBinContent(12,1836.745);
   setHisttChannel0.41824586837918->SetBinContent(13,1977.921);
   setHisttChannel0.41824586837918->SetBinContent(14,2107.096);
   setHisttChannel0.41824586837918->SetBinContent(15,2270.459);
   setHisttChannel0.41824586837918->SetBinContent(16,2414.419);
   setHisttChannel0.41824586837918->SetBinContent(17,2614.079);
   setHisttChannel0.41824586837918->SetBinContent(18,2822.556);
   setHisttChannel0.41824586837918->SetBinContent(19,3037.828);
   setHisttChannel0.41824586837918->SetBinContent(20,3300.014);
   setHisttChannel0.41824586837918->SetBinContent(21,3600.587);
   setHisttChannel0.41824586837918->SetBinContent(22,3867.746);
   setHisttChannel0.41824586837918->SetBinContent(23,4150.354);
   setHisttChannel0.41824586837918->SetBinContent(24,4631.816);
   setHisttChannel0.41824586837918->SetBinContent(25,4994.092);
   setHisttChannel0.41824586837918->SetBinContent(26,4030.587);
   setHisttChannel0.41824586837918->SetBinError(1,5.426774);
   setHisttChannel0.41824586837918->SetBinError(2,7.955441);
   setHisttChannel0.41824586837918->SetBinError(3,8.635069);
   setHisttChannel0.41824586837918->SetBinError(4,8.997067);
   setHisttChannel0.41824586837918->SetBinError(5,9.306366);
   setHisttChannel0.41824586837918->SetBinError(6,9.526888);
   setHisttChannel0.41824586837918->SetBinError(7,9.796567);
   setHisttChannel0.41824586837918->SetBinError(8,10.10509);
   setHisttChannel0.41824586837918->SetBinError(9,10.38143);
   setHisttChannel0.41824586837918->SetBinError(10,10.69613);
   setHisttChannel0.41824586837918->SetBinError(11,11.14457);
   setHisttChannel0.41824586837918->SetBinError(12,11.49749);
   setHisttChannel0.41824586837918->SetBinError(13,11.92873);
   setHisttChannel0.41824586837918->SetBinError(14,12.31135);
   setHisttChannel0.41824586837918->SetBinError(15,12.77796);
   setHisttChannel0.41824586837918->SetBinError(16,13.17788);
   setHisttChannel0.41824586837918->SetBinError(17,13.7111);
   setHisttChannel0.41824586837918->SetBinError(18,14.24352);
   setHisttChannel0.41824586837918->SetBinError(19,14.77344);
   setHisttChannel0.41824586837918->SetBinError(20,15.39276);
   setHisttChannel0.41824586837918->SetBinError(21,16.07756);
   setHisttChannel0.41824586837918->SetBinError(22,16.65533);
   setHisttChannel0.41824586837918->SetBinError(23,17.23756);
   setHisttChannel0.41824586837918->SetBinError(24,18.20702);
   setHisttChannel0.41824586837918->SetBinError(25,18.89688);
   setHisttChannel0.41824586837918->SetBinError(26,16.96173);
   setHisttChannel0.41824586837918->SetEntries(908765);
   setHisttChannel0.41824586837918->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.41824586837918->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.41824586837918->SetLineColor(ci);
   setHisttChannel0.41824586837918->SetLineWidth(2);
   setHisttChannel0.41824586837918->SetMarkerStyle(20);
   setHisttChannel0.41824586837918->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.41824586837918->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.41824586837918->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.41824586837918->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.41824586837918->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.41824586837918->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.41824586837918->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.41824586837918->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.41824586837918->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.41824586837918->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.41824586837918->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.41824586837918->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.41824586837918->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.41824586837918->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.41824586837918->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.41824586837918->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.41824586837918->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.41824586837918->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.41824586837918->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.41824586837918->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.41824586837918->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.418245868379,"HIST F");
   Double_t xAxis14[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHisttWChannel0.1185068839919 = new TH1F("setHisttWChannel0.1185068839919","",26, xAxis14);
   setHisttWChannel0.1185068839919->SetBinContent(1,1275.76);
   setHisttWChannel0.1185068839919->SetBinContent(2,2362.242);
   setHisttWChannel0.1185068839919->SetBinContent(3,2075.633);
   setHisttWChannel0.1185068839919->SetBinContent(4,1702.91);
   setHisttWChannel0.1185068839919->SetBinContent(5,1465.696);
   setHisttWChannel0.1185068839919->SetBinContent(6,1313.037);
   setHisttWChannel0.1185068839919->SetBinContent(7,1209.81);
   setHisttWChannel0.1185068839919->SetBinContent(8,1152.402);
   setHisttWChannel0.1185068839919->SetBinContent(9,1145.004);
   setHisttWChannel0.1185068839919->SetBinContent(10,1081.627);
   setHisttWChannel0.1185068839919->SetBinContent(11,1083.752);
   setHisttWChannel0.1185068839919->SetBinContent(12,1067.479);
   setHisttWChannel0.1185068839919->SetBinContent(13,1049.198);
   setHisttWChannel0.1185068839919->SetBinContent(14,1038.735);
   setHisttWChannel0.1185068839919->SetBinContent(15,988.2337);
   setHisttWChannel0.1185068839919->SetBinContent(16,992.1881);
   setHisttWChannel0.1185068839919->SetBinContent(17,1010.26);
   setHisttWChannel0.1185068839919->SetBinContent(18,956.2314);
   setHisttWChannel0.1185068839919->SetBinContent(19,927.1711);
   setHisttWChannel0.1185068839919->SetBinContent(20,936.519);
   setHisttWChannel0.1185068839919->SetBinContent(21,855.6277);
   setHisttWChannel0.1185068839919->SetBinContent(22,752.5878);
   setHisttWChannel0.1185068839919->SetBinContent(23,541.5658);
   setHisttWChannel0.1185068839919->SetBinContent(24,402.5639);
   setHisttWChannel0.1185068839919->SetBinContent(25,253.1653);
   setHisttWChannel0.1185068839919->SetBinContent(26,104.8105);
   setHisttWChannel0.1185068839919->SetBinError(1,15.00673);
   setHisttWChannel0.1185068839919->SetBinError(2,20.45723);
   setHisttWChannel0.1185068839919->SetBinError(3,19.16791);
   setHisttWChannel0.1185068839919->SetBinError(4,17.33753);
   setHisttWChannel0.1185068839919->SetBinError(5,16.08063);
   setHisttWChannel0.1185068839919->SetBinError(6,15.2109);
   setHisttWChannel0.1185068839919->SetBinError(7,14.59575);
   setHisttWChannel0.1185068839919->SetBinError(8,14.22625);
   setHisttWChannel0.1185068839919->SetBinError(9,14.18312);
   setHisttWChannel0.1185068839919->SetBinError(10,13.7709);
   setHisttWChannel0.1185068839919->SetBinError(11,13.80495);
   setHisttWChannel0.1185068839919->SetBinError(12,13.68986);
   setHisttWChannel0.1185068839919->SetBinError(13,13.56507);
   setHisttWChannel0.1185068839919->SetBinError(14,13.50813);
   setHisttWChannel0.1185068839919->SetBinError(15,13.16601);
   setHisttWChannel0.1185068839919->SetBinError(16,13.2016);
   setHisttWChannel0.1185068839919->SetBinError(17,13.32562);
   setHisttWChannel0.1185068839919->SetBinError(18,12.93778);
   setHisttWChannel0.1185068839919->SetBinError(19,12.75159);
   setHisttWChannel0.1185068839919->SetBinError(20,12.82365);
   setHisttWChannel0.1185068839919->SetBinError(21,12.27632);
   setHisttWChannel0.1185068839919->SetBinError(22,11.49752);
   setHisttWChannel0.1185068839919->SetBinError(23,9.744937);
   setHisttWChannel0.1185068839919->SetBinError(24,8.425193);
   setHisttWChannel0.1185068839919->SetBinError(25,6.647863);
   setHisttWChannel0.1185068839919->SetBinError(26,4.292006);
   setHisttWChannel0.1185068839919->SetEntries(168921);
   setHisttWChannel0.1185068839919->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWChannel0.1185068839919->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWChannel0.1185068839919->SetLineColor(ci);
   setHisttWChannel0.1185068839919->SetLineWidth(2);
   setHisttWChannel0.1185068839919->SetMarkerStyle(20);
   setHisttWChannel0.1185068839919->GetXaxis()->SetNdivisions(1005);
   setHisttWChannel0.1185068839919->GetXaxis()->SetLabelFont(43);
   setHisttWChannel0.1185068839919->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWChannel0.1185068839919->GetXaxis()->SetLabelSize(32);
   setHisttWChannel0.1185068839919->GetXaxis()->SetTitleSize(35);
   setHisttWChannel0.1185068839919->GetXaxis()->SetTickLength(0.05);
   setHisttWChannel0.1185068839919->GetXaxis()->SetTitleOffset(1.135);
   setHisttWChannel0.1185068839919->GetXaxis()->SetTitleFont(43);
   setHisttWChannel0.1185068839919->GetYaxis()->SetNdivisions(506);
   setHisttWChannel0.1185068839919->GetYaxis()->SetLabelFont(43);
   setHisttWChannel0.1185068839919->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.1185068839919->GetYaxis()->SetLabelSize(32);
   setHisttWChannel0.1185068839919->GetYaxis()->SetTitleSize(35);
   setHisttWChannel0.1185068839919->GetYaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.1185068839919->GetYaxis()->SetTitleFont(43);
   setHisttWChannel0.1185068839919->GetZaxis()->SetLabelFont(43);
   setHisttWChannel0.1185068839919->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.1185068839919->GetZaxis()->SetLabelSize(32);
   setHisttWChannel0.1185068839919->GetZaxis()->SetTitleSize(35);
   setHisttWChannel0.1185068839919->GetZaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.1185068839919->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWChannel0.11850688399,"HIST F");
   Double_t xAxis15[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistTTJets0.74746416456320 = new TH1F("setHistTTJets0.74746416456320","",26, xAxis15);
   setHistTTJets0.74746416456320->SetBinContent(1,9859.122);
   setHistTTJets0.74746416456320->SetBinContent(2,18831.94);
   setHistTTJets0.74746416456320->SetBinContent(3,17315.96);
   setHistTTJets0.74746416456320->SetBinContent(4,14251.15);
   setHistTTJets0.74746416456320->SetBinContent(5,12819.35);
   setHistTTJets0.74746416456320->SetBinContent(6,11686.51);
   setHistTTJets0.74746416456320->SetBinContent(7,11086.93);
   setHistTTJets0.74746416456320->SetBinContent(8,10865.33);
   setHistTTJets0.74746416456320->SetBinContent(9,10344.71);
   setHistTTJets0.74746416456320->SetBinContent(10,10128.63);
   setHistTTJets0.74746416456320->SetBinContent(11,10132.44);
   setHistTTJets0.74746416456320->SetBinContent(12,9955.654);
   setHistTTJets0.74746416456320->SetBinContent(13,9871.457);
   setHistTTJets0.74746416456320->SetBinContent(14,9692.825);
   setHistTTJets0.74746416456320->SetBinContent(15,9706.36);
   setHistTTJets0.74746416456320->SetBinContent(16,9700.168);
   setHistTTJets0.74746416456320->SetBinContent(17,9393.591);
   setHistTTJets0.74746416456320->SetBinContent(18,9404.091);
   setHistTTJets0.74746416456320->SetBinContent(19,9146.312);
   setHistTTJets0.74746416456320->SetBinContent(20,8976.748);
   setHistTTJets0.74746416456320->SetBinContent(21,8533.548);
   setHistTTJets0.74746416456320->SetBinContent(22,7498.909);
   setHistTTJets0.74746416456320->SetBinContent(23,6212.785);
   setHistTTJets0.74746416456320->SetBinContent(24,4721.74);
   setHistTTJets0.74746416456320->SetBinContent(25,3164.807);
   setHistTTJets0.74746416456320->SetBinContent(26,1164.286);
   setHistTTJets0.74746416456320->SetBinError(1,60.64544);
   setHistTTJets0.74746416456320->SetBinError(2,83.97841);
   setHistTTJets0.74746416456320->SetBinError(3,80.56343);
   setHistTTJets0.74746416456320->SetBinError(4,73.06719);
   setHistTTJets0.74746416456320->SetBinError(5,69.2883);
   setHistTTJets0.74746416456320->SetBinError(6,66.16623);
   setHistTTJets0.74746416456320->SetBinError(7,64.44456);
   setHistTTJets0.74746416456320->SetBinError(8,63.75791);
   setHistTTJets0.74746416456320->SetBinError(9,62.26048);
   setHistTTJets0.74746416456320->SetBinError(10,61.56687);
   setHistTTJets0.74746416456320->SetBinError(11,61.5379);
   setHistTTJets0.74746416456320->SetBinError(12,61.04063);
   setHistTTJets0.74746416456320->SetBinError(13,60.75599);
   setHistTTJets0.74746416456320->SetBinError(14,60.18594);
   setHistTTJets0.74746416456320->SetBinError(15,60.28141);
   setHistTTJets0.74746416456320->SetBinError(16,60.2978);
   setHistTTJets0.74746416456320->SetBinError(17,59.25509);
   setHistTTJets0.74746416456320->SetBinError(18,59.32923);
   setHistTTJets0.74746416456320->SetBinError(19,58.51252);
   setHistTTJets0.74746416456320->SetBinError(20,57.92746);
   setHistTTJets0.74746416456320->SetBinError(21,56.49397);
   setHistTTJets0.74746416456320->SetBinError(22,52.89153);
   setHistTTJets0.74746416456320->SetBinError(23,48.14028);
   setHistTTJets0.74746416456320->SetBinError(24,41.86627);
   setHistTTJets0.74746416456320->SetBinError(25,34.16452);
   setHistTTJets0.74746416456320->SetBinError(26,20.67616);
   setHistTTJets0.74746416456320->SetEntries(729770);
   setHistTTJets0.74746416456320->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.74746416456320->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.74746416456320->SetLineColor(ci);
   setHistTTJets0.74746416456320->SetLineWidth(2);
   setHistTTJets0.74746416456320->SetMarkerStyle(20);
   setHistTTJets0.74746416456320->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.74746416456320->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.74746416456320->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.74746416456320->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.74746416456320->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.74746416456320->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.74746416456320->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.74746416456320->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.74746416456320->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.74746416456320->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.74746416456320->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.74746416456320->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.74746416456320->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.74746416456320->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.74746416456320->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.74746416456320->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.74746416456320->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.74746416456320->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.74746416456320->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.74746416456320->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.74746416456320->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.747464164563,"HIST F");
   Double_t xAxis16[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexHF0.75424808978721 = new TH1F("setHistWJetsAMCexHF0.75424808978721","",26, xAxis16);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(1,8902.931);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(2,9906.053);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(3,7151.736);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(4,6215.577);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(5,5023.597);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(6,4295.421);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(7,4085.631);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(8,3497.26);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(9,3139.315);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(10,3039.5);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(11,3029.69);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(12,2789.635);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(13,2610.354);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(14,2729.618);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(15,2622.123);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(16,2287.169);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(17,2133.897);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(18,1716.095);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(19,2315.783);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(20,1850.987);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(21,1937.454);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(22,1569.092);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(23,1338.436);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(24,1405.829);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(25,758.2268);
   setHistWJetsAMCexHF0.75424808978721->SetBinContent(26,256.856);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(1,484.011);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(2,507.0511);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(3,437.5893);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(4,385.5402);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(5,351.1817);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(6,329.0032);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(7,312.5622);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(8,305.3562);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(9,284.4276);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(10,271.6559);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(11,265.9777);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(12,262.4407);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(13,250.9237);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(14,250.8019);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(15,243.8704);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(16,238.3075);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(17,235.6299);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(18,224.9512);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(19,225.7345);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(20,215.9183);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(21,209.7156);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(22,193.7557);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(23,184.505);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(24,171.3422);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(25,150.9082);
   setHistWJetsAMCexHF0.75424808978721->SetBinError(26,107.2614);
   setHistWJetsAMCexHF0.75424808978721->SetEntries(33788);
   setHistWJetsAMCexHF0.75424808978721->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsAMCexHF0.75424808978721->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsAMCexHF0.75424808978721->SetLineColor(ci);
   setHistWJetsAMCexHF0.75424808978721->SetLineWidth(2);
   setHistWJetsAMCexHF0.75424808978721->SetMarkerStyle(20);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexHF0.75424808978721->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF0.75424808978721->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexHF0.75424808978721->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF0.75424808978721->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF0.75424808978721->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF0.75424808978721->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF0.75424808978721->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF0.75424808978721->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF0.75424808978721->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF0.75424808978721->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF0.75424808978721->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF0.75424808978721->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF0.75424808978721->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF0.75424808978721->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexHF0.754248089787,"HIST F");
   Double_t xAxis17[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexLF0.94603386890822 = new TH1F("setHistWJetsAMCexLF0.94603386890822","",26, xAxis17);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(1,4913.171);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(2,3698.61);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(3,3045.242);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(4,2003.984);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(5,1805.018);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(6,1423.585);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(7,1022.757);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(8,1193.832);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(9,886.6203);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(10,1362.773);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(11,806.9478);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(12,763.3674);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(13,572.2933);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(14,871.7788);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(15,913.9655);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(16,720.6551);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(17,640.1188);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(18,716.4385);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(19,549.0548);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(20,393.8877);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(21,546.6105);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(22,612.6957);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(23,495.7039);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(24,385.0408);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(25,182.0567);
   setHistWJetsAMCexLF0.94603386890822->SetBinContent(26,199.3595);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(1,408.8775);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(2,313.1162);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(3,291.4279);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(4,230.2501);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(5,234.4657);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(6,201.4299);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(7,190.3829);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(8,192.5026);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(9,167.3539);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(10,217.3156);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(11,134.3253);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(12,141.8101);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(13,139.3892);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(14,163.399);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(15,157.1823);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(16,146.5315);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(17,155.9058);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(18,136.2632);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(19,122.1903);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(20,119.0517);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(21,150.1927);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(22,129.6621);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(23,107.6034);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(24,85.17577);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(25,109.9003);
   setHistWJetsAMCexLF0.94603386890822->SetBinError(26,70.72078);
   setHistWJetsAMCexLF0.94603386890822->SetEntries(8055);
   setHistWJetsAMCexLF0.94603386890822->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsAMCexLF0.94603386890822->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsAMCexLF0.94603386890822->SetLineColor(ci);
   setHistWJetsAMCexLF0.94603386890822->SetLineWidth(2);
   setHistWJetsAMCexLF0.94603386890822->SetMarkerStyle(20);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexLF0.94603386890822->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF0.94603386890822->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexLF0.94603386890822->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF0.94603386890822->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF0.94603386890822->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF0.94603386890822->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF0.94603386890822->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF0.94603386890822->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF0.94603386890822->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF0.94603386890822->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF0.94603386890822->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF0.94603386890822->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF0.94603386890822->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF0.94603386890822->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexLF0.946033868908,"HIST F");
   Double_t xAxis18[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistDY0.32176423189223 = new TH1F("setHistDY0.32176423189223","",26, xAxis18);
   setHistDY0.32176423189223->SetBinContent(1,1101.121);
   setHistDY0.32176423189223->SetBinContent(2,1458.991);
   setHistDY0.32176423189223->SetBinContent(3,1309.991);
   setHistDY0.32176423189223->SetBinContent(4,1168.046);
   setHistDY0.32176423189223->SetBinContent(5,1002.149);
   setHistDY0.32176423189223->SetBinContent(6,1056.193);
   setHistDY0.32176423189223->SetBinContent(7,919.4375);
   setHistDY0.32176423189223->SetBinContent(8,866.1761);
   setHistDY0.32176423189223->SetBinContent(9,887.9177);
   setHistDY0.32176423189223->SetBinContent(10,732.5784);
   setHistDY0.32176423189223->SetBinContent(11,785.1934);
   setHistDY0.32176423189223->SetBinContent(12,725.052);
   setHistDY0.32176423189223->SetBinContent(13,621.1048);
   setHistDY0.32176423189223->SetBinContent(14,706.6907);
   setHistDY0.32176423189223->SetBinContent(15,731.7263);
   setHistDY0.32176423189223->SetBinContent(16,562.6356);
   setHistDY0.32176423189223->SetBinContent(17,514.0478);
   setHistDY0.32176423189223->SetBinContent(18,506.0724);
   setHistDY0.32176423189223->SetBinContent(19,484.6704);
   setHistDY0.32176423189223->SetBinContent(20,535.7907);
   setHistDY0.32176423189223->SetBinContent(21,359.4818);
   setHistDY0.32176423189223->SetBinContent(22,323.9248);
   setHistDY0.32176423189223->SetBinContent(23,255.1222);
   setHistDY0.32176423189223->SetBinContent(24,222.5363);
   setHistDY0.32176423189223->SetBinContent(25,171.6331);
   setHistDY0.32176423189223->SetBinContent(26,69.78777);
   setHistDY0.32176423189223->SetBinError(1,83.21606);
   setHistDY0.32176423189223->SetBinError(2,101.4764);
   setHistDY0.32176423189223->SetBinError(3,101.0381);
   setHistDY0.32176423189223->SetBinError(4,83.74258);
   setHistDY0.32176423189223->SetBinError(5,76.46735);
   setHistDY0.32176423189223->SetBinError(6,90.83888);
   setHistDY0.32176423189223->SetBinError(7,79.35872);
   setHistDY0.32176423189223->SetBinError(8,68.92233);
   setHistDY0.32176423189223->SetBinError(9,72.75948);
   setHistDY0.32176423189223->SetBinError(10,71.00027);
   setHistDY0.32176423189223->SetBinError(11,74.98021);
   setHistDY0.32176423189223->SetBinError(12,80.76117);
   setHistDY0.32176423189223->SetBinError(13,63.82743);
   setHistDY0.32176423189223->SetBinError(14,72.09325);
   setHistDY0.32176423189223->SetBinError(15,73.11105);
   setHistDY0.32176423189223->SetBinError(16,54.51133);
   setHistDY0.32176423189223->SetBinError(17,54.41251);
   setHistDY0.32176423189223->SetBinError(18,60.99446);
   setHistDY0.32176423189223->SetBinError(19,54.71318);
   setHistDY0.32176423189223->SetBinError(20,59.58726);
   setHistDY0.32176423189223->SetBinError(21,46.3372);
   setHistDY0.32176423189223->SetBinError(22,44.57243);
   setHistDY0.32176423189223->SetBinError(23,49.73142);
   setHistDY0.32176423189223->SetBinError(24,38.62581);
   setHistDY0.32176423189223->SetBinError(25,35.65169);
   setHistDY0.32176423189223->SetBinError(26,25.36803);
   setHistDY0.32176423189223->SetEntries(4272);
   setHistDY0.32176423189223->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.32176423189223->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.32176423189223->SetLineColor(ci);
   setHistDY0.32176423189223->SetLineWidth(2);
   setHistDY0.32176423189223->SetMarkerStyle(20);
   setHistDY0.32176423189223->GetXaxis()->SetNdivisions(1005);
   setHistDY0.32176423189223->GetXaxis()->SetLabelFont(43);
   setHistDY0.32176423189223->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.32176423189223->GetXaxis()->SetLabelSize(32);
   setHistDY0.32176423189223->GetXaxis()->SetTitleSize(35);
   setHistDY0.32176423189223->GetXaxis()->SetTickLength(0.05);
   setHistDY0.32176423189223->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.32176423189223->GetXaxis()->SetTitleFont(43);
   setHistDY0.32176423189223->GetYaxis()->SetNdivisions(506);
   setHistDY0.32176423189223->GetYaxis()->SetLabelFont(43);
   setHistDY0.32176423189223->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.32176423189223->GetYaxis()->SetLabelSize(32);
   setHistDY0.32176423189223->GetYaxis()->SetTitleSize(35);
   setHistDY0.32176423189223->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.32176423189223->GetYaxis()->SetTitleFont(43);
   setHistDY0.32176423189223->GetZaxis()->SetLabelFont(43);
   setHistDY0.32176423189223->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.32176423189223->GetZaxis()->SetLabelSize(32);
   setHistDY0.32176423189223->GetZaxis()->SetTitleSize(35);
   setHistDY0.32176423189223->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.32176423189223->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.321764231892,"HIST F");
   Double_t xAxis19[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistQCD_DD0.69108490824424 = new TH1F("setHistQCD_DD0.69108490824424","",26, xAxis19);
   setHistQCD_DD0.69108490824424->SetBinContent(1,3897.635);
   setHistQCD_DD0.69108490824424->SetBinContent(2,6089.419);
   setHistQCD_DD0.69108490824424->SetBinContent(3,5901.529);
   setHistQCD_DD0.69108490824424->SetBinContent(4,5191.647);
   setHistQCD_DD0.69108490824424->SetBinContent(5,4612.587);
   setHistQCD_DD0.69108490824424->SetBinContent(6,4084.786);
   setHistQCD_DD0.69108490824424->SetBinContent(7,3689.375);
   setHistQCD_DD0.69108490824424->SetBinContent(8,3444.671);
   setHistQCD_DD0.69108490824424->SetBinContent(9,3268.845);
   setHistQCD_DD0.69108490824424->SetBinContent(10,3091.305);
   setHistQCD_DD0.69108490824424->SetBinContent(11,2938.38);
   setHistQCD_DD0.69108490824424->SetBinContent(12,2824.744);
   setHistQCD_DD0.69108490824424->SetBinContent(13,2699.667);
   setHistQCD_DD0.69108490824424->SetBinContent(14,2572.67);
   setHistQCD_DD0.69108490824424->SetBinContent(15,2431.678);
   setHistQCD_DD0.69108490824424->SetBinContent(16,2261.859);
   setHistQCD_DD0.69108490824424->SetBinContent(17,2022.079);
   setHistQCD_DD0.69108490824424->SetBinContent(18,1805.688);
   setHistQCD_DD0.69108490824424->SetBinContent(19,1620.607);
   setHistQCD_DD0.69108490824424->SetBinContent(20,1382.891);
   setHistQCD_DD0.69108490824424->SetBinContent(21,1168.233);
   setHistQCD_DD0.69108490824424->SetBinContent(22,943.9773);
   setHistQCD_DD0.69108490824424->SetBinContent(23,716.4623);
   setHistQCD_DD0.69108490824424->SetBinContent(24,535.2872);
   setHistQCD_DD0.69108490824424->SetBinContent(25,299.8389);
   setHistQCD_DD0.69108490824424->SetBinContent(26,114.245);
   setHistQCD_DD0.69108490824424->SetBinError(1,40.45887);
   setHistQCD_DD0.69108490824424->SetBinError(2,46.88948);
   setHistQCD_DD0.69108490824424->SetBinError(3,48.16921);
   setHistQCD_DD0.69108490824424->SetBinError(4,42.57314);
   setHistQCD_DD0.69108490824424->SetBinError(5,40.17662);
   setHistQCD_DD0.69108490824424->SetBinError(6,38.49785);
   setHistQCD_DD0.69108490824424->SetBinError(7,40.66246);
   setHistQCD_DD0.69108490824424->SetBinError(8,37.73452);
   setHistQCD_DD0.69108490824424->SetBinError(9,33.87129);
   setHistQCD_DD0.69108490824424->SetBinError(10,34.01736);
   setHistQCD_DD0.69108490824424->SetBinError(11,32.58983);
   setHistQCD_DD0.69108490824424->SetBinError(12,31.53337);
   setHistQCD_DD0.69108490824424->SetBinError(13,38.67059);
   setHistQCD_DD0.69108490824424->SetBinError(14,34.3321);
   setHistQCD_DD0.69108490824424->SetBinError(15,30.58079);
   setHistQCD_DD0.69108490824424->SetBinError(16,28.71374);
   setHistQCD_DD0.69108490824424->SetBinError(17,27.13101);
   setHistQCD_DD0.69108490824424->SetBinError(18,26.67503);
   setHistQCD_DD0.69108490824424->SetBinError(19,25.14471);
   setHistQCD_DD0.69108490824424->SetBinError(20,23.51739);
   setHistQCD_DD0.69108490824424->SetBinError(21,23.0443);
   setHistQCD_DD0.69108490824424->SetBinError(22,19.39585);
   setHistQCD_DD0.69108490824424->SetBinError(23,18.30447);
   setHistQCD_DD0.69108490824424->SetBinError(24,18.91498);
   setHistQCD_DD0.69108490824424->SetBinError(25,13.03976);
   setHistQCD_DD0.69108490824424->SetBinError(26,8.147116);
   setHistQCD_DD0.69108490824424->SetEntries(391962);
   setHistQCD_DD0.69108490824424->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.69108490824424->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.69108490824424->SetLineColor(ci);
   setHistQCD_DD0.69108490824424->SetLineWidth(2);
   setHistQCD_DD0.69108490824424->SetMarkerStyle(20);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.69108490824424->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.69108490824424->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.69108490824424->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.69108490824424->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.69108490824424->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.69108490824424->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.69108490824424->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.69108490824424->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.69108490824424->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.69108490824424->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.69108490824424->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.69108490824424->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.69108490824424->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.69108490824424->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.691084908244,"HIST F");
   ->Draw("same");
   Double_t xAxis20[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata0.98623185263325 = new TH1F("setHistdata0.98623185263325","",26, xAxis20);
   setHistdata0.98623185263325->SetBinContent(1,30881);
   setHistdata0.98623185263325->SetBinContent(2,43161);
   setHistdata0.98623185263325->SetBinContent(3,37480);
   setHistdata0.98623185263325->SetBinContent(4,31773);
   setHistdata0.98623185263325->SetBinContent(5,27633);
   setHistdata0.98623185263325->SetBinContent(6,25530);
   setHistdata0.98623185263325->SetBinContent(7,23636);
   setHistdata0.98623185263325->SetBinContent(8,22596);
   setHistdata0.98623185263325->SetBinContent(9,21509);
   setHistdata0.98623185263325->SetBinContent(10,21052);
   setHistdata0.98623185263325->SetBinContent(11,20813);
   setHistdata0.98623185263325->SetBinContent(12,20368);
   setHistdata0.98623185263325->SetBinContent(13,20078);
   setHistdata0.98623185263325->SetBinError(1,175.7299);
   setHistdata0.98623185263325->SetBinError(2,207.7523);
   setHistdata0.98623185263325->SetBinError(3,193.5975);
   setHistdata0.98623185263325->SetBinError(4,178.2498);
   setHistdata0.98623185263325->SetBinError(5,166.2318);
   setHistdata0.98623185263325->SetBinError(6,159.7811);
   setHistdata0.98623185263325->SetBinError(7,153.74);
   setHistdata0.98623185263325->SetBinError(8,150.3197);
   setHistdata0.98623185263325->SetBinError(9,146.6595);
   setHistdata0.98623185263325->SetBinError(10,145.0931);
   setHistdata0.98623185263325->SetBinError(11,144.2671);
   setHistdata0.98623185263325->SetBinError(12,142.7165);
   setHistdata0.98623185263325->SetBinError(13,141.6969);
   setHistdata0.98623185263325->SetEntries(346510);
   setHistdata0.98623185263325->SetFillStyle(0);
   setHistdata0.98623185263325->SetMarkerStyle(20);
   setHistdata0.98623185263325->SetMarkerSize(1.15);
   setHistdata0.98623185263325->GetXaxis()->SetNdivisions(1005);
   setHistdata0.98623185263325->GetXaxis()->SetLabelFont(43);
   setHistdata0.98623185263325->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.98623185263325->GetXaxis()->SetLabelSize(32);
   setHistdata0.98623185263325->GetXaxis()->SetTitleSize(35);
   setHistdata0.98623185263325->GetXaxis()->SetTickLength(0.05);
   setHistdata0.98623185263325->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.98623185263325->GetXaxis()->SetTitleFont(43);
   setHistdata0.98623185263325->GetYaxis()->SetNdivisions(506);
   setHistdata0.98623185263325->GetYaxis()->SetLabelFont(43);
   setHistdata0.98623185263325->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.98623185263325->GetYaxis()->SetLabelSize(32);
   setHistdata0.98623185263325->GetYaxis()->SetTitleSize(35);
   setHistdata0.98623185263325->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.98623185263325->GetYaxis()->SetTitleFont(43);
   setHistdata0.98623185263325->GetZaxis()->SetLabelFont(43);
   setHistdata0.98623185263325->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.98623185263325->GetZaxis()->SetLabelSize(32);
   setHistdata0.98623185263325->GetZaxis()->SetTitleSize(35);
   setHistdata0.98623185263325->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.98623185263325->GetZaxis()->SetTitleFont(43);
   setHistdata0.98623185263325->Draw("PESame");
   
   TH2F *axis0.077709221186_copy26 = new TH2F("axis0.077709221186_copy26","",50,-1,1,50,0,61795.71);
   axis0.077709221186_copy26->SetDirectory(0);
   axis0.077709221186_copy26->SetMarkerStyle(20);
   axis0.077709221186_copy26->GetXaxis()->SetNdivisions(1005);
   axis0.077709221186_copy26->GetXaxis()->SetLabelFont(43);
   axis0.077709221186_copy26->GetXaxis()->SetLabelOffset(0.0105);
   axis0.077709221186_copy26->GetXaxis()->SetLabelSize(0);
   axis0.077709221186_copy26->GetXaxis()->SetTitleSize(35);
   axis0.077709221186_copy26->GetXaxis()->SetTickLength(0.025);
   axis0.077709221186_copy26->GetXaxis()->SetTitleOffset(1.135);
   axis0.077709221186_copy26->GetXaxis()->SetTitleFont(43);
   axis0.077709221186_copy26->GetYaxis()->SetTitle("Events / bin");
   axis0.077709221186_copy26->GetYaxis()->SetNdivisions(506);
   axis0.077709221186_copy26->GetYaxis()->SetLabelFont(43);
   axis0.077709221186_copy26->GetYaxis()->SetLabelOffset(0.0087);
   axis0.077709221186_copy26->GetYaxis()->SetLabelSize(32);
   axis0.077709221186_copy26->GetYaxis()->SetTitleSize(35);
   axis0.077709221186_copy26->GetYaxis()->SetTickLength(0.02631579);
   axis0.077709221186_copy26->GetYaxis()->SetTitleOffset(1.32);
   axis0.077709221186_copy26->GetYaxis()->SetTitleFont(43);
   axis0.077709221186_copy26->GetZaxis()->SetLabelFont(43);
   axis0.077709221186_copy26->GetZaxis()->SetLabelOffset(0.0087);
   axis0.077709221186_copy26->GetZaxis()->SetLabelSize(32);
   axis0.077709221186_copy26->GetZaxis()->SetTitleSize(35);
   axis0.077709221186_copy26->GetZaxis()->SetTitleOffset(1.32);
   axis0.077709221186_copy26->GetZaxis()->SetTitleFont(43);
   axis0.077709221186_copy26->Draw("sameaxis");
   
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
   
   pt = new TPaveText(0.165,0.79,0.165,0.79,"brNDC");
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
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 36#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13TeV)");
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.986231852633","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.691084908244","Multijet","F");

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
   entry=leg->AddEntry("setHistDY0.321764231892","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexLF0.946033868908","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexHF0.754248089787","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.747464164563","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWChannel0.11850688399","tW","F");

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
   entry=leg->AddEntry("setHisttChannel0.418245868379","#it{t}-channel","F");

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
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767_2->Modified();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->cd();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->Modified();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->cd();
   cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767->SetSelected(cvmuon_2j1t_bdt_tch_boost04_qcdnone_blind0.0127376679767);
}
