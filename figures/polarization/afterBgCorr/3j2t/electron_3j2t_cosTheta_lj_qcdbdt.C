void plots_w2/3j2t/electron_3j2t_cosTheta_lj_qcdbdt()
{
//=========Macro generated from canvas: cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297/
//=========  (Mon Aug  7 16:36:09 2017) by ROOT version6.02/05
   TCanvas *cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297 = new TCanvas("cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetHighLightColor(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->Range(0,0,1,1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetFillColor(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetBorderSize(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetTickx(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetTicky(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetLeftMargin(0.1150442);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetRightMargin(0.227083);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetTopMargin(0.04002582);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetBottomMargin(0.08064517);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetFrameLineWidth(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetFrameBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1
   TPad *cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1 = new TPad("cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1", "",0,0,1,1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->Draw();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetFillColor(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetFillStyle(4000);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetBorderSize(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetTickx(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetTicky(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetLeftMargin(0.14);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetRightMargin(0.26);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetTopMargin(0.65);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetBottomMargin(0.14);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetFrameBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.74464371047840 = new TH2F("axisRes0.74464371047840","",50,-1,1,50,0.6,1.4);
   axisRes0.74464371047840->SetMarkerStyle(20);
   axisRes0.74464371047840->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.74464371047840->GetXaxis()->SetNdivisions(1005);
   axisRes0.74464371047840->GetXaxis()->SetLabelFont(43);
   axisRes0.74464371047840->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.74464371047840->GetXaxis()->SetLabelSize(32);
   axisRes0.74464371047840->GetXaxis()->SetTitleSize(35);
   axisRes0.74464371047840->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.74464371047840->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.74464371047840->GetXaxis()->SetTitleFont(43);
   axisRes0.74464371047840->GetYaxis()->SetTitle("Data/MC");
   axisRes0.74464371047840->GetYaxis()->SetNdivisions(406);
   axisRes0.74464371047840->GetYaxis()->SetLabelFont(43);
   axisRes0.74464371047840->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.74464371047840->GetYaxis()->SetLabelSize(32);
   axisRes0.74464371047840->GetYaxis()->SetTitleSize(35);
   axisRes0.74464371047840->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.74464371047840->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.74464371047840->GetYaxis()->SetTitleFont(43);
   axisRes0.74464371047840->GetZaxis()->SetLabelFont(43);
   axisRes0.74464371047840->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.74464371047840->GetZaxis()->SetLabelSize(32);
   axisRes0.74464371047840->GetZaxis()->SetTitleSize(35);
   axisRes0.74464371047840->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.74464371047840->GetZaxis()->SetTitleFont(43);
   axisRes0.74464371047840->Draw("AXIS");
   TBox *box = new TBox(-1,0.9850266,-0.9,1.014973);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9850266,-0.9,1.014973);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9844216,-0.8,1.015578);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9844216,-0.8,1.015578);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9829481,-0.7,1.017052);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9829481,-0.7,1.017052);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9824829,-0.6,1.017517);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9824829,-0.6,1.017517);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9843092,-0.5,1.015691);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9843092,-0.5,1.015691);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9841696,-0.4,1.01583);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9841696,-0.4,1.01583);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9838581,-0.3,1.016142);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9838581,-0.3,1.016142);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9854379,-0.2,1.014562);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9854379,-0.2,1.014562);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.984319,-0.1,1.015681);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.984319,-0.1,1.015681);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9846794,0,1.015321);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9846794,0,1.015321);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9844302,0.1,1.01557);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9844302,0.1,1.01557);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9850779,0.2,1.014922);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9850779,0.2,1.014922);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9845799,0.3,1.01542);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9845799,0.3,1.01542);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9848396,0.4,1.01516);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9848396,0.4,1.01516);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.984417,0.5,1.015583);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.984417,0.5,1.015583);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.981989,0.6,1.018011);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.981989,0.6,1.018011);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9836641,0.7,1.016336);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9836641,0.7,1.016336);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9813775,0.8,1.018622);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9813775,0.8,1.018622);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.976618,0.9,1.023382);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.976618,0.9,1.023382);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9457288,1,1.054271);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9457288,1,1.054271);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis31[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.7718576785290.7546845451541 = new TH1F("setHistdata0.7718576785290.7546845451541","",20, xAxis31);
   setHistdata0.7718576785290.7546845451541->SetBinContent(1,1.079334);
   setHistdata0.7718576785290.7546845451541->SetBinContent(2,1.054047);
   setHistdata0.7718576785290.7546845451541->SetBinContent(3,0.9310521);
   setHistdata0.7718576785290.7546845451541->SetBinContent(4,1.054751);
   setHistdata0.7718576785290.7546845451541->SetBinContent(5,1.062716);
   setHistdata0.7718576785290.7546845451541->SetBinContent(6,0.9945546);
   setHistdata0.7718576785290.7546845451541->SetBinContent(7,1.014139);
   setHistdata0.7718576785290.7546845451541->SetBinContent(8,1.007605);
   setHistdata0.7718576785290.7546845451541->SetBinContent(9,1.033317);
   setHistdata0.7718576785290.7546845451541->SetBinContent(10,0.9323742);
   setHistdata0.7718576785290.7546845451541->SetBinContent(11,0.996038);
   setHistdata0.7718576785290.7546845451541->SetBinContent(12,0.9875597);
   setHistdata0.7718576785290.7546845451541->SetBinContent(13,0.9672453);
   setHistdata0.7718576785290.7546845451541->SetBinContent(14,0.980312);
   setHistdata0.7718576785290.7546845451541->SetBinContent(15,0.9130141);
   setHistdata0.7718576785290.7546845451541->SetBinContent(16,0.8687055);
   setHistdata0.7718576785290.7546845451541->SetBinContent(17,0.9751646);
   setHistdata0.7718576785290.7546845451541->SetBinContent(18,1.09992);
   setHistdata0.7718576785290.7546845451541->SetBinContent(19,1.028857);
   setHistdata0.7718576785290.7546845451541->SetBinContent(20,1.400887);
   setHistdata0.7718576785290.7546845451541->SetBinError(1,0.04286583);
   setHistdata0.7718576785290.7546845451541->SetBinError(2,0.04357946);
   setHistdata0.7718576785290.7546845451541->SetBinError(3,0.04159634);
   setHistdata0.7718576785290.7546845451541->SetBinError(4,0.04469122);
   setHistdata0.7718576785290.7546845451541->SetBinError(5,0.0447484);
   setHistdata0.7718576785290.7546845451541->SetBinError(6,0.04344732);
   setHistdata0.7718576785290.7546845451541->SetBinError(7,0.04316464);
   setHistdata0.7718576785290.7546845451541->SetBinError(8,0.04265531);
   setHistdata0.7718576785290.7546845451541->SetBinError(9,0.042541);
   setHistdata0.7718576785290.7546845451541->SetBinError(10,0.0400859);
   setHistdata0.7718576785290.7546845451541->SetBinError(11,0.04104103);
   setHistdata0.7718576785290.7546845451541->SetBinError(12,0.04100618);
   setHistdata0.7718576785290.7546845451541->SetBinError(13,0.04065636);
   setHistdata0.7718576785290.7546845451541->SetBinError(14,0.04168711);
   setHistdata0.7718576785290.7546845451541->SetBinError(15,0.03996154);
   setHistdata0.7718576785290.7546845451541->SetBinError(16,0.03998541);
   setHistdata0.7718576785290.7546845451541->SetBinError(17,0.04469659);
   setHistdata0.7718576785290.7546845451541->SetBinError(18,0.05173587);
   setHistdata0.7718576785290.7546845451541->SetBinError(19,0.05579761);
   setHistdata0.7718576785290.7546845451541->SetBinError(20,0.117148);
   setHistdata0.7718576785290.7546845451541->SetEntries(10319);
   setHistdata0.7718576785290.7546845451541->SetFillStyle(0);
   setHistdata0.7718576785290.7546845451541->SetMarkerStyle(20);
   setHistdata0.7718576785290.7546845451541->SetMarkerSize(1.15);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetNdivisions(1005);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetLabelFont(43);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetLabelSize(32);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetTitleSize(35);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetTickLength(0.05);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.7718576785290.7546845451541->GetXaxis()->SetTitleFont(43);
   setHistdata0.7718576785290.7546845451541->GetYaxis()->SetNdivisions(506);
   setHistdata0.7718576785290.7546845451541->GetYaxis()->SetLabelFont(43);
   setHistdata0.7718576785290.7546845451541->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.7718576785290.7546845451541->GetYaxis()->SetLabelSize(32);
   setHistdata0.7718576785290.7546845451541->GetYaxis()->SetTitleSize(35);
   setHistdata0.7718576785290.7546845451541->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.7718576785290.7546845451541->GetYaxis()->SetTitleFont(43);
   setHistdata0.7718576785290.7546845451541->GetZaxis()->SetLabelFont(43);
   setHistdata0.7718576785290.7546845451541->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.7718576785290.7546845451541->GetZaxis()->SetLabelSize(32);
   setHistdata0.7718576785290.7546845451541->GetZaxis()->SetTitleSize(35);
   setHistdata0.7718576785290.7546845451541->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.7718576785290.7546845451541->GetZaxis()->SetTitleFont(43);
   setHistdata0.7718576785290.7546845451541->Draw("PESame");
   
   TF1 *axisLine0.1635151020674 = new TF1("axisLine0.163515102067","1",-1,1);
   axisLine0.1635151020674->SetFillColor(19);
   axisLine0.1635151020674->SetFillStyle(0);
   axisLine0.1635151020674->SetMarkerStyle(20);
   axisLine0.1635151020674->SetLineWidth(1);
   axisLine0.1635151020674->GetXaxis()->SetNdivisions(1005);
   axisLine0.1635151020674->GetXaxis()->SetLabelFont(43);
   axisLine0.1635151020674->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.1635151020674->GetXaxis()->SetLabelSize(32);
   axisLine0.1635151020674->GetXaxis()->SetTitleSize(35);
   axisLine0.1635151020674->GetXaxis()->SetTickLength(0.05);
   axisLine0.1635151020674->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.1635151020674->GetXaxis()->SetTitleFont(43);
   axisLine0.1635151020674->GetYaxis()->SetNdivisions(506);
   axisLine0.1635151020674->GetYaxis()->SetLabelFont(43);
   axisLine0.1635151020674->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.1635151020674->GetYaxis()->SetLabelSize(32);
   axisLine0.1635151020674->GetYaxis()->SetTitleSize(35);
   axisLine0.1635151020674->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.1635151020674->GetYaxis()->SetTitleFont(43);
   axisLine0.1635151020674->Draw("SameL");
   
   TH2F *axisRes0.744643710478_copy42 = new TH2F("axisRes0.744643710478_copy42","",50,-1,1,50,0.6,1.4);
   axisRes0.744643710478_copy42->SetDirectory(0);
   axisRes0.744643710478_copy42->SetMarkerStyle(20);
   axisRes0.744643710478_copy42->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.744643710478_copy42->GetXaxis()->SetNdivisions(1005);
   axisRes0.744643710478_copy42->GetXaxis()->SetLabelFont(43);
   axisRes0.744643710478_copy42->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.744643710478_copy42->GetXaxis()->SetLabelSize(32);
   axisRes0.744643710478_copy42->GetXaxis()->SetTitleSize(35);
   axisRes0.744643710478_copy42->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.744643710478_copy42->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.744643710478_copy42->GetXaxis()->SetTitleFont(43);
   axisRes0.744643710478_copy42->GetYaxis()->SetTitle("Data/MC");
   axisRes0.744643710478_copy42->GetYaxis()->SetNdivisions(406);
   axisRes0.744643710478_copy42->GetYaxis()->SetLabelFont(43);
   axisRes0.744643710478_copy42->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.744643710478_copy42->GetYaxis()->SetLabelSize(32);
   axisRes0.744643710478_copy42->GetYaxis()->SetTitleSize(35);
   axisRes0.744643710478_copy42->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.744643710478_copy42->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.744643710478_copy42->GetYaxis()->SetTitleFont(43);
   axisRes0.744643710478_copy42->GetZaxis()->SetLabelFont(43);
   axisRes0.744643710478_copy42->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.744643710478_copy42->GetZaxis()->SetLabelSize(32);
   axisRes0.744643710478_copy42->GetZaxis()->SetTitleSize(35);
   axisRes0.744643710478_copy42->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.744643710478_copy42->GetZaxis()->SetTitleFont(43);
   axisRes0.744643710478_copy42->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_1->Modified();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->cd();
  
// ------------>Primitives in pad: cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2
   TPad *cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2 = new TPad("cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2", "",0,0,1,1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->Draw();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->Range(-1.466667,-545.0175,1.866667,1012.175);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetFillColor(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetFillStyle(4000);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetBorderSize(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetTickx(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetTicky(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetLeftMargin(0.14);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetRightMargin(0.26);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetTopMargin(0.08);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetBottomMargin(0.35);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetFrameBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->SetFrameBorderMode(0);
   
   TH2F *axis0.93964655617243 = new TH2F("axis0.93964655617243","",50,-1,1,50,0,887.6);
   axis0.93964655617243->SetMarkerStyle(20);
   axis0.93964655617243->GetXaxis()->SetNdivisions(1005);
   axis0.93964655617243->GetXaxis()->SetLabelFont(43);
   axis0.93964655617243->GetXaxis()->SetLabelOffset(0.0105);
   axis0.93964655617243->GetXaxis()->SetLabelSize(0);
   axis0.93964655617243->GetXaxis()->SetTitleSize(35);
   axis0.93964655617243->GetXaxis()->SetTickLength(0.025);
   axis0.93964655617243->GetXaxis()->SetTitleOffset(1.135);
   axis0.93964655617243->GetXaxis()->SetTitleFont(43);
   axis0.93964655617243->GetYaxis()->SetTitle("Events / bin");
   axis0.93964655617243->GetYaxis()->SetNdivisions(506);
   axis0.93964655617243->GetYaxis()->SetLabelFont(43);
   axis0.93964655617243->GetYaxis()->SetLabelOffset(0.0087);
   axis0.93964655617243->GetYaxis()->SetLabelSize(32);
   axis0.93964655617243->GetYaxis()->SetTitleSize(35);
   axis0.93964655617243->GetYaxis()->SetTickLength(0.02631579);
   axis0.93964655617243->GetYaxis()->SetTitleOffset(1.32);
   axis0.93964655617243->GetYaxis()->SetTitleFont(43);
   axis0.93964655617243->GetZaxis()->SetLabelFont(43);
   axis0.93964655617243->GetZaxis()->SetLabelOffset(0.0087);
   axis0.93964655617243->GetZaxis()->SetLabelSize(32);
   axis0.93964655617243->GetZaxis()->SetTitleSize(35);
   axis0.93964655617243->GetZaxis()->SetTitleOffset(1.32);
   axis0.93964655617243->GetZaxis()->SetTitleFont(43);
   axis0.93964655617243->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis32[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_3_stack_4 = new TH1F("_stack_3_stack_4","",20, xAxis32);
   _stack_3_stack_4->SetMinimum(-7.811672);
   _stack_3_stack_4->SetMaximum(620.91);
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
   
   TH1F *setHisttChannel0.055972303584844 = new TH1F("setHisttChannel0.055972303584844","",20, xAxis33);
   setHisttChannel0.055972303584844->SetBinContent(1,17.21762);
   setHisttChannel0.055972303584844->SetBinContent(2,17.68112);
   setHisttChannel0.055972303584844->SetBinContent(3,16.86772);
   setHisttChannel0.055972303584844->SetBinContent(4,15.80626);
   setHisttChannel0.055972303584844->SetBinContent(5,17.27821);
   setHisttChannel0.055972303584844->SetBinContent(6,18.41932);
   setHisttChannel0.055972303584844->SetBinContent(7,22.58788);
   setHisttChannel0.055972303584844->SetBinContent(8,25.24746);
   setHisttChannel0.055972303584844->SetBinContent(9,26.55261);
   setHisttChannel0.055972303584844->SetBinContent(10,27.2663);
   setHisttChannel0.055972303584844->SetBinContent(11,31.48862);
   setHisttChannel0.055972303584844->SetBinContent(12,37.50666);
   setHisttChannel0.055972303584844->SetBinContent(13,36.27902);
   setHisttChannel0.055972303584844->SetBinContent(14,41.7879);
   setHisttChannel0.055972303584844->SetBinContent(15,45.99037);
   setHisttChannel0.055972303584844->SetBinContent(16,44.25961);
   setHisttChannel0.055972303584844->SetBinContent(17,43.69784);
   setHisttChannel0.055972303584844->SetBinContent(18,35.60372);
   setHisttChannel0.055972303584844->SetBinContent(19,19.83427);
   setHisttChannel0.055972303584844->SetBinContent(20,6.144751);
   setHisttChannel0.055972303584844->SetBinError(1,1.357346);
   setHisttChannel0.055972303584844->SetBinError(2,1.397035);
   setHisttChannel0.055972303584844->SetBinError(3,1.349224);
   setHisttChannel0.055972303584844->SetBinError(4,1.297271);
   setHisttChannel0.055972303584844->SetBinError(5,1.343762);
   setHisttChannel0.055972303584844->SetBinError(6,1.399083);
   setHisttChannel0.055972303584844->SetBinError(7,1.542406);
   setHisttChannel0.055972303584844->SetBinError(8,1.630215);
   setHisttChannel0.055972303584844->SetBinError(9,1.6707);
   setHisttChannel0.055972303584844->SetBinError(10,1.681748);
   setHisttChannel0.055972303584844->SetBinError(11,1.812381);
   setHisttChannel0.055972303584844->SetBinError(12,1.979604);
   setHisttChannel0.055972303584844->SetBinError(13,1.946438);
   setHisttChannel0.055972303584844->SetBinError(14,2.081218);
   setHisttChannel0.055972303584844->SetBinError(15,2.171371);
   setHisttChannel0.055972303584844->SetBinError(16,2.151216);
   setHisttChannel0.055972303584844->SetBinError(17,2.131765);
   setHisttChannel0.055972303584844->SetBinError(18,1.908936);
   setHisttChannel0.055972303584844->SetBinError(19,1.399513);
   setHisttChannel0.055972303584844->SetBinError(20,0.7887061);
   setHisttChannel0.055972303584844->SetEntries(12124);
   setHisttChannel0.055972303584844->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.055972303584844->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.055972303584844->SetLineColor(ci);
   setHisttChannel0.055972303584844->SetLineWidth(2);
   setHisttChannel0.055972303584844->SetMarkerStyle(20);
   setHisttChannel0.055972303584844->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.055972303584844->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.055972303584844->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.055972303584844->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.055972303584844->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.055972303584844->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.055972303584844->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.055972303584844->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.055972303584844->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.055972303584844->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.055972303584844->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.055972303584844->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.055972303584844->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.055972303584844->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.055972303584844->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.055972303584844->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.055972303584844->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.055972303584844->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.055972303584844->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.055972303584844->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.055972303584844->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.0559723035848,"HIST F");
   Double_t xAxis34[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttWs0.69059426612545 = new TH1F("setHisttWs0.69059426612545","",20, xAxis34);
   setHisttWs0.69059426612545->SetBinContent(1,12.12933);
   setHisttWs0.69059426612545->SetBinContent(2,12.15248);
   setHisttWs0.69059426612545->SetBinContent(3,15.81453);
   setHisttWs0.69059426612545->SetBinContent(4,16.13386);
   setHisttWs0.69059426612545->SetBinContent(5,13.77034);
   setHisttWs0.69059426612545->SetBinContent(6,13.5135);
   setHisttWs0.69059426612545->SetBinContent(7,14.25435);
   setHisttWs0.69059426612545->SetBinContent(8,11.64289);
   setHisttWs0.69059426612545->SetBinContent(9,14.7242);
   setHisttWs0.69059426612545->SetBinContent(10,16.58771);
   setHisttWs0.69059426612545->SetBinContent(11,15.51488);
   setHisttWs0.69059426612545->SetBinContent(12,15.48805);
   setHisttWs0.69059426612545->SetBinContent(13,12.38809);
   setHisttWs0.69059426612545->SetBinContent(14,13.24109);
   setHisttWs0.69059426612545->SetBinContent(15,16.87802);
   setHisttWs0.69059426612545->SetBinContent(16,20.23225);
   setHisttWs0.69059426612545->SetBinContent(17,14.43247);
   setHisttWs0.69059426612545->SetBinContent(18,12.12922);
   setHisttWs0.69059426612545->SetBinContent(19,9.352692);
   setHisttWs0.69059426612545->SetBinContent(20,2.376002);
   setHisttWs0.69059426612545->SetBinError(1,2.187752);
   setHisttWs0.69059426612545->SetBinError(2,2.363154);
   setHisttWs0.69059426612545->SetBinError(3,2.620627);
   setHisttWs0.69059426612545->SetBinError(4,2.59927);
   setHisttWs0.69059426612545->SetBinError(5,2.43439);
   setHisttWs0.69059426612545->SetBinError(6,2.485239);
   setHisttWs0.69059426612545->SetBinError(7,2.456888);
   setHisttWs0.69059426612545->SetBinError(8,2.170102);
   setHisttWs0.69059426612545->SetBinError(9,2.554592);
   setHisttWs0.69059426612545->SetBinError(10,2.561512);
   setHisttWs0.69059426612545->SetBinError(11,2.50261);
   setHisttWs0.69059426612545->SetBinError(12,2.607156);
   setHisttWs0.69059426612545->SetBinError(13,2.243709);
   setHisttWs0.69059426612545->SetBinError(14,2.381083);
   setHisttWs0.69059426612545->SetBinError(15,2.653649);
   setHisttWs0.69059426612545->SetBinError(16,2.91685);
   setHisttWs0.69059426612545->SetBinError(17,2.350498);
   setHisttWs0.69059426612545->SetBinError(18,2.170945);
   setHisttWs0.69059426612545->SetBinError(19,1.969886);
   setHisttWs0.69059426612545->SetBinError(20,1.02606);
   setHisttWs0.69059426612545->SetEntries(2017);
   setHisttWs0.69059426612545->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.69059426612545->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.69059426612545->SetLineColor(ci);
   setHisttWs0.69059426612545->SetLineWidth(2);
   setHisttWs0.69059426612545->SetMarkerStyle(20);
   setHisttWs0.69059426612545->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.69059426612545->GetXaxis()->SetLabelFont(43);
   setHisttWs0.69059426612545->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.69059426612545->GetXaxis()->SetLabelSize(32);
   setHisttWs0.69059426612545->GetXaxis()->SetTitleSize(35);
   setHisttWs0.69059426612545->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.69059426612545->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.69059426612545->GetXaxis()->SetTitleFont(43);
   setHisttWs0.69059426612545->GetYaxis()->SetNdivisions(506);
   setHisttWs0.69059426612545->GetYaxis()->SetLabelFont(43);
   setHisttWs0.69059426612545->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.69059426612545->GetYaxis()->SetLabelSize(32);
   setHisttWs0.69059426612545->GetYaxis()->SetTitleSize(35);
   setHisttWs0.69059426612545->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.69059426612545->GetYaxis()->SetTitleFont(43);
   setHisttWs0.69059426612545->GetZaxis()->SetLabelFont(43);
   setHisttWs0.69059426612545->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.69059426612545->GetZaxis()->SetLabelSize(32);
   setHisttWs0.69059426612545->GetZaxis()->SetTitleSize(35);
   setHisttWs0.69059426612545->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.69059426612545->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.690594266125,"HIST F");
   Double_t xAxis35[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistTTJets0.46484125914546 = new TH1F("setHistTTJets0.46484125914546","",20, xAxis35);
   setHistTTJets0.46484125914546->SetBinContent(1,544.856);
   setHistTTJets0.46484125914546->SetBinContent(2,505.6685);
   setHistTTJets0.46484125914546->SetBinContent(3,480.6087);
   setHistTTJets0.46484125914546->SetBinContent(4,473.7926);
   setHistTTJets0.46484125914546->SetBinContent(5,485.0163);
   setHistTTJets0.46484125914546->SetBinContent(6,485.903);
   setHistTTJets0.46484125914546->SetBinContent(7,490.0816);
   setHistTTJets0.46484125914546->SetBinContent(8,513.7506);
   setHistTTJets0.46484125914546->SetBinContent(9,511.4274);
   setHistTTJets0.46484125914546->SetBinContent(10,521.3093);
   setHistTTJets0.46484125914546->SetBinContent(11,526.8287);
   setHistTTJets0.46484125914546->SetBinContent(12,521.6433);
   setHistTTJets0.46484125914546->SetBinContent(13,516.1393);
   setHistTTJets0.46484125914546->SetBinContent(14,498.4127);
   setHistTTJets0.46484125914546->SetBinContent(15,493.2914);
   setHistTTJets0.46484125914546->SetBinContent(16,455.1581);
   setHistTTJets0.46484125914546->SetBinContent(17,417.5473);
   setHistTTJets0.46484125914546->SetBinContent(18,358.0629);
   setHistTTJets0.46484125914546->SetBinContent(19,282.929);
   setHistTTJets0.46484125914546->SetBinContent(20,83.44163);
   setHistTTJets0.46484125914546->SetBinError(1,6.706985);
   setHistTTJets0.46484125914546->SetBinError(2,6.446631);
   setHistTTJets0.46484125914546->SetBinError(3,6.28112);
   setHistTTJets0.46484125914546->SetBinError(4,6.239468);
   setHistTTJets0.46484125914546->SetBinError(5,6.312177);
   setHistTTJets0.46484125914546->SetBinError(6,6.33398);
   setHistTTJets0.46484125914546->SetBinError(7,6.368624);
   setHistTTJets0.46484125914546->SetBinError(8,6.519044);
   setHistTTJets0.46484125914546->SetBinError(9,6.495583);
   setHistTTJets0.46484125914546->SetBinError(10,6.599535);
   setHistTTJets0.46484125914546->SetBinError(11,6.64202);
   setHistTTJets0.46484125914546->SetBinError(12,6.599531);
   setHistTTJets0.46484125914546->SetBinError(13,6.585801);
   setHistTTJets0.46484125914546->SetBinError(14,6.482796);
   setHistTTJets0.46484125914546->SetBinError(15,6.46667);
   setHistTTJets0.46484125914546->SetBinError(16,6.212001);
   setHistTTJets0.46484125914546->SetBinError(17,5.955143);
   setHistTTJets0.46484125914546->SetBinError(18,5.519268);
   setHistTTJets0.46484125914546->SetBinError(19,4.956957);
   setHistTTJets0.46484125914546->SetBinError(20,2.661381);
   setHistTTJets0.46484125914546->SetEntries(166437);
   setHistTTJets0.46484125914546->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.46484125914546->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.46484125914546->SetLineColor(ci);
   setHistTTJets0.46484125914546->SetLineWidth(2);
   setHistTTJets0.46484125914546->SetMarkerStyle(20);
   setHistTTJets0.46484125914546->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.46484125914546->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.46484125914546->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.46484125914546->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.46484125914546->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.46484125914546->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.46484125914546->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.46484125914546->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.46484125914546->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.46484125914546->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.46484125914546->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.46484125914546->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.46484125914546->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.46484125914546->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.46484125914546->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.46484125914546->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.46484125914546->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.46484125914546->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.46484125914546->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.46484125914546->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.46484125914546->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.464841259145,"HIST F");
   Double_t xAxis36[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGHF0.33963756379447 = new TH1F("setHistWJetsMGHF0.33963756379447","",20, xAxis36);
   setHistWJetsMGHF0.33963756379447->SetBinContent(1,8.234913);
   setHistWJetsMGHF0.33963756379447->SetBinContent(2,11.7292);
   setHistWJetsMGHF0.33963756379447->SetBinContent(3,12.49217);
   setHistWJetsMGHF0.33963756379447->SetBinContent(4,10.0013);
   setHistWJetsMGHF0.33963756379447->SetBinContent(5,11.16938);
   setHistWJetsMGHF0.33963756379447->SetBinContent(6,3.958965);
   setHistWJetsMGHF0.33963756379447->SetBinContent(7,11.0668);
   setHistWJetsMGHF0.33963756379447->SetBinContent(8,5.036247);
   setHistWJetsMGHF0.33963756379447->SetBinContent(9,8.850499);
   setHistWJetsMGHF0.33963756379447->SetBinContent(10,9.163059);
   setHistWJetsMGHF0.33963756379447->SetBinContent(11,8.572457);
   setHistWJetsMGHF0.33963756379447->SetBinContent(12,6.961692);
   setHistWJetsMGHF0.33963756379447->SetBinContent(13,13.19928);
   setHistWJetsMGHF0.33963756379447->SetBinContent(14,8.100816);
   setHistWJetsMGHF0.33963756379447->SetBinContent(15,10.51422);
   setHistWJetsMGHF0.33963756379447->SetBinContent(16,7.613007);
   setHistWJetsMGHF0.33963756379447->SetBinContent(17,9.636467);
   setHistWJetsMGHF0.33963756379447->SetBinContent(18,5.374496);
   setHistWJetsMGHF0.33963756379447->SetBinContent(19,4.938516);
   setHistWJetsMGHF0.33963756379447->SetBinContent(20,1.48934);
   setHistWJetsMGHF0.33963756379447->SetBinError(1,2.430011);
   setHistWJetsMGHF0.33963756379447->SetBinError(2,2.680163);
   setHistWJetsMGHF0.33963756379447->SetBinError(3,3.310843);
   setHistWJetsMGHF0.33963756379447->SetBinError(4,2.874649);
   setHistWJetsMGHF0.33963756379447->SetBinError(5,2.772966);
   setHistWJetsMGHF0.33963756379447->SetBinError(6,1.583772);
   setHistWJetsMGHF0.33963756379447->SetBinError(7,2.639827);
   setHistWJetsMGHF0.33963756379447->SetBinError(8,1.517904);
   setHistWJetsMGHF0.33963756379447->SetBinError(9,2.378169);
   setHistWJetsMGHF0.33963756379447->SetBinError(10,2.236327);
   setHistWJetsMGHF0.33963756379447->SetBinError(11,2.372427);
   setHistWJetsMGHF0.33963756379447->SetBinError(12,1.977295);
   setHistWJetsMGHF0.33963756379447->SetBinError(13,2.907193);
   setHistWJetsMGHF0.33963756379447->SetBinError(14,2.091734);
   setHistWJetsMGHF0.33963756379447->SetBinError(15,2.647556);
   setHistWJetsMGHF0.33963756379447->SetBinError(16,2.023449);
   setHistWJetsMGHF0.33963756379447->SetBinError(17,1.978221);
   setHistWJetsMGHF0.33963756379447->SetBinError(18,1.673082);
   setHistWJetsMGHF0.33963756379447->SetBinError(19,1.390641);
   setHistWJetsMGHF0.33963756379447->SetBinError(20,0.7939504);
   setHistWJetsMGHF0.33963756379447->SetEntries(374);
   setHistWJetsMGHF0.33963756379447->SetDirectory(0);

   ci = TColor::GetColor("#1bb320");
   setHistWJetsMGHF0.33963756379447->SetFillColor(ci);

   ci = TColor::GetColor("#106b13");
   setHistWJetsMGHF0.33963756379447->SetLineColor(ci);
   setHistWJetsMGHF0.33963756379447->SetLineWidth(2);
   setHistWJetsMGHF0.33963756379447->SetMarkerStyle(20);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.33963756379447->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.33963756379447->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.33963756379447->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.33963756379447->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.33963756379447->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.33963756379447->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.33963756379447->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.33963756379447->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.33963756379447->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.33963756379447->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.33963756379447->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.33963756379447->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.33963756379447->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.33963756379447->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.339637563794,"HIST F");
   Double_t xAxis37[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGLF0.26478402744148 = new TH1F("setHistWJetsMGLF0.26478402744148","",20, xAxis37);
   setHistWJetsMGLF0.26478402744148->SetDirectory(0);

   ci = TColor::GetColor("#4dff97");
   setHistWJetsMGLF0.26478402744148->SetFillColor(ci);

   ci = TColor::GetColor("#2e995a");
   setHistWJetsMGLF0.26478402744148->SetLineColor(ci);
   setHistWJetsMGLF0.26478402744148->SetLineWidth(2);
   setHistWJetsMGLF0.26478402744148->SetMarkerStyle(20);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.26478402744148->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.26478402744148->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.26478402744148->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.26478402744148->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.26478402744148->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.26478402744148->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.26478402744148->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.26478402744148->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.26478402744148->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.26478402744148->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.26478402744148->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.26478402744148->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.26478402744148->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.26478402744148->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.264784027441,"HIST F");
   Double_t xAxis38[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistDYVV0.46755337167149 = new TH1F("setHistDYVV0.46755337167149","",20, xAxis38);
   setHistDYVV0.46755337167149->SetBinContent(1,3.257954);
   setHistDYVV0.46755337167149->SetBinContent(2,0.9570303);
   setHistDYVV0.46755337167149->SetBinContent(3,0.8928421);
   setHistDYVV0.46755337167149->SetBinContent(4,2.550195);
   setHistDYVV0.46755337167149->SetBinContent(5,0.6651133);
   setHistDYVV0.46755337167149->SetBinContent(6,0.8656631);
   setHistDYVV0.46755337167149->SetBinContent(7,0.8453169);
   setHistDYVV0.46755337167149->SetBinContent(8,3.076851);
   setHistDYVV0.46755337167149->SetBinContent(9,0.6773784);
   setHistDYVV0.46755337167149->SetBinContent(10,0.561911);
   setHistDYVV0.46755337167149->SetBinContent(11,3.073);
   setHistDYVV0.46755337167149->SetBinContent(12,0.8284749);
   setHistDYVV0.46755337167149->SetBinContent(13,0.3190001);
   setHistDYVV0.46755337167149->SetBinContent(14,0.8476058);
   setHistDYVV0.46755337167149->SetBinContent(15,0.8469243);
   setHistDYVV0.46755337167149->SetBinContent(16,2.636375);
   setHistDYVV0.46755337167149->SetBinContent(17,0.4527345);
   setHistDYVV0.46755337167149->SetBinContent(18,0.4163387);
   setHistDYVV0.46755337167149->SetBinContent(19,0.6696816);
   setHistDYVV0.46755337167149->SetBinContent(20,0.1772786);
   setHistDYVV0.46755337167149->SetBinError(1,2.321885);
   setHistDYVV0.46755337167149->SetBinError(2,0.280906);
   setHistDYVV0.46755337167149->SetBinError(3,0.2617356);
   setHistDYVV0.46755337167149->SetBinError(4,2.108464);
   setHistDYVV0.46755337167149->SetBinError(5,0.2153792);
   setHistDYVV0.46755337167149->SetBinError(6,0.2674282);
   setHistDYVV0.46755337167149->SetBinError(7,0.2643794);
   setHistDYVV0.46755337167149->SetBinError(8,2.182419);
   setHistDYVV0.46755337167149->SetBinError(9,0.2304089);
   setHistDYVV0.46755337167149->SetBinError(10,0.2076467);
   setHistDYVV0.46755337167149->SetBinError(11,2.093129);
   setHistDYVV0.46755337167149->SetBinError(12,0.242579);
   setHistDYVV0.46755337167149->SetBinError(13,0.1313459);
   setHistDYVV0.46755337167149->SetBinError(14,0.2401501);
   setHistDYVV0.46755337167149->SetBinError(15,0.2627116);
   setHistDYVV0.46755337167149->SetBinError(16,2.353084);
   setHistDYVV0.46755337167149->SetBinError(17,0.1762456);
   setHistDYVV0.46755337167149->SetBinError(18,0.1614882);
   setHistDYVV0.46755337167149->SetBinError(19,0.2251714);
   setHistDYVV0.46755337167149->SetBinError(20,0.1053029);
   setHistDYVV0.46755337167149->SetEntries(249);
   setHistDYVV0.46755337167149->SetDirectory(0);

   ci = TColor::GetColor("#3d7bea");
   setHistDYVV0.46755337167149->SetFillColor(ci);

   ci = TColor::GetColor("#24498c");
   setHistDYVV0.46755337167149->SetLineColor(ci);
   setHistDYVV0.46755337167149->SetLineWidth(2);
   setHistDYVV0.46755337167149->SetMarkerStyle(20);
   setHistDYVV0.46755337167149->GetXaxis()->SetNdivisions(1005);
   setHistDYVV0.46755337167149->GetXaxis()->SetLabelFont(43);
   setHistDYVV0.46755337167149->GetXaxis()->SetLabelOffset(0.0105);
   setHistDYVV0.46755337167149->GetXaxis()->SetLabelSize(32);
   setHistDYVV0.46755337167149->GetXaxis()->SetTitleSize(35);
   setHistDYVV0.46755337167149->GetXaxis()->SetTickLength(0.05);
   setHistDYVV0.46755337167149->GetXaxis()->SetTitleOffset(1.135);
   setHistDYVV0.46755337167149->GetXaxis()->SetTitleFont(43);
   setHistDYVV0.46755337167149->GetYaxis()->SetNdivisions(506);
   setHistDYVV0.46755337167149->GetYaxis()->SetLabelFont(43);
   setHistDYVV0.46755337167149->GetYaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.46755337167149->GetYaxis()->SetLabelSize(32);
   setHistDYVV0.46755337167149->GetYaxis()->SetTitleSize(35);
   setHistDYVV0.46755337167149->GetYaxis()->SetTitleOffset(1.32);
   setHistDYVV0.46755337167149->GetYaxis()->SetTitleFont(43);
   setHistDYVV0.46755337167149->GetZaxis()->SetLabelFont(43);
   setHistDYVV0.46755337167149->GetZaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.46755337167149->GetZaxis()->SetLabelSize(32);
   setHistDYVV0.46755337167149->GetZaxis()->SetTitleSize(35);
   setHistDYVV0.46755337167149->GetZaxis()->SetTitleOffset(1.32);
   setHistDYVV0.46755337167149->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDYVV0.467553371671,"HIST F");
   Double_t xAxis39[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistQCD_DD0.66581961132950 = new TH1F("setHistQCD_DD0.66581961132950","",20, xAxis39);
   setHistQCD_DD0.66581961132950->SetBinContent(1,1.703456);
   setHistQCD_DD0.66581961132950->SetBinContent(2,6.815574);
   setHistQCD_DD0.66581961132950->SetBinContent(3,11.42508);
   setHistQCD_DD0.66581961132950->SetBinContent(4,9.802655);
   setHistQCD_DD0.66581961132950->SetBinContent(5,2.816528);
   setHistQCD_DD0.66581961132950->SetBinContent(6,4.208636);
   setHistQCD_DD0.66581961132950->SetBinContent(7,5.46786);
   setHistQCD_DD0.66581961132950->SetBinContent(8,-4.965439);
   setHistQCD_DD0.66581961132950->SetBinContent(9,8.744466);
   setHistQCD_DD0.66581961132950->SetBinContent(10,5.350897);
   setHistQCD_DD0.66581961132950->SetBinContent(11,5.865205);
   setHistQCD_DD0.66581961132950->SetBinContent(12,4.878115);
   setHistQCD_DD0.66581961132950->SetBinContent(13,6.842252);
   setHistQCD_DD0.66581961132950->SetBinContent(14,1.716);
   setHistQCD_DD0.66581961132950->SetBinContent(15,4.211789);
   setHistQCD_DD0.66581961132950->SetBinContent(16,13.43782);
   setHistQCD_DD0.66581961132950->SetBinContent(17,2.355963);
   setHistQCD_DD0.66581961132950->SetBinContent(18,-0.647645);
   setHistQCD_DD0.66581961132950->SetBinContent(19,12.73965);
   setHistQCD_DD0.66581961132950->SetBinContent(20,8.449219);
   setHistQCD_DD0.66581961132950->SetBinError(1,3.801278);
   setHistQCD_DD0.66581961132950->SetBinError(2,4.289233);
   setHistQCD_DD0.66581961132950->SetBinError(3,5.0022);
   setHistQCD_DD0.66581961132950->SetBinError(4,5.049091);
   setHistQCD_DD0.66581961132950->SetBinError(5,3.74615);
   setHistQCD_DD0.66581961132950->SetBinError(6,4.327993);
   setHistQCD_DD0.66581961132950->SetBinError(7,4.602367);
   setHistQCD_DD0.66581961132950->SetBinError(8,2.846233);
   setHistQCD_DD0.66581961132950->SetBinError(9,4.790205);
   setHistQCD_DD0.66581961132950->SetBinError(10,4.586659);
   setHistQCD_DD0.66581961132950->SetBinError(11,4.593078);
   setHistQCD_DD0.66581961132950->SetBinError(12,4.30887);
   setHistQCD_DD0.66581961132950->SetBinError(13,4.555877);
   setHistQCD_DD0.66581961132950->SetBinError(14,4.083766);
   setHistQCD_DD0.66581961132950->SetBinError(15,4.326958);
   setHistQCD_DD0.66581961132950->SetBinError(16,5.866095);
   setHistQCD_DD0.66581961132950->SetBinError(17,3.755793);
   setHistQCD_DD0.66581961132950->SetBinError(18,4.113302);
   setHistQCD_DD0.66581961132950->SetBinError(19,5.225886);
   setHistQCD_DD0.66581961132950->SetBinError(20,4.614254);
   setHistQCD_DD0.66581961132950->SetEntries(5019);
   setHistQCD_DD0.66581961132950->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.66581961132950->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.66581961132950->SetLineColor(ci);
   setHistQCD_DD0.66581961132950->SetLineWidth(2);
   setHistQCD_DD0.66581961132950->SetMarkerStyle(20);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.66581961132950->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.66581961132950->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.66581961132950->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.66581961132950->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.66581961132950->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.66581961132950->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.66581961132950->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.66581961132950->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.66581961132950->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.66581961132950->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.66581961132950->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.66581961132950->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.66581961132950->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.66581961132950->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.665819611329,"HIST F");
   ->Draw("same");
   Double_t xAxis40[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.77185767852951 = new TH1F("setHistdata0.77185767852951","",20, xAxis40);
   setHistdata0.77185767852951->SetBinContent(1,634);
   setHistdata0.77185767852951->SetBinContent(2,585);
   setHistdata0.77185767852951->SetBinContent(3,501);
   setHistdata0.77185767852951->SetBinContent(4,557);
   setHistdata0.77185767852951->SetBinContent(5,564);
   setHistdata0.77185767852951->SetBinContent(6,524);
   setHistdata0.77185767852951->SetBinContent(7,552);
   setHistdata0.77185767852951->SetBinContent(8,558);
   setHistdata0.77185767852951->SetBinContent(9,590);
   setHistdata0.77185767852951->SetBinContent(10,541);
   setHistdata0.77185767852951->SetBinContent(11,589);
   setHistdata0.77185767852951->SetBinContent(12,580);
   setHistdata0.77185767852951->SetBinContent(13,566);
   setHistdata0.77185767852951->SetBinContent(14,553);
   setHistdata0.77185767852951->SetBinContent(15,522);
   setHistdata0.77185767852951->SetBinContent(16,472);
   setHistdata0.77185767852951->SetBinContent(17,476);
   setHistdata0.77185767852951->SetBinContent(18,452);
   setHistdata0.77185767852951->SetBinContent(19,340);
   setHistdata0.77185767852951->SetBinContent(20,143);
   setHistdata0.77185767852951->SetBinError(1,25.17936);
   setHistdata0.77185767852951->SetBinError(2,24.18677);
   setHistdata0.77185767852951->SetBinError(3,22.38303);
   setHistdata0.77185767852951->SetBinError(4,23.60085);
   setHistdata0.77185767852951->SetBinError(5,23.74868);
   setHistdata0.77185767852951->SetBinError(6,22.89105);
   setHistdata0.77185767852951->SetBinError(7,23.49468);
   setHistdata0.77185767852951->SetBinError(8,23.62202);
   setHistdata0.77185767852951->SetBinError(9,24.28992);
   setHistdata0.77185767852951->SetBinError(10,23.25941);
   setHistdata0.77185767852951->SetBinError(11,24.26932);
   setHistdata0.77185767852951->SetBinError(12,24.08319);
   setHistdata0.77185767852951->SetBinError(13,23.79075);
   setHistdata0.77185767852951->SetBinError(14,23.51595);
   setHistdata0.77185767852951->SetBinError(15,22.84732);
   setHistdata0.77185767852951->SetBinError(16,21.72556);
   setHistdata0.77185767852951->SetBinError(17,21.81742);
   setHistdata0.77185767852951->SetBinError(18,21.26029);
   setHistdata0.77185767852951->SetBinError(19,18.43909);
   setHistdata0.77185767852951->SetBinError(20,11.95826);
   setHistdata0.77185767852951->SetEntries(10299);
   setHistdata0.77185767852951->SetFillStyle(0);
   setHistdata0.77185767852951->SetMarkerStyle(20);
   setHistdata0.77185767852951->SetMarkerSize(1.15);
   setHistdata0.77185767852951->GetXaxis()->SetNdivisions(1005);
   setHistdata0.77185767852951->GetXaxis()->SetLabelFont(43);
   setHistdata0.77185767852951->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.77185767852951->GetXaxis()->SetLabelSize(32);
   setHistdata0.77185767852951->GetXaxis()->SetTitleSize(35);
   setHistdata0.77185767852951->GetXaxis()->SetTickLength(0.05);
   setHistdata0.77185767852951->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.77185767852951->GetXaxis()->SetTitleFont(43);
   setHistdata0.77185767852951->GetYaxis()->SetNdivisions(506);
   setHistdata0.77185767852951->GetYaxis()->SetLabelFont(43);
   setHistdata0.77185767852951->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.77185767852951->GetYaxis()->SetLabelSize(32);
   setHistdata0.77185767852951->GetYaxis()->SetTitleSize(35);
   setHistdata0.77185767852951->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.77185767852951->GetYaxis()->SetTitleFont(43);
   setHistdata0.77185767852951->GetZaxis()->SetLabelFont(43);
   setHistdata0.77185767852951->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.77185767852951->GetZaxis()->SetLabelSize(32);
   setHistdata0.77185767852951->GetZaxis()->SetTitleSize(35);
   setHistdata0.77185767852951->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.77185767852951->GetZaxis()->SetTitleFont(43);
   setHistdata0.77185767852951->Draw("PESame");
   
   TH2F *axis0.939646556172_copy52 = new TH2F("axis0.939646556172_copy52","",50,-1,1,50,0,887.6);
   axis0.939646556172_copy52->SetDirectory(0);
   axis0.939646556172_copy52->SetMarkerStyle(20);
   axis0.939646556172_copy52->GetXaxis()->SetNdivisions(1005);
   axis0.939646556172_copy52->GetXaxis()->SetLabelFont(43);
   axis0.939646556172_copy52->GetXaxis()->SetLabelOffset(0.0105);
   axis0.939646556172_copy52->GetXaxis()->SetLabelSize(0);
   axis0.939646556172_copy52->GetXaxis()->SetTitleSize(35);
   axis0.939646556172_copy52->GetXaxis()->SetTickLength(0.025);
   axis0.939646556172_copy52->GetXaxis()->SetTitleOffset(1.135);
   axis0.939646556172_copy52->GetXaxis()->SetTitleFont(43);
   axis0.939646556172_copy52->GetYaxis()->SetTitle("Events / bin");
   axis0.939646556172_copy52->GetYaxis()->SetNdivisions(506);
   axis0.939646556172_copy52->GetYaxis()->SetLabelFont(43);
   axis0.939646556172_copy52->GetYaxis()->SetLabelOffset(0.0087);
   axis0.939646556172_copy52->GetYaxis()->SetLabelSize(32);
   axis0.939646556172_copy52->GetYaxis()->SetTitleSize(35);
   axis0.939646556172_copy52->GetYaxis()->SetTickLength(0.02631579);
   axis0.939646556172_copy52->GetYaxis()->SetTitleOffset(1.32);
   axis0.939646556172_copy52->GetYaxis()->SetTitleFont(43);
   axis0.939646556172_copy52->GetZaxis()->SetLabelFont(43);
   axis0.939646556172_copy52->GetZaxis()->SetLabelOffset(0.0087);
   axis0.939646556172_copy52->GetZaxis()->SetLabelSize(32);
   axis0.939646556172_copy52->GetZaxis()->SetTitleSize(35);
   axis0.939646556172_copy52->GetZaxis()->SetTitleOffset(1.32);
   axis0.939646556172_copy52->GetZaxis()->SetTitleFont(43);
   axis0.939646556172_copy52->Draw("sameaxis");
   
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
   AText = pt->AddText("BDT#lower[0.3]{#scale[0.7]{multi.}}#kern[-0.5]{ }>#kern[-0.5]{ }0.15");
   pt->Draw();
   
   pt = new TPaveText(0.74,0.94,0.74,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(31);
   pt->SetTextFont(43);
   pt->SetTextSize(34);
   AText = pt->AddText("e#kern[-0.5]{ }+#kern[-0.5]{ }3j2t, 19.7#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (8TeV)");
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.771857678529","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.665819611329","Multijet","F");

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
   entry=leg->AddEntry("setHistDYVV0.467553371671","Z/#gamma/VV","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.264784027441","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.339637563794","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.464841259145","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.690594266125","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.0559723035848","#it{t}-channel","F");

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
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297_2->Modified();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->Modified();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297->SetSelected(cvelectron_3j2t_cosTheta_lj_qcdbdt0.581648776297);
}
