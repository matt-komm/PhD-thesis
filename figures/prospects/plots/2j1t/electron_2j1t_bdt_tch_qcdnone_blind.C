void plots/2j1t/electron_2j1t_bdt_tch_qcdnone_blind()
{
//=========Macro generated from canvas: cvelectron_2j1t_bdt_tch_qcdnone_blind90301/
//=========  (Fri Aug 25 02:00:12 2017) by ROOT version6.02/05
   TCanvas *cvelectron_2j1t_bdt_tch_qcdnone_blind90301 = new TCanvas("cvelectron_2j1t_bdt_tch_qcdnone_blind90301", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetHighLightColor(2);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->Range(0,0,1,1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetFillColor(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetBorderMode(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetBorderSize(2);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetTickx(1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetTicky(1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetLeftMargin(0.1150442);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetRightMargin(0.227083);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetTopMargin(0.04002582);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetBottomMargin(0.08064517);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetFrameLineWidth(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetFrameBorderMode(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1
   TPad *cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1 = new TPad("cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1", "",0,0,1,1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->Draw();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->cd();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetFillColor(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetFillStyle(4000);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetBorderMode(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetBorderSize(2);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetTickx(1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetTicky(1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetLeftMargin(0.14);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetRightMargin(0.26);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetTopMargin(0.65);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetBottomMargin(0.14);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetFrameBorderMode(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->SetFrameBorderMode(0);
   
   TH2F *axisRes6572914 = new TH2F("axisRes6572914","",50,-1,1,50,0.6,1.4);
   axisRes6572914->SetMarkerStyle(20);
   axisRes6572914->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes6572914->GetXaxis()->SetNdivisions(1005);
   axisRes6572914->GetXaxis()->SetLabelFont(43);
   axisRes6572914->GetXaxis()->SetLabelOffset(0.0105);
   axisRes6572914->GetXaxis()->SetLabelSize(32);
   axisRes6572914->GetXaxis()->SetTitleSize(35);
   axisRes6572914->GetXaxis()->SetTickLength(0.04166667);
   axisRes6572914->GetXaxis()->SetTitleOffset(1.135);
   axisRes6572914->GetXaxis()->SetTitleFont(43);
   axisRes6572914->GetYaxis()->SetTitle("Data/MC");
   axisRes6572914->GetYaxis()->SetNdivisions(406);
   axisRes6572914->GetYaxis()->SetLabelFont(43);
   axisRes6572914->GetYaxis()->SetLabelOffset(0.0087);
   axisRes6572914->GetYaxis()->SetLabelSize(32);
   axisRes6572914->GetYaxis()->SetTitleSize(35);
   axisRes6572914->GetYaxis()->SetTickLength(0.07142857);
   axisRes6572914->GetYaxis()->SetTitleOffset(1.32);
   axisRes6572914->GetYaxis()->SetTitleFont(43);
   axisRes6572914->GetZaxis()->SetLabelFont(43);
   axisRes6572914->GetZaxis()->SetLabelOffset(0.0087);
   axisRes6572914->GetZaxis()->SetLabelSize(32);
   axisRes6572914->GetZaxis()->SetTitleSize(35);
   axisRes6572914->GetZaxis()->SetTitleOffset(1.32);
   axisRes6572914->GetZaxis()->SetTitleFont(43);
   axisRes6572914->Draw("AXIS");
   TBox *box = new TBox(-1,0.9711258,-0.9230769,1.028874);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9711258,-0.9230769,1.028874);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.9855416,-0.8461538,1.014458);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9230769,0.9855416,-0.8461538,1.014458);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9827877,-0.7692308,1.017212);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8461538,0.9827877,-0.7692308,1.017212);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9813974,-0.6923077,1.018603);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7692308,0.9813974,-0.6923077,1.018603);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.982256,-0.6153846,1.017744);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6923077,0.982256,-0.6153846,1.017744);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.9825127,-0.5384615,1.017487);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6153846,0.9825127,-0.5384615,1.017487);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9818806,-0.4615385,1.018119);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5384615,0.9818806,-0.4615385,1.018119);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.982288,-0.3846154,1.017712);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4615385,0.982288,-0.3846154,1.017712);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9817306,-0.3076923,1.018269);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3846154,0.9817306,-0.3076923,1.018269);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.981577,-0.2307692,1.018423);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3076923,0.981577,-0.2307692,1.018423);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9806959,-0.1538462,1.019304);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2307692,0.9806959,-0.1538462,1.019304);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.9823724,-0.07692308,1.017628);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1538462,0.9823724,-0.07692308,1.017628);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.9818584,0,1.018142);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.07692308,0.9818584,0,1.018142);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9807328,0.07692308,1.019267);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9807328,0.07692308,1.019267);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9820839,0.1538462,1.017916);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.07692308,0.9820839,0.1538462,1.017916);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.9818286,0.2307692,1.018171);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1538462,0.9818286,0.2307692,1.018171);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9793811,0.3076923,1.020619);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2307692,0.9793811,0.3076923,1.020619);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9792543,0.3846154,1.020746);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3076923,0.9792543,0.3846154,1.020746);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9769548,0.4615385,1.023045);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3846154,0.9769548,0.4615385,1.023045);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9758012,0.5384615,1.024199);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4615385,0.9758012,0.5384615,1.024199);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9733887,0.6153846,1.026611);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5384615,0.9733887,0.6153846,1.026611);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9750318,0.6923077,1.024968);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6153846,0.9750318,0.6923077,1.024968);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9755565,0.7692308,1.024444);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6923077,0.9755565,0.7692308,1.024444);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9743598,0.8461538,1.02564);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7692308,0.9743598,0.8461538,1.02564);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.977234,0.9230769,1.022766);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8461538,0.977234,0.9230769,1.022766);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9591713,1,1.040829);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9230769,0.9591713,1,1.040829);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis11[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata66937856515 = new TH1F("setHistdata66937856515","",26, xAxis11);
   setHistdata66937856515->SetBinContent(1,0.9408472);
   setHistdata66937856515->SetBinContent(2,0.9326786);
   setHistdata66937856515->SetBinContent(3,0.9816051);
   setHistdata66937856515->SetBinContent(4,1.003258);
   setHistdata66937856515->SetBinContent(5,1.006215);
   setHistdata66937856515->SetBinContent(6,1.000714);
   setHistdata66937856515->SetBinContent(7,1.010039);
   setHistdata66937856515->SetBinContent(8,1.014266);
   setHistdata66937856515->SetBinContent(9,1.031687);
   setHistdata66937856515->SetBinContent(10,1.069004);
   setHistdata66937856515->SetBinContent(11,1.022116);
   setHistdata66937856515->SetBinContent(12,1.02592);
   setHistdata66937856515->SetBinContent(13,0.9996897);
   setHistdata66937856515->SetBinError(1,0.01115481);
   setHistdata66937856515->SetBinError(2,0.006221868);
   setHistdata66937856515->SetBinError(3,0.007295004);
   setHistdata66937856515->SetBinError(4,0.007946363);
   setHistdata66937856515->SetBinError(5,0.008024343);
   setHistdata66937856515->SetBinError(6,0.007989873);
   setHistdata66937856515->SetBinError(7,0.008053299);
   setHistdata66937856515->SetBinError(8,0.008126101);
   setHistdata66937856515->SetBinError(9,0.008573611);
   setHistdata66937856515->SetBinError(10,0.008878207);
   setHistdata66937856515->SetBinError(11,0.008884273);
   setHistdata66937856515->SetBinError(12,0.009024334);
   setHistdata66937856515->SetBinError(13,0.008863835);
   setHistdata66937856515->SetEntries(194235);
   setHistdata66937856515->SetFillStyle(0);
   setHistdata66937856515->SetMarkerStyle(20);
   setHistdata66937856515->SetMarkerSize(1.15);
   setHistdata66937856515->GetXaxis()->SetNdivisions(1005);
   setHistdata66937856515->GetXaxis()->SetLabelFont(43);
   setHistdata66937856515->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata66937856515->GetXaxis()->SetLabelSize(32);
   setHistdata66937856515->GetXaxis()->SetTitleSize(35);
   setHistdata66937856515->GetXaxis()->SetTickLength(0.05);
   setHistdata66937856515->GetXaxis()->SetTitleOffset(1.135);
   setHistdata66937856515->GetXaxis()->SetTitleFont(43);
   setHistdata66937856515->GetYaxis()->SetNdivisions(506);
   setHistdata66937856515->GetYaxis()->SetLabelFont(43);
   setHistdata66937856515->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata66937856515->GetYaxis()->SetLabelSize(32);
   setHistdata66937856515->GetYaxis()->SetTitleSize(35);
   setHistdata66937856515->GetYaxis()->SetTitleOffset(1.32);
   setHistdata66937856515->GetYaxis()->SetTitleFont(43);
   setHistdata66937856515->GetZaxis()->SetLabelFont(43);
   setHistdata66937856515->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata66937856515->GetZaxis()->SetLabelSize(32);
   setHistdata66937856515->GetZaxis()->SetTitleSize(35);
   setHistdata66937856515->GetZaxis()->SetTitleOffset(1.32);
   setHistdata66937856515->GetZaxis()->SetTitleFont(43);
   setHistdata66937856515->Draw("PESame");
   
   TF1 *axisLine766772 = new TF1("axisLine76677","1",-1,1);
   axisLine766772->SetFillColor(19);
   axisLine766772->SetFillStyle(0);
   axisLine766772->SetMarkerStyle(20);
   axisLine766772->SetLineWidth(1);
   axisLine766772->GetXaxis()->SetNdivisions(1005);
   axisLine766772->GetXaxis()->SetLabelFont(43);
   axisLine766772->GetXaxis()->SetLabelOffset(0.0105);
   axisLine766772->GetXaxis()->SetLabelSize(32);
   axisLine766772->GetXaxis()->SetTitleSize(35);
   axisLine766772->GetXaxis()->SetTickLength(0.05);
   axisLine766772->GetXaxis()->SetTitleOffset(1.135);
   axisLine766772->GetXaxis()->SetTitleFont(43);
   axisLine766772->GetYaxis()->SetNdivisions(506);
   axisLine766772->GetYaxis()->SetLabelFont(43);
   axisLine766772->GetYaxis()->SetLabelOffset(0.0087);
   axisLine766772->GetYaxis()->SetLabelSize(32);
   axisLine766772->GetYaxis()->SetTitleSize(35);
   axisLine766772->GetYaxis()->SetTitleOffset(1.32);
   axisLine766772->GetYaxis()->SetTitleFont(43);
   axisLine766772->Draw("SameL");
   
   TH2F *axisRes65729_copy16 = new TH2F("axisRes65729_copy16","",50,-1,1,50,0.6,1.4);
   axisRes65729_copy16->SetDirectory(0);
   axisRes65729_copy16->SetMarkerStyle(20);
   axisRes65729_copy16->GetXaxis()->SetTitle("BDT#lower[0.3]{#scale[0.7]{#it{t}-ch.}}");
   axisRes65729_copy16->GetXaxis()->SetNdivisions(1005);
   axisRes65729_copy16->GetXaxis()->SetLabelFont(43);
   axisRes65729_copy16->GetXaxis()->SetLabelOffset(0.0105);
   axisRes65729_copy16->GetXaxis()->SetLabelSize(32);
   axisRes65729_copy16->GetXaxis()->SetTitleSize(35);
   axisRes65729_copy16->GetXaxis()->SetTickLength(0.04166667);
   axisRes65729_copy16->GetXaxis()->SetTitleOffset(1.135);
   axisRes65729_copy16->GetXaxis()->SetTitleFont(43);
   axisRes65729_copy16->GetYaxis()->SetTitle("Data/MC");
   axisRes65729_copy16->GetYaxis()->SetNdivisions(406);
   axisRes65729_copy16->GetYaxis()->SetLabelFont(43);
   axisRes65729_copy16->GetYaxis()->SetLabelOffset(0.0087);
   axisRes65729_copy16->GetYaxis()->SetLabelSize(32);
   axisRes65729_copy16->GetYaxis()->SetTitleSize(35);
   axisRes65729_copy16->GetYaxis()->SetTickLength(0.07142857);
   axisRes65729_copy16->GetYaxis()->SetTitleOffset(1.32);
   axisRes65729_copy16->GetYaxis()->SetTitleFont(43);
   axisRes65729_copy16->GetZaxis()->SetLabelFont(43);
   axisRes65729_copy16->GetZaxis()->SetLabelOffset(0.0087);
   axisRes65729_copy16->GetZaxis()->SetLabelSize(32);
   axisRes65729_copy16->GetZaxis()->SetTitleSize(35);
   axisRes65729_copy16->GetZaxis()->SetTitleOffset(1.32);
   axisRes65729_copy16->GetZaxis()->SetTitleFont(43);
   axisRes65729_copy16->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_1->Modified();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->cd();
  
// ------------>Primitives in pad: cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2
   TPad *cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2 = new TPad("cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2", "",0,0,1,1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->Draw();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->cd();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->Range(-1.466667,-21155.32,1.866667,39288.45);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetFillColor(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetFillStyle(4000);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetBorderMode(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetBorderSize(2);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetTickx(1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetTicky(1);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetLeftMargin(0.14);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetRightMargin(0.26);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetTopMargin(0.08);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetBottomMargin(0.35);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetFrameBorderMode(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetFrameFillStyle(0);
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->SetFrameBorderMode(0);
   
   TH2F *axis5572417 = new TH2F("axis5572417","",50,-1,1,50,0,34452.95);
   axis5572417->SetMarkerStyle(20);
   axis5572417->GetXaxis()->SetNdivisions(1005);
   axis5572417->GetXaxis()->SetLabelFont(43);
   axis5572417->GetXaxis()->SetLabelOffset(0.0105);
   axis5572417->GetXaxis()->SetLabelSize(0);
   axis5572417->GetXaxis()->SetTitleSize(35);
   axis5572417->GetXaxis()->SetTickLength(0.025);
   axis5572417->GetXaxis()->SetTitleOffset(1.135);
   axis5572417->GetXaxis()->SetTitleFont(43);
   axis5572417->GetYaxis()->SetTitle("Events / bin");
   axis5572417->GetYaxis()->SetNdivisions(506);
   axis5572417->GetYaxis()->SetLabelFont(43);
   axis5572417->GetYaxis()->SetLabelOffset(0.0087);
   axis5572417->GetYaxis()->SetLabelSize(32);
   axis5572417->GetYaxis()->SetTitleSize(35);
   axis5572417->GetYaxis()->SetTickLength(0.02631579);
   axis5572417->GetYaxis()->SetTitleOffset(1.32);
   axis5572417->GetYaxis()->SetTitleFont(43);
   axis5572417->GetZaxis()->SetLabelFont(43);
   axis5572417->GetZaxis()->SetLabelOffset(0.0087);
   axis5572417->GetZaxis()->SetLabelSize(32);
   axis5572417->GetZaxis()->SetTitleSize(35);
   axis5572417->GetZaxis()->SetTitleOffset(1.32);
   axis5572417->GetZaxis()->SetTitleFont(43);
   axis5572417->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis12[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *_stack_1_stack_2 = new TH1F("_stack_1_stack_2","",26, xAxis12);
   _stack_1_stack_2->SetMinimum(-16.49194);
   _stack_1_stack_2->SetMaximum(25297.62);
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
   
   TH1F *setHisttChannel7790518 = new TH1F("setHisttChannel7790518","",26, xAxis13);
   setHisttChannel7790518->SetBinContent(1,52.53234);
   setHisttChannel7790518->SetBinContent(2,241.2486);
   setHisttChannel7790518->SetBinContent(3,324.7657);
   setHisttChannel7790518->SetBinContent(4,415.1692);
   setHisttChannel7790518->SetBinContent(5,513.9189);
   setHisttChannel7790518->SetBinContent(6,624.3644);
   setHisttChannel7790518->SetBinContent(7,748.908);
   setHisttChannel7790518->SetBinContent(8,828.5237);
   setHisttChannel7790518->SetBinContent(9,886.9697);
   setHisttChannel7790518->SetBinContent(10,989.5419);
   setHisttChannel7790518->SetBinContent(11,1040.207);
   setHisttChannel7790518->SetBinContent(12,1105.789);
   setHisttChannel7790518->SetBinContent(13,1216.927);
   setHisttChannel7790518->SetBinContent(14,1300.724);
   setHisttChannel7790518->SetBinContent(15,1378.005);
   setHisttChannel7790518->SetBinContent(16,1502.514);
   setHisttChannel7790518->SetBinContent(17,1598.501);
   setHisttChannel7790518->SetBinContent(18,1675.367);
   setHisttChannel7790518->SetBinContent(19,1729.986);
   setHisttChannel7790518->SetBinContent(20,1815.626);
   setHisttChannel7790518->SetBinContent(21,1928.172);
   setHisttChannel7790518->SetBinContent(22,2090.53);
   setHisttChannel7790518->SetBinContent(23,2341.755);
   setHisttChannel7790518->SetBinContent(24,2707.445);
   setHisttChannel7790518->SetBinContent(25,2918.506);
   setHisttChannel7790518->SetBinContent(26,857.5979);
   setHisttChannel7790518->SetBinError(1,2.01376);
   setHisttChannel7790518->SetBinError(2,4.326724);
   setHisttChannel7790518->SetBinError(3,5.005415);
   setHisttChannel7790518->SetBinError(4,5.639113);
   setHisttChannel7790518->SetBinError(5,6.263104);
   setHisttChannel7790518->SetBinError(6,6.896051);
   setHisttChannel7790518->SetBinError(7,7.544705);
   setHisttChannel7790518->SetBinError(8,7.918085);
   setHisttChannel7790518->SetBinError(9,8.183739);
   setHisttChannel7790518->SetBinError(10,8.646188);
   setHisttChannel7790518->SetBinError(11,8.846749);
   setHisttChannel7790518->SetBinError(12,9.112596);
   setHisttChannel7790518->SetBinError(13,9.565872);
   setHisttChannel7790518->SetBinError(14,9.875306);
   setHisttChannel7790518->SetBinError(15,10.16546);
   setHisttChannel7790518->SetBinError(16,10.61241);
   setHisttChannel7790518->SetBinError(17,10.93211);
   setHisttChannel7790518->SetBinError(18,11.19024);
   setHisttChannel7790518->SetBinError(19,11.36626);
   setHisttChannel7790518->SetBinError(20,11.63273);
   setHisttChannel7790518->SetBinError(21,11.98265);
   setHisttChannel7790518->SetBinError(22,12.46975);
   setHisttChannel7790518->SetBinError(23,13.19549);
   setHisttChannel7790518->SetBinError(24,14.1757);
   setHisttChannel7790518->SetBinError(25,14.71823);
   setHisttChannel7790518->SetBinError(26,7.98548);
   setHisttChannel7790518->SetEntries(467747);
   setHisttChannel7790518->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel7790518->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel7790518->SetLineColor(ci);
   setHisttChannel7790518->SetLineWidth(2);
   setHisttChannel7790518->SetMarkerStyle(20);
   setHisttChannel7790518->GetXaxis()->SetNdivisions(1005);
   setHisttChannel7790518->GetXaxis()->SetLabelFont(43);
   setHisttChannel7790518->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel7790518->GetXaxis()->SetLabelSize(32);
   setHisttChannel7790518->GetXaxis()->SetTitleSize(35);
   setHisttChannel7790518->GetXaxis()->SetTickLength(0.05);
   setHisttChannel7790518->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel7790518->GetXaxis()->SetTitleFont(43);
   setHisttChannel7790518->GetYaxis()->SetNdivisions(506);
   setHisttChannel7790518->GetYaxis()->SetLabelFont(43);
   setHisttChannel7790518->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel7790518->GetYaxis()->SetLabelSize(32);
   setHisttChannel7790518->GetYaxis()->SetTitleSize(35);
   setHisttChannel7790518->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel7790518->GetYaxis()->SetTitleFont(43);
   setHisttChannel7790518->GetZaxis()->SetLabelFont(43);
   setHisttChannel7790518->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel7790518->GetZaxis()->SetLabelSize(32);
   setHisttChannel7790518->GetZaxis()->SetTitleSize(35);
   setHisttChannel7790518->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel7790518->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel77905,"HIST F");
   Double_t xAxis14[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHisttWChannel4905919 = new TH1F("setHisttWChannel4905919","",26, xAxis14);
   setHisttWChannel4905919->SetBinContent(1,605.3622);
   setHisttWChannel4905919->SetBinContent(2,1981.585);
   setHisttWChannel4905919->SetBinContent(3,1272.542);
   setHisttWChannel4905919->SetBinContent(4,1016.273);
   setHisttWChannel4905919->SetBinContent(5,954.1341);
   setHisttWChannel4905919->SetBinContent(6,952.6236);
   setHisttWChannel4905919->SetBinContent(7,928.7078);
   setHisttWChannel4905919->SetBinContent(8,907.0289);
   setHisttWChannel4905919->SetBinContent(9,860.1942);
   setHisttWChannel4905919->SetBinContent(10,840.014);
   setHisttWChannel4905919->SetBinContent(11,824.3635);
   setHisttWChannel4905919->SetBinContent(12,782.528);
   setHisttWChannel4905919->SetBinContent(13,779.7819);
   setHisttWChannel4905919->SetBinContent(14,732.3311);
   setHisttWChannel4905919->SetBinContent(15,679.132);
   setHisttWChannel4905919->SetBinContent(16,633.2457);
   setHisttWChannel4905919->SetBinContent(17,576.8478);
   setHisttWChannel4905919->SetBinContent(18,496.95);
   setHisttWChannel4905919->SetBinContent(19,375.295);
   setHisttWChannel4905919->SetBinContent(20,288.3884);
   setHisttWChannel4905919->SetBinContent(21,229.9859);
   setHisttWChannel4905919->SetBinContent(22,190.5989);
   setHisttWChannel4905919->SetBinContent(23,157.0815);
   setHisttWChannel4905919->SetBinContent(24,128.182);
   setHisttWChannel4905919->SetBinContent(25,78.79398);
   setHisttWChannel4905919->SetBinContent(26,14.6604);
   setHisttWChannel4905919->SetBinError(1,10.58034);
   setHisttWChannel4905919->SetBinError(2,19.12525);
   setHisttWChannel4905919->SetBinError(3,15.25712);
   setHisttWChannel4905919->SetBinError(4,13.61644);
   setHisttWChannel4905919->SetBinError(5,13.15294);
   setHisttWChannel4905919->SetBinError(6,13.12639);
   setHisttWChannel4905919->SetBinError(7,12.96504);
   setHisttWChannel4905919->SetBinError(8,12.77566);
   setHisttWChannel4905919->SetBinError(9,12.44194);
   setHisttWChannel4905919->SetBinError(10,12.32162);
   setHisttWChannel4905919->SetBinError(11,12.18405);
   setHisttWChannel4905919->SetBinError(12,11.88085);
   setHisttWChannel4905919->SetBinError(13,11.84787);
   setHisttWChannel4905919->SetBinError(14,11.46949);
   setHisttWChannel4905919->SetBinError(15,11.07026);
   setHisttWChannel4905919->SetBinError(16,10.67239);
   setHisttWChannel4905919->SetBinError(17,10.21086);
   setHisttWChannel4905919->SetBinError(18,9.481102);
   setHisttWChannel4905919->SetBinError(19,8.227183);
   setHisttWChannel4905919->SetBinError(20,7.2044);
   setHisttWChannel4905919->SetBinError(21,6.425639);
   setHisttWChannel4905919->SetBinError(22,5.866099);
   setHisttWChannel4905919->SetBinError(23,5.303624);
   setHisttWChannel4905919->SetBinError(24,4.791649);
   setHisttWChannel4905919->SetBinError(25,3.750761);
   setHisttWChannel4905919->SetBinError(26,1.629523);
   setHisttWChannel4905919->SetEntries(101602);
   setHisttWChannel4905919->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWChannel4905919->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWChannel4905919->SetLineColor(ci);
   setHisttWChannel4905919->SetLineWidth(2);
   setHisttWChannel4905919->SetMarkerStyle(20);
   setHisttWChannel4905919->GetXaxis()->SetNdivisions(1005);
   setHisttWChannel4905919->GetXaxis()->SetLabelFont(43);
   setHisttWChannel4905919->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWChannel4905919->GetXaxis()->SetLabelSize(32);
   setHisttWChannel4905919->GetXaxis()->SetTitleSize(35);
   setHisttWChannel4905919->GetXaxis()->SetTickLength(0.05);
   setHisttWChannel4905919->GetXaxis()->SetTitleOffset(1.135);
   setHisttWChannel4905919->GetXaxis()->SetTitleFont(43);
   setHisttWChannel4905919->GetYaxis()->SetNdivisions(506);
   setHisttWChannel4905919->GetYaxis()->SetLabelFont(43);
   setHisttWChannel4905919->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWChannel4905919->GetYaxis()->SetLabelSize(32);
   setHisttWChannel4905919->GetYaxis()->SetTitleSize(35);
   setHisttWChannel4905919->GetYaxis()->SetTitleOffset(1.32);
   setHisttWChannel4905919->GetYaxis()->SetTitleFont(43);
   setHisttWChannel4905919->GetZaxis()->SetLabelFont(43);
   setHisttWChannel4905919->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWChannel4905919->GetZaxis()->SetLabelSize(32);
   setHisttWChannel4905919->GetZaxis()->SetTitleSize(35);
   setHisttWChannel4905919->GetZaxis()->SetTitleOffset(1.32);
   setHisttWChannel4905919->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWChannel49059,"HIST F");
   Double_t xAxis15[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistTTJets1535520 = new TH1F("setHistTTJets1535520","",26, xAxis15);
   setHistTTJets1535520->SetBinContent(1,3476.055);
   setHistTTJets1535520->SetBinContent(2,14585.88);
   setHistTTJets1535520->SetBinContent(3,10699.17);
   setHistTTJets1535520->SetBinContent(4,9026.462);
   setHistTTJets1535520->SetBinContent(5,8806.937);
   setHistTTJets1535520->SetBinContent(6,8707.227);
   setHistTTJets1535520->SetBinContent(7,8534.018);
   setHistTTJets1535520->SetBinContent(8,8527.957);
   setHistTTJets1535520->SetBinContent(9,8009.271);
   setHistTTJets1535520->SetBinContent(10,7757.049);
   setHistTTJets1535520->SetBinContent(11,7445.958);
   setHistTTJets1535520->SetBinContent(12,7198.814);
   setHistTTJets1535520->SetBinContent(13,6970.641);
   setHistTTJets1535520->SetBinContent(14,6675.187);
   setHistTTJets1535520->SetBinContent(15,6502);
   setHistTTJets1535520->SetBinContent(16,6108.171);
   setHistTTJets1535520->SetBinContent(17,5458.589);
   setHistTTJets1535520->SetBinContent(18,4856.584);
   setHistTTJets1535520->SetBinContent(19,3800.944);
   setHistTTJets1535520->SetBinContent(20,3142.904);
   setHistTTJets1535520->SetBinContent(21,2623.518);
   setHistTTJets1535520->SetBinContent(22,2260.571);
   setHistTTJets1535520->SetBinContent(23,1856.047);
   setHistTTJets1535520->SetBinContent(24,1484.008);
   setHistTTJets1535520->SetBinContent(25,880.2044);
   setHistTTJets1535520->SetBinContent(26,143.7754);
   setHistTTJets1535520->SetBinError(1,36.85179);
   setHistTTJets1535520->SetBinError(2,75.56581);
   setHistTTJets1535520->SetBinError(3,64.58125);
   setHistTTJets1535520->SetBinError(4,59.33916);
   setHistTTJets1535520->SetBinError(5,58.52874);
   setHistTTJets1535520->SetBinError(6,58.1582);
   setHistTTJets1535520->SetBinError(7,57.55781);
   setHistTTJets1535520->SetBinError(8,57.48533);
   setHistTTJets1535520->SetBinError(9,55.69922);
   setHistTTJets1535520->SetBinError(10,54.76359);
   setHistTTJets1535520->SetBinError(11,53.64071);
   setHistTTJets1535520->SetBinError(12,52.67412);
   setHistTTJets1535520->SetBinError(13,51.85668);
   setHistTTJets1535520->SetBinError(14,50.76303);
   setHistTTJets1535520->SetBinError(15,50.0975);
   setHistTTJets1535520->SetBinError(16,48.5858);
   setHistTTJets1535520->SetBinError(17,45.94029);
   setHistTTJets1535520->SetBinError(18,43.32119);
   setHistTTJets1535520->SetBinError(19,38.24376);
   setHistTTJets1535520->SetBinError(20,34.80153);
   setHistTTJets1535520->SetBinError(21,31.75649);
   setHistTTJets1535520->SetBinError(22,29.44479);
   setHistTTJets1535520->SetBinError(23,26.65465);
   setHistTTJets1535520->SetBinError(24,23.75662);
   setHistTTJets1535520->SetBinError(25,18.25869);
   setHistTTJets1535520->SetBinError(26,7.39958);
   setHistTTJets1535520->SetEntries(429101);
   setHistTTJets1535520->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets1535520->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets1535520->SetLineColor(ci);
   setHistTTJets1535520->SetLineWidth(2);
   setHistTTJets1535520->SetMarkerStyle(20);
   setHistTTJets1535520->GetXaxis()->SetNdivisions(1005);
   setHistTTJets1535520->GetXaxis()->SetLabelFont(43);
   setHistTTJets1535520->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets1535520->GetXaxis()->SetLabelSize(32);
   setHistTTJets1535520->GetXaxis()->SetTitleSize(35);
   setHistTTJets1535520->GetXaxis()->SetTickLength(0.05);
   setHistTTJets1535520->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets1535520->GetXaxis()->SetTitleFont(43);
   setHistTTJets1535520->GetYaxis()->SetNdivisions(506);
   setHistTTJets1535520->GetYaxis()->SetLabelFont(43);
   setHistTTJets1535520->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets1535520->GetYaxis()->SetLabelSize(32);
   setHistTTJets1535520->GetYaxis()->SetTitleSize(35);
   setHistTTJets1535520->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets1535520->GetYaxis()->SetTitleFont(43);
   setHistTTJets1535520->GetZaxis()->SetLabelFont(43);
   setHistTTJets1535520->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets1535520->GetZaxis()->SetLabelSize(32);
   setHistTTJets1535520->GetZaxis()->SetTitleSize(35);
   setHistTTJets1535520->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets1535520->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets15355,"HIST F");
   Double_t xAxis16[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexHF2327321 = new TH1F("setHistWJetsAMCexHF2327321","",26, xAxis16);
   setHistWJetsAMCexHF2327321->SetBinContent(1,1660.495);
   setHistWJetsAMCexHF2327321->SetBinContent(2,3796.386);
   setHistWJetsAMCexHF2327321->SetBinContent(3,2923.77);
   setHistWJetsAMCexHF2327321->SetBinContent(4,2333.909);
   setHistWJetsAMCexHF2327321->SetBinContent(5,2389.792);
   setHistWJetsAMCexHF2327321->SetBinContent(6,2402.249);
   setHistWJetsAMCexHF2327321->SetBinContent(7,2289.821);
   setHistWJetsAMCexHF2327321->SetBinContent(8,2130.964);
   setHistWJetsAMCexHF2327321->SetBinContent(9,1683.874);
   setHistWJetsAMCexHF2327321->SetBinContent(10,1715.04);
   setHistWJetsAMCexHF2327321->SetBinContent(11,1400.28);
   setHistWJetsAMCexHF2327321->SetBinContent(12,1679.67);
   setHistWJetsAMCexHF2327321->SetBinContent(13,1697.102);
   setHistWJetsAMCexHF2327321->SetBinContent(14,1345.66);
   setHistWJetsAMCexHF2327321->SetBinContent(15,1274.895);
   setHistWJetsAMCexHF2327321->SetBinContent(16,1380.458);
   setHistWJetsAMCexHF2327321->SetBinContent(17,1064.672);
   setHistWJetsAMCexHF2327321->SetBinContent(18,1464.958);
   setHistWJetsAMCexHF2327321->SetBinContent(19,824.7854);
   setHistWJetsAMCexHF2327321->SetBinContent(20,516.4257);
   setHistWJetsAMCexHF2327321->SetBinContent(21,1060.178);
   setHistWJetsAMCexHF2327321->SetBinContent(22,477.1893);
   setHistWJetsAMCexHF2327321->SetBinContent(23,469.8775);
   setHistWJetsAMCexHF2327321->SetBinContent(24,360.5644);
   setHistWJetsAMCexHF2327321->SetBinContent(25,348.6559);
   setHistWJetsAMCexHF2327321->SetBinContent(26,195.9455);
   setHistWJetsAMCexHF2327321->SetBinError(1,170.7541);
   setHistWJetsAMCexHF2327321->SetBinError(2,279.9532);
   setHistWJetsAMCexHF2327321->SetBinError(3,263.7595);
   setHistWJetsAMCexHF2327321->SetBinError(4,243.8106);
   setHistWJetsAMCexHF2327321->SetBinError(5,233.8729);
   setHistWJetsAMCexHF2327321->SetBinError(6,232.0019);
   setHistWJetsAMCexHF2327321->SetBinError(7,235.5373);
   setHistWJetsAMCexHF2327321->SetBinError(8,220.4133);
   setHistWJetsAMCexHF2327321->SetBinError(9,212.4727);
   setHistWJetsAMCexHF2327321->SetBinError(10,211.4552);
   setHistWJetsAMCexHF2327321->SetBinError(11,197.3835);
   setHistWJetsAMCexHF2327321->SetBinError(12,187.2644);
   setHistWJetsAMCexHF2327321->SetBinError(13,183.8782);
   setHistWJetsAMCexHF2327321->SetBinError(14,180.3315);
   setHistWJetsAMCexHF2327321->SetBinError(15,169.9323);
   setHistWJetsAMCexHF2327321->SetBinError(16,162.9614);
   setHistWJetsAMCexHF2327321->SetBinError(17,159.4181);
   setHistWJetsAMCexHF2327321->SetBinError(18,160.3864);
   setHistWJetsAMCexHF2327321->SetBinError(19,143.0519);
   setHistWJetsAMCexHF2327321->SetBinError(20,131.8135);
   setHistWJetsAMCexHF2327321->SetBinError(21,131.99);
   setHistWJetsAMCexHF2327321->SetBinError(22,118.2826);
   setHistWJetsAMCexHF2327321->SetBinError(23,110.868);
   setHistWJetsAMCexHF2327321->SetBinError(24,109.055);
   setHistWJetsAMCexHF2327321->SetBinError(25,88.1707);
   setHistWJetsAMCexHF2327321->SetBinError(26,46.64513);
   setHistWJetsAMCexHF2327321->SetEntries(15224);
   setHistWJetsAMCexHF2327321->SetDirectory(0);

   ci = TColor::GetColor("#1bb320");
   setHistWJetsAMCexHF2327321->SetFillColor(ci);

   ci = TColor::GetColor("#106b13");
   setHistWJetsAMCexHF2327321->SetLineColor(ci);
   setHistWJetsAMCexHF2327321->SetLineWidth(2);
   setHistWJetsAMCexHF2327321->SetMarkerStyle(20);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexHF2327321->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF2327321->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexHF2327321->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF2327321->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF2327321->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF2327321->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF2327321->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF2327321->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF2327321->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF2327321->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF2327321->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF2327321->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF2327321->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF2327321->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexHF23273,"HIST F");
   Double_t xAxis17[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistWJetsAMCexLF900322 = new TH1F("setHistWJetsAMCexLF900322","",26, xAxis17);
   setHistWJetsAMCexLF900322->SetBinContent(1,411.1284);
   setHistWJetsAMCexLF900322->SetBinContent(2,1178.224);
   setHistWJetsAMCexLF900322->SetBinContent(3,969.201);
   setHistWJetsAMCexLF900322->SetBinContent(4,622.959);
   setHistWJetsAMCexLF900322->SetBinContent(5,543.4318);
   setHistWJetsAMCexLF900322->SetBinContent(6,525.0237);
   setHistWJetsAMCexLF900322->SetBinContent(7,719.3129);
   setHistWJetsAMCexLF900322->SetBinContent(8,766.605);
   setHistWJetsAMCexLF900322->SetBinContent(9,536.9756);
   setHistWJetsAMCexLF900322->SetBinContent(10,437.4318);
   setHistWJetsAMCexLF900322->SetBinContent(11,449.4119);
   setHistWJetsAMCexLF900322->SetBinContent(12,286.9281);
   setHistWJetsAMCexLF900322->SetBinContent(13,470.9506);
   setHistWJetsAMCexLF900322->SetBinContent(14,266.4785);
   setHistWJetsAMCexLF900322->SetBinContent(15,426.2607);
   setHistWJetsAMCexLF900322->SetBinContent(16,395.0472);
   setHistWJetsAMCexLF900322->SetBinContent(17,258.4706);
   setHistWJetsAMCexLF900322->SetBinContent(18,290.7125);
   setHistWJetsAMCexLF900322->SetBinContent(19,288.8195);
   setHistWJetsAMCexLF900322->SetBinContent(20,291.3693);
   setHistWJetsAMCexLF900322->SetBinContent(21,222.834);
   setHistWJetsAMCexLF900322->SetBinContent(22,210.2117);
   setHistWJetsAMCexLF900322->SetBinContent(23,233.9896);
   setHistWJetsAMCexLF900322->SetBinContent(24,91.29915);
   setHistWJetsAMCexLF900322->SetBinContent(25,78.42419);
   setHistWJetsAMCexLF900322->SetBinContent(26,0.2477512);
   setHistWJetsAMCexLF900322->SetBinError(1,120.5291);
   setHistWJetsAMCexLF900322->SetBinError(2,179.8993);
   setHistWJetsAMCexLF900322->SetBinError(3,147.8935);
   setHistWJetsAMCexLF900322->SetBinError(4,137.8614);
   setHistWJetsAMCexLF900322->SetBinError(5,117.4459);
   setHistWJetsAMCexLF900322->SetBinError(6,110.8145);
   setHistWJetsAMCexLF900322->SetBinError(7,122.6279);
   setHistWJetsAMCexLF900322->SetBinError(8,130.4194);
   setHistWJetsAMCexLF900322->SetBinError(9,112.3923);
   setHistWJetsAMCexLF900322->SetBinError(10,95.32441);
   setHistWJetsAMCexLF900322->SetBinError(11,124.004);
   setHistWJetsAMCexLF900322->SetBinError(12,84.78089);
   setHistWJetsAMCexLF900322->SetBinError(13,109.1662);
   setHistWJetsAMCexLF900322->SetBinError(14,114.2698);
   setHistWJetsAMCexLF900322->SetBinError(15,94.0541);
   setHistWJetsAMCexLF900322->SetBinError(16,99.66021);
   setHistWJetsAMCexLF900322->SetBinError(17,114.1071);
   setHistWJetsAMCexLF900322->SetBinError(18,102.9414);
   setHistWJetsAMCexLF900322->SetBinError(19,97.93552);
   setHistWJetsAMCexLF900322->SetBinError(20,86.46885);
   setHistWJetsAMCexLF900322->SetBinError(21,113.1444);
   setHistWJetsAMCexLF900322->SetBinError(22,74.35429);
   setHistWJetsAMCexLF900322->SetBinError(23,67.3206);
   setHistWJetsAMCexLF900322->SetBinError(24,62.82925);
   setHistWJetsAMCexLF900322->SetBinError(25,41.94476);
   setHistWJetsAMCexLF900322->SetBinError(26,16.73969);
   setHistWJetsAMCexLF900322->SetEntries(3175);
   setHistWJetsAMCexLF900322->SetDirectory(0);

   ci = TColor::GetColor("#4dff97");
   setHistWJetsAMCexLF900322->SetFillColor(ci);

   ci = TColor::GetColor("#2e995a");
   setHistWJetsAMCexLF900322->SetLineColor(ci);
   setHistWJetsAMCexLF900322->SetLineWidth(2);
   setHistWJetsAMCexLF900322->SetMarkerStyle(20);
   setHistWJetsAMCexLF900322->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexLF900322->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF900322->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexLF900322->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF900322->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF900322->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexLF900322->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexLF900322->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF900322->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexLF900322->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF900322->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF900322->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF900322->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF900322->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF900322->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF900322->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF900322->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF900322->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF900322->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF900322->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF900322->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexLF9003,"HIST F");
   Double_t xAxis18[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistDY2762223 = new TH1F("setHistDY2762223","",26, xAxis18);
   setHistDY2762223->SetBinContent(1,191.1967);
   setHistDY2762223->SetBinContent(2,386.6934);
   setHistDY2762223->SetBinContent(3,500.2617);
   setHistDY2762223->SetBinContent(4,561.892);
   setHistDY2762223->SetBinContent(5,549.9466);
   setHistDY2762223->SetBinContent(6,650.7775);
   setHistDY2762223->SetBinContent(7,670.1387);
   setHistDY2762223->SetBinContent(8,664.7258);
   setHistDY2762223->SetBinContent(9,581.1471);
   setHistDY2762223->SetBinContent(10,517.5486);
   setHistDY2762223->SetBinContent(11,564.8335);
   setHistDY2762223->SetBinContent(12,430.7302);
   setHistDY2762223->SetBinContent(13,494.0078);
   setHistDY2762223->SetBinContent(14,423.2328);
   setHistDY2762223->SetBinContent(15,342.1116);
   setHistDY2762223->SetBinContent(16,318.9489);
   setHistDY2762223->SetBinContent(17,329.2531);
   setHistDY2762223->SetBinContent(18,348.5164);
   setHistDY2762223->SetBinContent(19,285.785);
   setHistDY2762223->SetBinContent(20,205.6845);
   setHistDY2762223->SetBinContent(21,154.3451);
   setHistDY2762223->SetBinContent(22,160.3126);
   setHistDY2762223->SetBinContent(23,147.3398);
   setHistDY2762223->SetBinContent(24,110.5622);
   setHistDY2762223->SetBinContent(25,102.8668);
   setHistDY2762223->SetBinContent(26,3.615119);
   setHistDY2762223->SetBinError(1,35.62039);
   setHistDY2762223->SetBinError(2,41.42813);
   setHistDY2762223->SetBinError(3,46.23691);
   setHistDY2762223->SetBinError(4,55.73303);
   setHistDY2762223->SetBinError(5,48.56627);
   setHistDY2762223->SetBinError(6,56.61255);
   setHistDY2762223->SetBinError(7,59.72588);
   setHistDY2762223->SetBinError(8,55.66052);
   setHistDY2762223->SetBinError(9,52.71121);
   setHistDY2762223->SetBinError(10,62.5036);
   setHistDY2762223->SetBinError(11,58.47095);
   setHistDY2762223->SetBinError(12,50.21532);
   setHistDY2762223->SetBinError(13,56.28299);
   setHistDY2762223->SetBinError(14,45.03024);
   setHistDY2762223->SetBinError(15,39.36107);
   setHistDY2762223->SetBinError(16,37.90093);
   setHistDY2762223->SetBinError(17,44.362);
   setHistDY2762223->SetBinError(18,48.07073);
   setHistDY2762223->SetBinError(19,40.98677);
   setHistDY2762223->SetBinError(20,31.97071);
   setHistDY2762223->SetBinError(21,23.69958);
   setHistDY2762223->SetBinError(22,24.61568);
   setHistDY2762223->SetBinError(23,23.59161);
   setHistDY2762223->SetBinError(24,27.46559);
   setHistDY2762223->SetBinError(25,26.26065);
   setHistDY2762223->SetBinError(26,3.615119);
   setHistDY2762223->SetEntries(2566);
   setHistDY2762223->SetDirectory(0);

   ci = TColor::GetColor("#3d7bea");
   setHistDY2762223->SetFillColor(ci);

   ci = TColor::GetColor("#24498c");
   setHistDY2762223->SetLineColor(ci);
   setHistDY2762223->SetLineWidth(2);
   setHistDY2762223->SetMarkerStyle(20);
   setHistDY2762223->GetXaxis()->SetNdivisions(1005);
   setHistDY2762223->GetXaxis()->SetLabelFont(43);
   setHistDY2762223->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY2762223->GetXaxis()->SetLabelSize(32);
   setHistDY2762223->GetXaxis()->SetTitleSize(35);
   setHistDY2762223->GetXaxis()->SetTickLength(0.05);
   setHistDY2762223->GetXaxis()->SetTitleOffset(1.135);
   setHistDY2762223->GetXaxis()->SetTitleFont(43);
   setHistDY2762223->GetYaxis()->SetNdivisions(506);
   setHistDY2762223->GetYaxis()->SetLabelFont(43);
   setHistDY2762223->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY2762223->GetYaxis()->SetLabelSize(32);
   setHistDY2762223->GetYaxis()->SetTitleSize(35);
   setHistDY2762223->GetYaxis()->SetTitleOffset(1.32);
   setHistDY2762223->GetYaxis()->SetTitleFont(43);
   setHistDY2762223->GetZaxis()->SetLabelFont(43);
   setHistDY2762223->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY2762223->GetZaxis()->SetLabelSize(32);
   setHistDY2762223->GetZaxis()->SetTitleSize(35);
   setHistDY2762223->GetZaxis()->SetTitleOffset(1.32);
   setHistDY2762223->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY27622,"HIST F");
   Double_t xAxis19[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistQCD_DD1644424 = new TH1F("setHistQCD_DD1644424","",26, xAxis19);
   setHistQCD_DD1644424->SetBinContent(1,1164.502);
   setHistQCD_DD1644424->SetBinContent(2,1922.962);
   setHistQCD_DD1644424->SetBinContent(3,1755.595);
   setHistQCD_DD1644424->SetBinContent(4,1911.574);
   setHistQCD_DD1644424->SetBinContent(5,1868.712);
   setHistQCD_DD1644424->SetBinContent(6,1813.547);
   setHistQCD_DD1644424->SetBinContent(7,1682.749);
   setHistQCD_DD1644424->SetBinContent(8,1534.068);
   setHistQCD_DD1644424->SetBinContent(9,1476.83);
   setHistQCD_DD1644424->SetBinContent(10,1305.531);
   setHistQCD_DD1644424->SetBinContent(11,1224.55);
   setHistQCD_DD1644424->SetBinContent(12,1113.011);
   setHistQCD_DD1644424->SetBinContent(13,1094.539);
   setHistQCD_DD1644424->SetBinContent(14,1063.035);
   setHistQCD_DD1644424->SetBinContent(15,1024.279);
   setHistQCD_DD1644424->SetBinContent(16,903.0384);
   setHistQCD_DD1644424->SetBinContent(17,860.3957);
   setHistQCD_DD1644424->SetBinContent(18,711.8223);
   setHistQCD_DD1644424->SetBinContent(19,732.1145);
   setHistQCD_DD1644424->SetBinContent(20,647.5706);
   setHistQCD_DD1644424->SetBinContent(21,567.4876);
   setHistQCD_DD1644424->SetBinContent(22,513.3302);
   setHistQCD_DD1644424->SetBinContent(23,390.9957);
   setHistQCD_DD1644424->SetBinContent(24,339.5444);
   setHistQCD_DD1644424->SetBinContent(25,210.2049);
   setHistQCD_DD1644424->SetBinContent(26,40.0469);
   setHistQCD_DD1644424->SetBinError(1,35.19876);
   setHistQCD_DD1644424->SetBinError(2,52.87341);
   setHistQCD_DD1644424->SetBinError(3,52.81258);
   setHistQCD_DD1644424->SetBinError(4,45.41927);
   setHistQCD_DD1644424->SetBinError(5,48.98717);
   setHistQCD_DD1644424->SetBinError(6,47.26314);
   setHistQCD_DD1644424->SetBinError(7,44.808);
   setHistQCD_DD1644424->SetBinError(8,42.35339);
   setHistQCD_DD1644424->SetBinError(9,43.23788);
   setHistQCD_DD1644424->SetBinError(10,38.67507);
   setHistQCD_DD1644424->SetBinError(11,40.37774);
   setHistQCD_DD1644424->SetBinError(12,39.19317);
   setHistQCD_DD1644424->SetBinError(13,38.29903);
   setHistQCD_DD1644424->SetBinError(14,36.56022);
   setHistQCD_DD1644424->SetBinError(15,37.18467);
   setHistQCD_DD1644424->SetBinError(16,34.85775);
   setHistQCD_DD1644424->SetBinError(17,32.15214);
   setHistQCD_DD1644424->SetBinError(18,31.47131);
   setHistQCD_DD1644424->SetBinError(19,30.26411);
   setHistQCD_DD1644424->SetBinError(20,25.91869);
   setHistQCD_DD1644424->SetBinError(21,25.25032);
   setHistQCD_DD1644424->SetBinError(22,23.21415);
   setHistQCD_DD1644424->SetBinError(23,20.60578);
   setHistQCD_DD1644424->SetBinError(24,23.26866);
   setHistQCD_DD1644424->SetBinError(25,16.25675);
   setHistQCD_DD1644424->SetBinError(26,6.247221);
   setHistQCD_DD1644424->SetEntries(50318);
   setHistQCD_DD1644424->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD1644424->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD1644424->SetLineColor(ci);
   setHistQCD_DD1644424->SetLineWidth(2);
   setHistQCD_DD1644424->SetMarkerStyle(20);
   setHistQCD_DD1644424->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD1644424->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD1644424->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD1644424->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD1644424->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD1644424->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD1644424->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD1644424->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD1644424->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD1644424->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD1644424->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD1644424->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD1644424->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD1644424->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD1644424->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD1644424->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD1644424->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD1644424->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD1644424->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD1644424->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD1644424->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD16444,"HIST F");
   ->Draw("same");
   Double_t xAxis20[27] = {-1, -0.9230769, -0.8461538, -0.7692308, -0.6923077, -0.6153846, -0.5384615, -0.4615385, -0.3846154, -0.3076923, -0.2307692, -0.1538462, -0.07692308, 0, 0.07692308, 0.1538462, 0.2307692, 0.3076923, 0.3846154, 0.4615385, 0.5384615, 0.6153846, 0.6923077, 0.7692308, 0.8461538, 0.9230769, 1}; 
   
   TH1F *setHistdata669325 = new TH1F("setHistdata669325","",26, xAxis20);
   setHistdata669325->SetBinContent(1,7114);
   setHistdata669325->SetBinContent(2,22471);
   setHistdata669325->SetBinContent(3,18106);
   setHistdata669325->SetBinContent(4,15940);
   setHistdata669325->SetBinContent(5,15724);
   setHistdata669325->SetBinContent(6,15687);
   setHistdata669325->SetBinContent(7,15730);
   setHistdata669325->SetBinContent(8,15579);
   setHistdata669325->SetBinContent(9,14480);
   setHistdata669325->SetBinContent(10,14498);
   setHistdata669325->SetBinContent(11,13236);
   setHistdata669325->SetBinContent(12,12924);
   setHistdata669325->SetBinContent(13,12720);
   setHistdata669325->SetBinError(1,84.34453);
   setHistdata669325->SetBinError(2,149.9033);
   setHistdata669325->SetBinError(3,134.5585);
   setHistdata669325->SetBinError(4,126.2537);
   setHistdata669325->SetBinError(5,125.3954);
   setHistdata669325->SetBinError(6,125.2478);
   setHistdata669325->SetBinError(7,125.4193);
   setHistdata669325->SetBinError(8,124.8159);
   setHistdata669325->SetBinError(9,120.3329);
   setHistdata669325->SetBinError(10,120.4076);
   setHistdata669325->SetBinError(11,115.0478);
   setHistdata669325->SetBinError(12,113.6838);
   setHistdata669325->SetBinError(13,112.783);
   setHistdata669325->SetEntries(194209);
   setHistdata669325->SetFillStyle(0);
   setHistdata669325->SetMarkerStyle(20);
   setHistdata669325->SetMarkerSize(1.15);
   setHistdata669325->GetXaxis()->SetNdivisions(1005);
   setHistdata669325->GetXaxis()->SetLabelFont(43);
   setHistdata669325->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata669325->GetXaxis()->SetLabelSize(32);
   setHistdata669325->GetXaxis()->SetTitleSize(35);
   setHistdata669325->GetXaxis()->SetTickLength(0.05);
   setHistdata669325->GetXaxis()->SetTitleOffset(1.135);
   setHistdata669325->GetXaxis()->SetTitleFont(43);
   setHistdata669325->GetYaxis()->SetNdivisions(506);
   setHistdata669325->GetYaxis()->SetLabelFont(43);
   setHistdata669325->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata669325->GetYaxis()->SetLabelSize(32);
   setHistdata669325->GetYaxis()->SetTitleSize(35);
   setHistdata669325->GetYaxis()->SetTitleOffset(1.32);
   setHistdata669325->GetYaxis()->SetTitleFont(43);
   setHistdata669325->GetZaxis()->SetLabelFont(43);
   setHistdata669325->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata669325->GetZaxis()->SetLabelSize(32);
   setHistdata669325->GetZaxis()->SetTitleSize(35);
   setHistdata669325->GetZaxis()->SetTitleOffset(1.32);
   setHistdata669325->GetZaxis()->SetTitleFont(43);
   setHistdata669325->Draw("PESame");
   
   TH2F *axis55724_copy26 = new TH2F("axis55724_copy26","",50,-1,1,50,0,34452.95);
   axis55724_copy26->SetDirectory(0);
   axis55724_copy26->SetMarkerStyle(20);
   axis55724_copy26->GetXaxis()->SetNdivisions(1005);
   axis55724_copy26->GetXaxis()->SetLabelFont(43);
   axis55724_copy26->GetXaxis()->SetLabelOffset(0.0105);
   axis55724_copy26->GetXaxis()->SetLabelSize(0);
   axis55724_copy26->GetXaxis()->SetTitleSize(35);
   axis55724_copy26->GetXaxis()->SetTickLength(0.025);
   axis55724_copy26->GetXaxis()->SetTitleOffset(1.135);
   axis55724_copy26->GetXaxis()->SetTitleFont(43);
   axis55724_copy26->GetYaxis()->SetTitle("Events / bin");
   axis55724_copy26->GetYaxis()->SetNdivisions(506);
   axis55724_copy26->GetYaxis()->SetLabelFont(43);
   axis55724_copy26->GetYaxis()->SetLabelOffset(0.0087);
   axis55724_copy26->GetYaxis()->SetLabelSize(32);
   axis55724_copy26->GetYaxis()->SetTitleSize(35);
   axis55724_copy26->GetYaxis()->SetTickLength(0.02631579);
   axis55724_copy26->GetYaxis()->SetTitleOffset(1.32);
   axis55724_copy26->GetYaxis()->SetTitleFont(43);
   axis55724_copy26->GetZaxis()->SetLabelFont(43);
   axis55724_copy26->GetZaxis()->SetLabelOffset(0.0087);
   axis55724_copy26->GetZaxis()->SetLabelSize(32);
   axis55724_copy26->GetZaxis()->SetTitleSize(35);
   axis55724_copy26->GetZaxis()->SetTitleOffset(1.32);
   axis55724_copy26->GetZaxis()->SetTitleFont(43);
   axis55724_copy26->Draw("sameaxis");
   
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
   TLegendEntry *entry=leg->AddEntry("setHistdata6693","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD16444","Multijet","F");

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
   entry=leg->AddEntry("setHistDY27622","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexLF9003","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexHF23273","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets15355","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWChannel49059","tW","F");

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
   entry=leg->AddEntry("setHisttChannel77905","#it{t}-channel","F");

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
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301_2->Modified();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->cd();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->Modified();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->cd();
   cvelectron_2j1t_bdt_tch_qcdnone_blind90301->SetSelected(cvelectron_2j1t_bdt_tch_qcdnone_blind90301);
}
