void plots/2j1t/electron_2j1t_bdt_tch_boost04_qcdnone_blind()
{
//=========Macro generated from canvas: cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726/
//=========  (Thu May 25 17:47:43 2017) by ROOT version6.02/05
   TCanvas *cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726 = new TCanvas("cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetHighLightColor(2);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->Range(0,0,1,1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetFillColor(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetBorderMode(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetBorderSize(2);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetTickx(1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetTicky(1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetLeftMargin(0.1150442);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetRightMargin(0.227083);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetTopMargin(0.04002582);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetBottomMargin(0.08064517);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetFrameLineWidth(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetFrameBorderMode(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1
   TPad *cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1 = new TPad("cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1", "",0,0,1,1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->Draw();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->cd();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetFillColor(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetFillStyle(4000);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetBorderMode(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetBorderSize(2);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetTickx(1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetTicky(1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetLeftMargin(0.14);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetRightMargin(0.26);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetTopMargin(0.65);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetBottomMargin(0.14);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetFrameBorderMode(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.87205071546314 = new TH2F("axisRes0.87205071546314","",50,-1,1,50,0.6,1.4);
   axisRes0.87205071546314->SetMarkerStyle(20);
   axisRes0.87205071546314->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes0.87205071546314->GetXaxis()->SetNdivisions(1005);
   axisRes0.87205071546314->GetXaxis()->SetLabelFont(43);
   axisRes0.87205071546314->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.87205071546314->GetXaxis()->SetLabelSize(32);
   axisRes0.87205071546314->GetXaxis()->SetTitleSize(35);
   axisRes0.87205071546314->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.87205071546314->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.87205071546314->GetXaxis()->SetTitleFont(43);
   axisRes0.87205071546314->GetYaxis()->SetTitle("Data/MC");
   axisRes0.87205071546314->GetYaxis()->SetNdivisions(406);
   axisRes0.87205071546314->GetYaxis()->SetLabelFont(43);
   axisRes0.87205071546314->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.87205071546314->GetYaxis()->SetLabelSize(32);
   axisRes0.87205071546314->GetYaxis()->SetTitleSize(35);
   axisRes0.87205071546314->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.87205071546314->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.87205071546314->GetYaxis()->SetTitleFont(43);
   axisRes0.87205071546314->GetZaxis()->SetLabelFont(43);
   axisRes0.87205071546314->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.87205071546314->GetZaxis()->SetLabelSize(32);
   axisRes0.87205071546314->GetZaxis()->SetTitleSize(35);
   axisRes0.87205071546314->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.87205071546314->GetZaxis()->SetTitleFont(43);
   axisRes0.87205071546314->Draw("AXIS");
   TBox *box = new TBox(-1,0.9790506,-0.9230769,1.020949);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9790506,-0.9230769,1.020949);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.9836222,-0.8461538,1.016378);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.9836222,-0.8461538,1.016378);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9832788,-0.7692308,1.016721);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9832788,-0.7692308,1.016721);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9812016,-0.6923077,1.018798);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9812016,-0.6923077,1.018798);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.9810979,-0.6153846,1.018902);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.9810979,-0.6153846,1.018902);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.9805754,-0.5384615,1.019425);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.9805754,-0.5384615,1.019425);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9805591,-0.4615385,1.019441);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9805591,-0.4615385,1.019441);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.97875,-0.3846154,1.02125);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.97875,-0.3846154,1.02125);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9792976,-0.3076923,1.020702);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9792976,-0.3076923,1.020702);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.9777777,-0.2307692,1.022222);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.9777777,-0.2307692,1.022222);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9795926,-0.1538462,1.020407);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9795926,-0.1538462,1.020407);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.980121,-0.07692308,1.019879);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.980121,-0.07692308,1.019879);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.9801372,0,1.019863);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.9801372,0,1.019863);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9800036,0.07692308,1.019996);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9800036,0.07692308,1.019996);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9805604,0.1538462,1.01944);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9805604,0.1538462,1.01944);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.9819292,0.2307692,1.018071);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.9819292,0.2307692,1.018071);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9810972,0.3076923,1.018903);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9810972,0.3076923,1.018903);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9814188,0.3846154,1.018581);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9814188,0.3846154,1.018581);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9804437,0.4615385,1.019556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9804437,0.4615385,1.019556);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9810857,0.5384615,1.018914);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9810857,0.5384615,1.018914);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9815331,0.6153846,1.018467);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9815331,0.6153846,1.018467);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9811847,0.6923077,1.018815);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9811847,0.6923077,1.018815);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9776167,0.7692308,1.022383);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9776167,0.7692308,1.022383);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9812722,0.8461538,1.018728);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9812722,0.8461538,1.018728);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.9799614,0.9230769,1.020039);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.9799614,0.9230769,1.020039);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9780921,1,1.021908);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9780921,1,1.021908);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis11[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata0.9242919271390.57513067699115 = new TH1F("setHistdata0.9242919271390.57513067699115","",26, xAxis11);
   setHistdata0.9242919271390.57513067699115->SetBinContent(1,0.9225694);
   setHistdata0.9242919271390.57513067699115->SetBinContent(2,0.973914);
   setHistdata0.9242919271390.57513067699115->SetBinContent(3,0.9870107);
   setHistdata0.9242919271390.57513067699115->SetBinContent(4,1.040296);
   setHistdata0.9242919271390.57513067699115->SetBinContent(5,1.010908);
   setHistdata0.9242919271390.57513067699115->SetBinContent(6,1.010452);
   setHistdata0.9242919271390.57513067699115->SetBinContent(7,0.9868795);
   setHistdata0.9242919271390.57513067699115->SetBinContent(8,1.022847);
   setHistdata0.9242919271390.57513067699115->SetBinContent(9,1.09337);
   setHistdata0.9242919271390.57513067699115->SetBinContent(10,1.059131);
   setHistdata0.9242919271390.57513067699115->SetBinContent(11,1.048084);
   setHistdata0.9242919271390.57513067699115->SetBinContent(12,1.073129);
   setHistdata0.9242919271390.57513067699115->SetBinContent(13,1.019299);
   setHistdata0.9242919271390.57513067699115->SetBinError(1,0.006722631);
   setHistdata0.9242919271390.57513067699115->SetBinError(2,0.005795978);
   setHistdata0.9242919271390.57513067699115->SetBinError(3,0.006296663);
   setHistdata0.9242919271390.57513067699115->SetBinError(4,0.007266095);
   setHistdata0.9242919271390.57513067699115->SetBinError(5,0.00752734);
   setHistdata0.9242919271390.57513067699115->SetBinError(6,0.007863022);
   setHistdata0.9242919271390.57513067699115->SetBinError(7,0.007962849);
   setHistdata0.9242919271390.57513067699115->SetBinError(8,0.008463403);
   setHistdata0.9242919271390.57513067699115->SetBinError(9,0.0091493);
   setHistdata0.9242919271390.57513067699115->SetBinError(10,0.009011353);
   setHistdata0.9242919271390.57513067699115->SetBinError(11,0.008953405);
   setHistdata0.9242919271390.57513067699115->SetBinError(12,0.00924802);
   setHistdata0.9242919271390.57513067699115->SetBinError(13,0.008928174);
   setHistdata0.9242919271390.57513067699115->SetEntries(224976);
   setHistdata0.9242919271390.57513067699115->SetFillStyle(0);
   setHistdata0.9242919271390.57513067699115->SetMarkerStyle(20);
   setHistdata0.9242919271390.57513067699115->SetMarkerSize(1.15);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetNdivisions(1005);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetLabelFont(43);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetLabelSize(32);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetTitleSize(35);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetTickLength(0.05);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.9242919271390.57513067699115->GetXaxis()->SetTitleFont(43);
   setHistdata0.9242919271390.57513067699115->GetYaxis()->SetNdivisions(506);
   setHistdata0.9242919271390.57513067699115->GetYaxis()->SetLabelFont(43);
   setHistdata0.9242919271390.57513067699115->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.9242919271390.57513067699115->GetYaxis()->SetLabelSize(32);
   setHistdata0.9242919271390.57513067699115->GetYaxis()->SetTitleSize(35);
   setHistdata0.9242919271390.57513067699115->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.9242919271390.57513067699115->GetYaxis()->SetTitleFont(43);
   setHistdata0.9242919271390.57513067699115->GetZaxis()->SetLabelFont(43);
   setHistdata0.9242919271390.57513067699115->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.9242919271390.57513067699115->GetZaxis()->SetLabelSize(32);
   setHistdata0.9242919271390.57513067699115->GetZaxis()->SetTitleSize(35);
   setHistdata0.9242919271390.57513067699115->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.9242919271390.57513067699115->GetZaxis()->SetTitleFont(43);
   setHistdata0.9242919271390.57513067699115->Draw("PESame");
   
   TF1 *axisLine0.9545068814532 = new TF1("axisLine0.954506881453","1",-1,1);
   axisLine0.9545068814532->SetFillColor(19);
   axisLine0.9545068814532->SetFillStyle(0);
   axisLine0.9545068814532->SetMarkerStyle(20);
   axisLine0.9545068814532->SetLineWidth(1);
   axisLine0.9545068814532->GetXaxis()->SetNdivisions(1005);
   axisLine0.9545068814532->GetXaxis()->SetLabelFont(43);
   axisLine0.9545068814532->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.9545068814532->GetXaxis()->SetLabelSize(32);
   axisLine0.9545068814532->GetXaxis()->SetTitleSize(35);
   axisLine0.9545068814532->GetXaxis()->SetTickLength(0.05);
   axisLine0.9545068814532->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.9545068814532->GetXaxis()->SetTitleFont(43);
   axisLine0.9545068814532->GetYaxis()->SetNdivisions(506);
   axisLine0.9545068814532->GetYaxis()->SetLabelFont(43);
   axisLine0.9545068814532->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.9545068814532->GetYaxis()->SetLabelSize(32);
   axisLine0.9545068814532->GetYaxis()->SetTitleSize(35);
   axisLine0.9545068814532->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.9545068814532->GetYaxis()->SetTitleFont(43);
   axisLine0.9545068814532->Draw("SameL");
   
   TH2F *axisRes0.872050715463_copy16 = new TH2F("axisRes0.872050715463_copy16","",50,-1,1,50,0.6,1.4);
   axisRes0.872050715463_copy16->SetDirectory(0);
   axisRes0.872050715463_copy16->SetMarkerStyle(20);
   axisRes0.872050715463_copy16->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes0.872050715463_copy16->GetXaxis()->SetNdivisions(1005);
   axisRes0.872050715463_copy16->GetXaxis()->SetLabelFont(43);
   axisRes0.872050715463_copy16->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.872050715463_copy16->GetXaxis()->SetLabelSize(32);
   axisRes0.872050715463_copy16->GetXaxis()->SetTitleSize(35);
   axisRes0.872050715463_copy16->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.872050715463_copy16->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.872050715463_copy16->GetXaxis()->SetTitleFont(43);
   axisRes0.872050715463_copy16->GetYaxis()->SetTitle("Data/MC");
   axisRes0.872050715463_copy16->GetYaxis()->SetNdivisions(406);
   axisRes0.872050715463_copy16->GetYaxis()->SetLabelFont(43);
   axisRes0.872050715463_copy16->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.872050715463_copy16->GetYaxis()->SetLabelSize(32);
   axisRes0.872050715463_copy16->GetYaxis()->SetTitleSize(35);
   axisRes0.872050715463_copy16->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.872050715463_copy16->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.872050715463_copy16->GetYaxis()->SetTitleFont(43);
   axisRes0.872050715463_copy16->GetZaxis()->SetLabelFont(43);
   axisRes0.872050715463_copy16->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.872050715463_copy16->GetZaxis()->SetLabelSize(32);
   axisRes0.872050715463_copy16->GetZaxis()->SetTitleSize(35);
   axisRes0.872050715463_copy16->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.872050715463_copy16->GetZaxis()->SetTitleFont(43);
   axisRes0.872050715463_copy16->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_1->Modified();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->cd();
  
// ------------>Primitives in pad: cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2
   TPad *cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2 = new TPad("cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2", "",0,0,1,1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->Draw();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->cd();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->Range(-1.466667,-25456.37,1.866667,47276.11);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetFillColor(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetFillStyle(4000);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetBorderMode(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetBorderSize(2);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetTickx(1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetTicky(1);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetLeftMargin(0.14);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetRightMargin(0.26);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetTopMargin(0.08);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetBottomMargin(0.35);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetFrameBorderMode(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->SetFrameBorderMode(0);
   
   TH2F *axis0.10858115050217 = new TH2F("axis0.10858115050217","",50,-1,1,50,0,41457.51);
   axis0.10858115050217->SetMarkerStyle(20);
   axis0.10858115050217->GetXaxis()->SetNdivisions(1005);
   axis0.10858115050217->GetXaxis()->SetLabelFont(43);
   axis0.10858115050217->GetXaxis()->SetLabelOffset(0.0105);
   axis0.10858115050217->GetXaxis()->SetLabelSize(0);
   axis0.10858115050217->GetXaxis()->SetTitleSize(35);
   axis0.10858115050217->GetXaxis()->SetTickLength(0.025);
   axis0.10858115050217->GetXaxis()->SetTitleOffset(1.135);
   axis0.10858115050217->GetXaxis()->SetTitleFont(43);
   axis0.10858115050217->GetYaxis()->SetTitle("Events / bin");
   axis0.10858115050217->GetYaxis()->SetNdivisions(506);
   axis0.10858115050217->GetYaxis()->SetLabelFont(43);
   axis0.10858115050217->GetYaxis()->SetLabelOffset(0.0087);
   axis0.10858115050217->GetYaxis()->SetLabelSize(32);
   axis0.10858115050217->GetYaxis()->SetTitleSize(35);
   axis0.10858115050217->GetYaxis()->SetTickLength(0.02631579);
   axis0.10858115050217->GetYaxis()->SetTitleOffset(1.32);
   axis0.10858115050217->GetYaxis()->SetTitleFont(43);
   axis0.10858115050217->GetZaxis()->SetLabelFont(43);
   axis0.10858115050217->GetZaxis()->SetLabelOffset(0.0087);
   axis0.10858115050217->GetZaxis()->SetLabelSize(32);
   axis0.10858115050217->GetZaxis()->SetTitleSize(35);
   axis0.10858115050217->GetZaxis()->SetTitleOffset(1.32);
   axis0.10858115050217->GetZaxis()->SetTitleFont(43);
   axis0.10858115050217->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis12[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *_stack_1_stack_2 = new TH1F("_stack_1_stack_2","",26, xAxis12);
   _stack_1_stack_2->SetMinimum(-32.3133);
   _stack_1_stack_2->SetMaximum(30440.83);
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
   
   TH1F *setHisttChannel0.85273198885418 = new TH1F("setHisttChannel0.85273198885418","",26, xAxis13);
   setHisttChannel0.85273198885418->SetBinContent(1,211.1444);
   setHisttChannel0.85273198885418->SetBinContent(2,499.849);
   setHisttChannel0.85273198885418->SetBinContent(3,611.244);
   setHisttChannel0.85273198885418->SetBinContent(4,678.799);
   setHisttChannel0.85273198885418->SetBinContent(5,712.6746);
   setHisttChannel0.85273198885418->SetBinContent(6,765.1272);
   setHisttChannel0.85273198885418->SetBinContent(7,837.9365);
   setHisttChannel0.85273198885418->SetBinContent(8,907.687);
   setHisttChannel0.85273198885418->SetBinContent(9,954.0522);
   setHisttChannel0.85273198885418->SetBinContent(10,1018.734);
   setHisttChannel0.85273198885418->SetBinContent(11,1099.942);
   setHisttChannel0.85273198885418->SetBinContent(12,1184.538);
   setHisttChannel0.85273198885418->SetBinContent(13,1265.114);
   setHisttChannel0.85273198885418->SetBinContent(14,1371.554);
   setHisttChannel0.85273198885418->SetBinContent(15,1481.251);
   setHisttChannel0.85273198885418->SetBinContent(16,1566.804);
   setHisttChannel0.85273198885418->SetBinContent(17,1687.732);
   setHisttChannel0.85273198885418->SetBinContent(18,1864.367);
   setHisttChannel0.85273198885418->SetBinContent(19,2040.095);
   setHisttChannel0.85273198885418->SetBinContent(20,2201.712);
   setHisttChannel0.85273198885418->SetBinContent(21,2435.561);
   setHisttChannel0.85273198885418->SetBinContent(22,2624.625);
   setHisttChannel0.85273198885418->SetBinContent(23,2832.693);
   setHisttChannel0.85273198885418->SetBinContent(24,3184.436);
   setHisttChannel0.85273198885418->SetBinContent(25,3500.745);
   setHisttChannel0.85273198885418->SetBinContent(26,3008.887);
   setHisttChannel0.85273198885418->SetBinError(1,4.16575);
   setHisttChannel0.85273198885418->SetBinError(2,6.424155);
   setHisttChannel0.85273198885418->SetBinError(3,7.08173);
   setHisttChannel0.85273198885418->SetBinError(4,7.460133);
   setHisttChannel0.85273198885418->SetBinError(5,7.635933);
   setHisttChannel0.85273198885418->SetBinError(6,7.907071);
   setHisttChannel0.85273198885418->SetBinError(7,8.257462);
   setHisttChannel0.85273198885418->SetBinError(8,8.587081);
   setHisttChannel0.85273198885418->SetBinError(9,8.802968);
   setHisttChannel0.85273198885418->SetBinError(10,9.081827);
   setHisttChannel0.85273198885418->SetBinError(11,9.436099);
   setHisttChannel0.85273198885418->SetBinError(12,9.780073);
   setHisttChannel0.85273198885418->SetBinError(13,10.10646);
   setHisttChannel0.85273198885418->SetBinError(14,10.51346);
   setHisttChannel0.85273198885418->SetBinError(15,10.93471);
   setHisttChannel0.85273198885418->SetBinError(16,11.2402);
   setHisttChannel0.85273198885418->SetBinError(17,11.662);
   setHisttChannel0.85273198885418->SetBinError(18,12.24848);
   setHisttChannel0.85273198885418->SetBinError(19,12.81794);
   setHisttChannel0.85273198885418->SetBinError(20,13.30822);
   setHisttChannel0.85273198885418->SetBinError(21,13.99119);
   setHisttChannel0.85273198885418->SetBinError(22,14.52061);
   setHisttChannel0.85273198885418->SetBinError(23,15.06599);
   setHisttChannel0.85273198885418->SetBinError(24,15.97417);
   setHisttChannel0.85273198885418->SetBinError(25,16.73838);
   setHisttChannel0.85273198885418->SetBinError(26,15.49933);
   setHisttChannel0.85273198885418->SetEntries(536296);
   setHisttChannel0.85273198885418->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.85273198885418->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.85273198885418->SetLineColor(ci);
   setHisttChannel0.85273198885418->SetLineWidth(2);
   setHisttChannel0.85273198885418->SetMarkerStyle(20);
   setHisttChannel0.85273198885418->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.85273198885418->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.85273198885418->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.85273198885418->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.85273198885418->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.85273198885418->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.85273198885418->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.85273198885418->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.85273198885418->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.85273198885418->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.85273198885418->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.85273198885418->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.85273198885418->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.85273198885418->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.85273198885418->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.85273198885418->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.85273198885418->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.85273198885418->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.85273198885418->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.85273198885418->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.85273198885418->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.852731988854,"HIST F");
   Double_t xAxis14[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHisttWChannel0.52039257320519 = new TH1F("setHisttWChannel0.52039257320519","",26, xAxis14);
   setHisttWChannel0.52039257320519->SetBinContent(1,897.7678);
   setHisttWChannel0.52039257320519->SetBinContent(2,1692.711);
   setHisttWChannel0.52039257320519->SetBinContent(3,1504.595);
   setHisttWChannel0.52039257320519->SetBinContent(4,1223.045);
   setHisttWChannel0.52039257320519->SetBinContent(5,1009.361);
   setHisttWChannel0.52039257320519->SetBinContent(6,876.0089);
   setHisttWChannel0.52039257320519->SetBinContent(7,836.1149);
   setHisttWChannel0.52039257320519->SetBinContent(8,788.1744);
   setHisttWChannel0.52039257320519->SetBinContent(9,765.9669);
   setHisttWChannel0.52039257320519->SetBinContent(10,746.463);
   setHisttWChannel0.52039257320519->SetBinContent(11,720.0129);
   setHisttWChannel0.52039257320519->SetBinContent(12,710.375);
   setHisttWChannel0.52039257320519->SetBinContent(13,713.6757);
   setHisttWChannel0.52039257320519->SetBinContent(14,705.5861);
   setHisttWChannel0.52039257320519->SetBinContent(15,696.9857);
   setHisttWChannel0.52039257320519->SetBinContent(16,673.6246);
   setHisttWChannel0.52039257320519->SetBinContent(17,688.3658);
   setHisttWChannel0.52039257320519->SetBinContent(18,652.6897);
   setHisttWChannel0.52039257320519->SetBinContent(19,648.1072);
   setHisttWChannel0.52039257320519->SetBinContent(20,624.8933);
   setHisttWChannel0.52039257320519->SetBinContent(21,606.9922);
   setHisttWChannel0.52039257320519->SetBinContent(22,514.6903);
   setHisttWChannel0.52039257320519->SetBinContent(23,403.6891);
   setHisttWChannel0.52039257320519->SetBinContent(24,288.8511);
   setHisttWChannel0.52039257320519->SetBinContent(25,182.3633);
   setHisttWChannel0.52039257320519->SetBinContent(26,71.19923);
   setHisttWChannel0.52039257320519->SetBinError(1,12.6919);
   setHisttWChannel0.52039257320519->SetBinError(2,17.4218);
   setHisttWChannel0.52039257320519->SetBinError(3,16.37811);
   setHisttWChannel0.52039257320519->SetBinError(4,14.7736);
   setHisttWChannel0.52039257320519->SetBinError(5,13.38427);
   setHisttWChannel0.52039257320519->SetBinError(6,12.42902);
   setHisttWChannel0.52039257320519->SetBinError(7,12.15099);
   setHisttWChannel0.52039257320519->SetBinError(8,11.78117);
   setHisttWChannel0.52039257320519->SetBinError(9,11.61892);
   setHisttWChannel0.52039257320519->SetBinError(10,11.46132);
   setHisttWChannel0.52039257320519->SetBinError(11,11.23435);
   setHisttWChannel0.52039257320519->SetBinError(12,11.17128);
   setHisttWChannel0.52039257320519->SetBinError(13,11.18522);
   setHisttWChannel0.52039257320519->SetBinError(14,11.13036);
   setHisttWChannel0.52039257320519->SetBinError(15,11.07488);
   setHisttWChannel0.52039257320519->SetBinError(16,10.88344);
   setHisttWChannel0.52039257320519->SetBinError(17,10.9883);
   setHisttWChannel0.52039257320519->SetBinError(18,10.70994);
   setHisttWChannel0.52039257320519->SetBinError(19,10.66834);
   setHisttWChannel0.52039257320519->SetBinError(20,10.48543);
   setHisttWChannel0.52039257320519->SetBinError(21,10.32777);
   setHisttWChannel0.52039257320519->SetBinError(22,9.500632);
   setHisttWChannel0.52039257320519->SetBinError(23,8.427214);
   setHisttWChannel0.52039257320519->SetBinError(24,7.12631);
   setHisttWChannel0.52039257320519->SetBinError(25,5.64728);
   setHisttWChannel0.52039257320519->SetBinError(26,3.530875);
   setHisttWChannel0.52039257320519->SetEntries(115964);
   setHisttWChannel0.52039257320519->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWChannel0.52039257320519->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWChannel0.52039257320519->SetLineColor(ci);
   setHisttWChannel0.52039257320519->SetLineWidth(2);
   setHisttWChannel0.52039257320519->SetMarkerStyle(20);
   setHisttWChannel0.52039257320519->GetXaxis()->SetNdivisions(1005);
   setHisttWChannel0.52039257320519->GetXaxis()->SetLabelFont(43);
   setHisttWChannel0.52039257320519->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWChannel0.52039257320519->GetXaxis()->SetLabelSize(32);
   setHisttWChannel0.52039257320519->GetXaxis()->SetTitleSize(35);
   setHisttWChannel0.52039257320519->GetXaxis()->SetTickLength(0.05);
   setHisttWChannel0.52039257320519->GetXaxis()->SetTitleOffset(1.135);
   setHisttWChannel0.52039257320519->GetXaxis()->SetTitleFont(43);
   setHisttWChannel0.52039257320519->GetYaxis()->SetNdivisions(506);
   setHisttWChannel0.52039257320519->GetYaxis()->SetLabelFont(43);
   setHisttWChannel0.52039257320519->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.52039257320519->GetYaxis()->SetLabelSize(32);
   setHisttWChannel0.52039257320519->GetYaxis()->SetTitleSize(35);
   setHisttWChannel0.52039257320519->GetYaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.52039257320519->GetYaxis()->SetTitleFont(43);
   setHisttWChannel0.52039257320519->GetZaxis()->SetLabelFont(43);
   setHisttWChannel0.52039257320519->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.52039257320519->GetZaxis()->SetLabelSize(32);
   setHisttWChannel0.52039257320519->GetZaxis()->SetTitleSize(35);
   setHisttWChannel0.52039257320519->GetZaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.52039257320519->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWChannel0.520392573205,"HIST F");
   Double_t xAxis15[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistTTJets0.55532631374720 = new TH1F("setHistTTJets0.55532631374720","",26, xAxis15);
   setHistTTJets0.55532631374720->SetBinContent(1,6313.518);
   setHistTTJets0.55532631374720->SetBinContent(2,12787.84);
   setHistTTJets0.55532631374720->SetBinContent(3,11817.77);
   setHistTTJets0.55532631374720->SetBinContent(4,9781.299);
   setHistTTJets0.55532631374720->SetBinContent(5,8548.549);
   setHistTTJets0.55532631374720->SetBinContent(6,7923.133);
   setHistTTJets0.55532631374720->SetBinContent(7,7479.218);
   setHistTTJets0.55532631374720->SetBinContent(8,7211.464);
   setHistTTJets0.55532631374720->SetBinContent(9,7062.671);
   setHistTTJets0.55532631374720->SetBinContent(10,6842.381);
   setHistTTJets0.55532631374720->SetBinContent(11,6756.509);
   setHistTTJets0.55532631374720->SetBinContent(12,6771.131);
   setHistTTJets0.55532631374720->SetBinContent(13,6672.637);
   setHistTTJets0.55532631374720->SetBinContent(14,6709.069);
   setHistTTJets0.55532631374720->SetBinContent(15,6726.069);
   setHistTTJets0.55532631374720->SetBinContent(16,6537.19);
   setHistTTJets0.55532631374720->SetBinContent(17,6422.597);
   setHistTTJets0.55532631374720->SetBinContent(18,6412.503);
   setHistTTJets0.55532631374720->SetBinContent(19,6270.707);
   setHistTTJets0.55532631374720->SetBinContent(20,6281.469);
   setHistTTJets0.55532631374720->SetBinContent(21,5950.138);
   setHistTTJets0.55532631374720->SetBinContent(22,5321.01);
   setHistTTJets0.55532631374720->SetBinContent(23,4343.081);
   setHistTTJets0.55532631374720->SetBinContent(24,3406.406);
   setHistTTJets0.55532631374720->SetBinContent(25,2282.935);
   setHistTTJets0.55532631374720->SetBinContent(26,884.9212);
   setHistTTJets0.55532631374720->SetBinError(1,48.69581);
   setHistTTJets0.55532631374720->SetBinError(2,69.43773);
   setHistTTJets0.55532631374720->SetBinError(3,66.73037);
   setHistTTJets0.55532631374720->SetBinError(4,60.66379);
   setHistTTJets0.55532631374720->SetBinError(5,56.68005);
   setHistTTJets0.55532631374720->SetBinError(6,54.53973);
   setHistTTJets0.55532631374720->SetBinError(7,52.9313);
   setHistTTJets0.55532631374720->SetBinError(8,51.96845);
   setHistTTJets0.55532631374720->SetBinError(9,51.45178);
   setHistTTJets0.55532631374720->SetBinError(10,50.59932);
   setHistTTJets0.55532631374720->SetBinError(11,50.2605);
   setHistTTJets0.55532631374720->SetBinError(12,50.31959);
   setHistTTJets0.55532631374720->SetBinError(13,49.94877);
   setHistTTJets0.55532631374720->SetBinError(14,50.08735);
   setHistTTJets0.55532631374720->SetBinError(15,50.12055);
   setHistTTJets0.55532631374720->SetBinError(16,49.40863);
   setHistTTJets0.55532631374720->SetBinError(17,48.99784);
   setHistTTJets0.55532631374720->SetBinError(18,48.91385);
   setHistTTJets0.55532631374720->SetBinError(19,48.4069);
   setHistTTJets0.55532631374720->SetBinError(20,48.47991);
   setHistTTJets0.55532631374720->SetBinError(21,47.10461);
   setHistTTJets0.55532631374720->SetBinError(22,44.54931);
   setHistTTJets0.55532631374720->SetBinError(23,40.22816);
   setHistTTJets0.55532631374720->SetBinError(24,35.53439);
   setHistTTJets0.55532631374720->SetBinError(25,29.06123);
   setHistTTJets0.55532631374720->SetBinError(26,18.01234);
   setHistTTJets0.55532631374720->SetEntries(495121);
   setHistTTJets0.55532631374720->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.55532631374720->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.55532631374720->SetLineColor(ci);
   setHistTTJets0.55532631374720->SetLineWidth(2);
   setHistTTJets0.55532631374720->SetMarkerStyle(20);
   setHistTTJets0.55532631374720->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.55532631374720->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.55532631374720->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.55532631374720->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.55532631374720->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.55532631374720->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.55532631374720->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.55532631374720->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.55532631374720->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.55532631374720->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.55532631374720->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.55532631374720->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.55532631374720->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.55532631374720->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.55532631374720->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.55532631374720->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.55532631374720->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.55532631374720->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.55532631374720->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.55532631374720->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.55532631374720->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.555326313747,"HIST F");
   Double_t xAxis16[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexHF0.85111533008121 = new TH1F("setHistWJetsAMCexHF0.85111533008121","",26, xAxis16);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(1,4654.878);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(2,5501.491);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(3,4839.018);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(4,3273.898);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(5,3186.814);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(6,3198.613);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(7,3032.116);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(8,2271.837);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(9,1539.524);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(10,1710.806);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(11,1940.663);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(12,1690.311);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(13,1752.952);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(14,1751.817);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(15,1384.756);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(16,1614.32);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(17,1542.793);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(18,1290.552);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(19,1218.628);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(20,1478.358);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(21,1079.72);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(22,1163.872);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(23,599.7473);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(24,447.7503);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(25,611.7276);
   setHistWJetsAMCexHF0.85111533008121->SetBinContent(26,450.3852);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(1,335.3073);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(2,382.9436);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(3,343.8368);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(4,315.4514);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(5,280.4339);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(6,259.7539);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(7,255.7138);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(8,246.3676);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(9,225.49);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(10,222.2477);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(11,216.7276);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(12,203.4622);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(13,207.9791);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(14,204.8375);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(15,185.7469);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(16,182.8038);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(17,189.5367);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(18,179.48);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(19,180.0412);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(20,169.6823);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(21,169.3735);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(22,161.0763);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(23,147.2754);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(24,122.6841);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(25,119.4151);
   setHistWJetsAMCexHF0.85111533008121->SetBinError(26,89.44578);
   setHistWJetsAMCexHF0.85111533008121->SetEntries(19916);
   setHistWJetsAMCexHF0.85111533008121->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsAMCexHF0.85111533008121->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsAMCexHF0.85111533008121->SetLineColor(ci);
   setHistWJetsAMCexHF0.85111533008121->SetLineWidth(2);
   setHistWJetsAMCexHF0.85111533008121->SetMarkerStyle(20);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexHF0.85111533008121->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF0.85111533008121->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexHF0.85111533008121->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF0.85111533008121->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF0.85111533008121->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF0.85111533008121->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF0.85111533008121->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF0.85111533008121->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF0.85111533008121->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF0.85111533008121->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF0.85111533008121->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF0.85111533008121->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF0.85111533008121->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF0.85111533008121->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexHF0.851115330081,"HIST F");
   Double_t xAxis17[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexLF0.65337491813822 = new TH1F("setHistWJetsAMCexLF0.65337491813822","",26, xAxis17);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(1,1995.623);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(2,2125.412);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(3,1270.529);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(4,898.5812);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(5,1066.497);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(6,688.2444);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(7,823.0308);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(8,776.2586);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(9,454.6486);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(10,756.9955);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(11,525.6969);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(12,300.9427);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(13,643.4715);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(14,527.947);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(15,412.8345);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(16,464.3769);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(17,521.5226);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(18,429.7821);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(19,515.655);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(20,392.6793);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(21,280.4614);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(22,160.2547);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(23,287.7102);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(24,240.322);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(25,134.8075);
   setHistWJetsAMCexLF0.65337491813822->SetBinContent(26,1.440237);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(1,248.4234);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(2,250.4076);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(3,202.3171);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(4,163.3831);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(5,157.3939);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(6,152.8554);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(7,131.1649);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(8,152.2767);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(9,117.0549);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(10,168.4102);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(11,121.9938);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(12,113.4004);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(13,117.4016);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(14,121.54);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(15,124.9439);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(16,94.72531);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(17,104.0465);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(18,105.9706);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(19,126.0296);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(20,131.1398);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(21,100.4873);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(22,96.17922);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(23,127.7562);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(24,70.0925);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(25,62.78712);
   setHistWJetsAMCexLF0.65337491813822->SetBinError(26,33.75354);
   setHistWJetsAMCexLF0.65337491813822->SetEntries(4456);
   setHistWJetsAMCexLF0.65337491813822->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsAMCexLF0.65337491813822->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsAMCexLF0.65337491813822->SetLineColor(ci);
   setHistWJetsAMCexLF0.65337491813822->SetLineWidth(2);
   setHistWJetsAMCexLF0.65337491813822->SetMarkerStyle(20);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexLF0.65337491813822->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF0.65337491813822->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexLF0.65337491813822->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF0.65337491813822->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF0.65337491813822->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF0.65337491813822->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF0.65337491813822->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF0.65337491813822->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF0.65337491813822->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF0.65337491813822->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF0.65337491813822->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF0.65337491813822->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF0.65337491813822->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF0.65337491813822->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexLF0.653374918138,"HIST F");
   Double_t xAxis18[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistDY0.89272622591423 = new TH1F("setHistDY0.89272622591423","",26, xAxis18);
   setHistDY0.89272622591423->SetBinContent(1,551.767);
   setHistDY0.89272622591423->SetBinContent(2,1170.351);
   setHistDY0.89272622591423->SetBinContent(3,1153.026);
   setHistDY0.89272622591423->SetBinContent(4,1032.862);
   setHistDY0.89272622591423->SetBinContent(5,922.8606);
   setHistDY0.89272622591423->SetBinContent(6,903.1251);
   setHistDY0.89272622591423->SetBinContent(7,874.0764);
   setHistDY0.89272622591423->SetBinContent(8,742.0712);
   setHistDY0.89272622591423->SetBinContent(9,870.1665);
   setHistDY0.89272622591423->SetBinContent(10,562.5324);
   setHistDY0.89272622591423->SetBinContent(11,808.0459);
   setHistDY0.89272622591423->SetBinContent(12,732.294);
   setHistDY0.89272622591423->SetBinContent(13,609.9993);
   setHistDY0.89272622591423->SetBinContent(14,544.2616);
   setHistDY0.89272622591423->SetBinContent(15,475.7919);
   setHistDY0.89272622591423->SetBinContent(16,549.9471);
   setHistDY0.89272622591423->SetBinContent(17,491.5576);
   setHistDY0.89272622591423->SetBinContent(18,383.561);
   setHistDY0.89272622591423->SetBinContent(19,353.8084);
   setHistDY0.89272622591423->SetBinContent(20,400.8167);
   setHistDY0.89272622591423->SetBinContent(21,322.7535);
   setHistDY0.89272622591423->SetBinContent(22,256.828);
   setHistDY0.89272622591423->SetBinContent(23,255.5437);
   setHistDY0.89272622591423->SetBinContent(24,152.09);
   setHistDY0.89272622591423->SetBinContent(25,87.55912);
   setHistDY0.89272622591423->SetBinContent(26,41.12486);
   setHistDY0.89272622591423->SetBinError(1,54.52218);
   setHistDY0.89272622591423->SetBinError(2,87.57863);
   setHistDY0.89272622591423->SetBinError(3,83.66837);
   setHistDY0.89272622591423->SetBinError(4,73.11791);
   setHistDY0.89272622591423->SetBinError(5,74.28378);
   setHistDY0.89272622591423->SetBinError(6,73.18059);
   setHistDY0.89272622591423->SetBinError(7,68.40453);
   setHistDY0.89272622591423->SetBinError(8,65.35612);
   setHistDY0.89272622591423->SetBinError(9,69.06752);
   setHistDY0.89272622591423->SetBinError(10,51.64808);
   setHistDY0.89272622591423->SetBinError(11,75.52247);
   setHistDY0.89272622591423->SetBinError(12,66.99265);
   setHistDY0.89272622591423->SetBinError(13,63.68095);
   setHistDY0.89272622591423->SetBinError(14,61.14451);
   setHistDY0.89272622591423->SetBinError(15,46.76403);
   setHistDY0.89272622591423->SetBinError(16,61.99523);
   setHistDY0.89272622591423->SetBinError(17,56.59031);
   setHistDY0.89272622591423->SetBinError(18,42.4677);
   setHistDY0.89272622591423->SetBinError(19,41.87544);
   setHistDY0.89272622591423->SetBinError(20,51.23909);
   setHistDY0.89272622591423->SetBinError(21,40.28824);
   setHistDY0.89272622591423->SetBinError(22,42.37966);
   setHistDY0.89272622591423->SetBinError(23,38.81529);
   setHistDY0.89272622591423->SetBinError(24,32.12373);
   setHistDY0.89272622591423->SetBinError(25,18.28822);
   setHistDY0.89272622591423->SetBinError(26,12.64389);
   setHistDY0.89272622591423->SetEntries(3749);
   setHistDY0.89272622591423->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.89272622591423->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.89272622591423->SetLineColor(ci);
   setHistDY0.89272622591423->SetLineWidth(2);
   setHistDY0.89272622591423->SetMarkerStyle(20);
   setHistDY0.89272622591423->GetXaxis()->SetNdivisions(1005);
   setHistDY0.89272622591423->GetXaxis()->SetLabelFont(43);
   setHistDY0.89272622591423->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.89272622591423->GetXaxis()->SetLabelSize(32);
   setHistDY0.89272622591423->GetXaxis()->SetTitleSize(35);
   setHistDY0.89272622591423->GetXaxis()->SetTickLength(0.05);
   setHistDY0.89272622591423->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.89272622591423->GetXaxis()->SetTitleFont(43);
   setHistDY0.89272622591423->GetYaxis()->SetNdivisions(506);
   setHistDY0.89272622591423->GetYaxis()->SetLabelFont(43);
   setHistDY0.89272622591423->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.89272622591423->GetYaxis()->SetLabelSize(32);
   setHistDY0.89272622591423->GetYaxis()->SetTitleSize(35);
   setHistDY0.89272622591423->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.89272622591423->GetYaxis()->SetTitleFont(43);
   setHistDY0.89272622591423->GetZaxis()->SetLabelFont(43);
   setHistDY0.89272622591423->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.89272622591423->GetZaxis()->SetLabelSize(32);
   setHistDY0.89272622591423->GetZaxis()->SetTitleSize(35);
   setHistDY0.89272622591423->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.89272622591423->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.892726225914,"HIST F");
   Double_t xAxis19[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistQCD_DD0.15502492099624 = new TH1F("setHistQCD_DD0.15502492099624","",26, xAxis19);
   setHistQCD_DD0.15502492099624->SetBinContent(1,5788.942);
   setHistQCD_DD0.15502492099624->SetBinContent(2,5213.615);
   setHistQCD_DD0.15502492099624->SetBinContent(3,3698.177);
   setHistQCD_DD0.15502492099624->SetBinContent(4,2815.527);
   setHistQCD_DD0.15502492099624->SetBinContent(5,2394.631);
   setHistQCD_DD0.15502492099624->SetBinContent(6,1988.933);
   setHistQCD_DD0.15502492099624->SetBinContent(7,1681.718);
   setHistQCD_DD0.15502492099624->SetBinContent(8,1582.259);
   setHistQCD_DD0.15502492099624->SetBinContent(9,1414.423);
   setHistQCD_DD0.15502492099624->SetBinContent(10,1404.856);
   setHistQCD_DD0.15502492099624->SetBinContent(11,1223.463);
   setHistQCD_DD0.15502492099624->SetBinContent(12,1157.828);
   setHistQCD_DD0.15502492099624->SetBinContent(13,1129.373);
   setHistQCD_DD0.15502492099624->SetBinContent(14,1035.5);
   setHistQCD_DD0.15502492099624->SetBinContent(15,960.3987);
   setHistQCD_DD0.15502492099624->SetBinContent(16,901.3581);
   setHistQCD_DD0.15502492099624->SetBinContent(17,846.5285);
   setHistQCD_DD0.15502492099624->SetBinContent(18,809.0423);
   setHistQCD_DD0.15502492099624->SetBinContent(19,744.4088);
   setHistQCD_DD0.15502492099624->SetBinContent(20,642.2025);
   setHistQCD_DD0.15502492099624->SetBinContent(21,597.4249);
   setHistQCD_DD0.15502492099624->SetBinContent(22,538.001);
   setHistQCD_DD0.15502492099624->SetBinContent(23,406.6831);
   setHistQCD_DD0.15502492099624->SetBinContent(24,344.8362);
   setHistQCD_DD0.15502492099624->SetBinContent(25,247.7701);
   setHistQCD_DD0.15502492099624->SetBinContent(26,92.58768);
   setHistQCD_DD0.15502492099624->SetBinError(1,56.75122);
   setHistQCD_DD0.15502492099624->SetBinError(2,57.11955);
   setHistQCD_DD0.15502492099624->SetBinError(3,48.45333);
   setHistQCD_DD0.15502492099624->SetBinError(4,41.16436);
   setHistQCD_DD0.15502492099624->SetBinError(5,36.6868);
   setHistQCD_DD0.15502492099624->SetBinError(6,37.37967);
   setHistQCD_DD0.15502492099624->SetBinError(7,35.5743);
   setHistQCD_DD0.15502492099624->SetBinError(8,31.75583);
   setHistQCD_DD0.15502492099624->SetBinError(9,30.66799);
   setHistQCD_DD0.15502492099624->SetBinError(10,28.45419);
   setHistQCD_DD0.15502492099624->SetBinError(11,29.85241);
   setHistQCD_DD0.15502492099624->SetBinError(12,26.80398);
   setHistQCD_DD0.15502492099624->SetBinError(13,26.36002);
   setHistQCD_DD0.15502492099624->SetBinError(14,27.0336);
   setHistQCD_DD0.15502492099624->SetBinError(15,24.95198);
   setHistQCD_DD0.15502492099624->SetBinError(16,23.36744);
   setHistQCD_DD0.15502492099624->SetBinError(17,24.13914);
   setHistQCD_DD0.15502492099624->SetBinError(18,22.74632);
   setHistQCD_DD0.15502492099624->SetBinError(19,22.39874);
   setHistQCD_DD0.15502492099624->SetBinError(20,21.30428);
   setHistQCD_DD0.15502492099624->SetBinError(21,20.2203);
   setHistQCD_DD0.15502492099624->SetBinError(22,18.55253);
   setHistQCD_DD0.15502492099624->SetBinError(23,17.90184);
   setHistQCD_DD0.15502492099624->SetBinError(24,15.69508);
   setHistQCD_DD0.15502492099624->SetBinError(25,15.89747);
   setHistQCD_DD0.15502492099624->SetBinError(26,7.862671);
   setHistQCD_DD0.15502492099624->SetEntries(127939);
   setHistQCD_DD0.15502492099624->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.15502492099624->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.15502492099624->SetLineColor(ci);
   setHistQCD_DD0.15502492099624->SetLineWidth(2);
   setHistQCD_DD0.15502492099624->SetMarkerStyle(20);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.15502492099624->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.15502492099624->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.15502492099624->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.15502492099624->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.15502492099624->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.15502492099624->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.15502492099624->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.15502492099624->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.15502492099624->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.15502492099624->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.15502492099624->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.15502492099624->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.15502492099624->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.15502492099624->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.155024920996,"HIST F");
   ->Draw("same");
   Double_t xAxis20[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata0.92429192713925 = new TH1F("setHistdata0.92429192713925","",26, xAxis20);
   setHistdata0.92429192713925->SetBinContent(1,18833);
   setHistdata0.92429192713925->SetBinContent(2,28235);
   setHistdata0.92429192713925->SetBinContent(3,24571);
   setHistdata0.92429192713925->SetBinContent(4,20498);
   setHistdata0.92429192713925->SetBinContent(5,18036);
   setHistdata0.92429192713925->SetBinContent(6,16514);
   setHistdata0.92429192713925->SetBinContent(7,15360);
   setHistdata0.92429192713925->SetBinContent(8,14606);
   setHistdata0.92429192713925->SetBinContent(9,14281);
   setHistdata0.92429192713925->SetBinContent(10,13814);
   setHistdata0.92429192713925->SetBinContent(11,13703);
   setHistdata0.92429192713925->SetBinContent(12,13465);
   setHistdata0.92429192713925->SetBinContent(13,13034);
   setHistdata0.92429192713925->SetBinError(1,137.2334);
   setHistdata0.92429192713925->SetBinError(2,168.0327);
   setHistdata0.92429192713925->SetBinError(3,156.7514);
   setHistdata0.92429192713925->SetBinError(4,143.1712);
   setHistdata0.92429192713925->SetBinError(5,134.2982);
   setHistdata0.92429192713925->SetBinError(6,128.5068);
   setHistdata0.92429192713925->SetBinError(7,123.9355);
   setHistdata0.92429192713925->SetBinError(8,120.8553);
   setHistdata0.92429192713925->SetBinError(9,119.5031);
   setHistdata0.92429192713925->SetBinError(10,117.533);
   setHistdata0.92429192713925->SetBinError(11,117.0598);
   setHistdata0.92429192713925->SetBinError(12,116.0388);
   setHistdata0.92429192713925->SetBinError(13,114.1665);
   setHistdata0.92429192713925->SetEntries(224950);
   setHistdata0.92429192713925->SetFillStyle(0);
   setHistdata0.92429192713925->SetMarkerStyle(20);
   setHistdata0.92429192713925->SetMarkerSize(1.15);
   setHistdata0.92429192713925->GetXaxis()->SetNdivisions(1005);
   setHistdata0.92429192713925->GetXaxis()->SetLabelFont(43);
   setHistdata0.92429192713925->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.92429192713925->GetXaxis()->SetLabelSize(32);
   setHistdata0.92429192713925->GetXaxis()->SetTitleSize(35);
   setHistdata0.92429192713925->GetXaxis()->SetTickLength(0.05);
   setHistdata0.92429192713925->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.92429192713925->GetXaxis()->SetTitleFont(43);
   setHistdata0.92429192713925->GetYaxis()->SetNdivisions(506);
   setHistdata0.92429192713925->GetYaxis()->SetLabelFont(43);
   setHistdata0.92429192713925->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.92429192713925->GetYaxis()->SetLabelSize(32);
   setHistdata0.92429192713925->GetYaxis()->SetTitleSize(35);
   setHistdata0.92429192713925->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.92429192713925->GetYaxis()->SetTitleFont(43);
   setHistdata0.92429192713925->GetZaxis()->SetLabelFont(43);
   setHistdata0.92429192713925->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.92429192713925->GetZaxis()->SetLabelSize(32);
   setHistdata0.92429192713925->GetZaxis()->SetTitleSize(35);
   setHistdata0.92429192713925->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.92429192713925->GetZaxis()->SetTitleFont(43);
   setHistdata0.92429192713925->Draw("PESame");
   
   TH2F *axis0.108581150502_copy26 = new TH2F("axis0.108581150502_copy26","",50,-1,1,50,0,41457.51);
   axis0.108581150502_copy26->SetDirectory(0);
   axis0.108581150502_copy26->SetMarkerStyle(20);
   axis0.108581150502_copy26->GetXaxis()->SetNdivisions(1005);
   axis0.108581150502_copy26->GetXaxis()->SetLabelFont(43);
   axis0.108581150502_copy26->GetXaxis()->SetLabelOffset(0.0105);
   axis0.108581150502_copy26->GetXaxis()->SetLabelSize(0);
   axis0.108581150502_copy26->GetXaxis()->SetTitleSize(35);
   axis0.108581150502_copy26->GetXaxis()->SetTickLength(0.025);
   axis0.108581150502_copy26->GetXaxis()->SetTitleOffset(1.135);
   axis0.108581150502_copy26->GetXaxis()->SetTitleFont(43);
   axis0.108581150502_copy26->GetYaxis()->SetTitle("Events / bin");
   axis0.108581150502_copy26->GetYaxis()->SetNdivisions(506);
   axis0.108581150502_copy26->GetYaxis()->SetLabelFont(43);
   axis0.108581150502_copy26->GetYaxis()->SetLabelOffset(0.0087);
   axis0.108581150502_copy26->GetYaxis()->SetLabelSize(32);
   axis0.108581150502_copy26->GetYaxis()->SetTitleSize(35);
   axis0.108581150502_copy26->GetYaxis()->SetTickLength(0.02631579);
   axis0.108581150502_copy26->GetYaxis()->SetTitleOffset(1.32);
   axis0.108581150502_copy26->GetYaxis()->SetTitleFont(43);
   axis0.108581150502_copy26->GetZaxis()->SetLabelFont(43);
   axis0.108581150502_copy26->GetZaxis()->SetLabelOffset(0.0087);
   axis0.108581150502_copy26->GetZaxis()->SetLabelSize(32);
   axis0.108581150502_copy26->GetZaxis()->SetTitleSize(35);
   axis0.108581150502_copy26->GetZaxis()->SetTitleOffset(1.32);
   axis0.108581150502_copy26->GetZaxis()->SetTitleFont(43);
   axis0.108581150502_copy26->Draw("sameaxis");
   
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
   AText = pt->AddText("e#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 36#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13TeV)");
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.924291927139","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.155024920996","Multijet","F");

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
   entry=leg->AddEntry("setHistDY0.892726225914","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexLF0.653374918138","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexHF0.851115330081","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.555326313747","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWChannel0.520392573205","tW","F");

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
   entry=leg->AddEntry("setHisttChannel0.852731988854","#it{t}-channel","F");

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
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726_2->Modified();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->cd();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->Modified();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->cd();
   cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726->SetSelected(cvelectron_2j1t_bdt_tch_boost04_qcdnone_blind0.225760447726);
}
