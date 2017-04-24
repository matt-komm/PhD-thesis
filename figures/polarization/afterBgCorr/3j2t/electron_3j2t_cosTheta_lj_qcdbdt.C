void plots_w/3j2t/electron_3j2t_cosTheta_lj_qcdbdt()
{
//=========Macro generated from canvas: cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308/
//=========  (Sun Apr 23 22:37:13 2017) by ROOT version6.02/05
   TCanvas *cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308 = new TCanvas("cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetHighLightColor(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->Range(0,0,1,1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetFillColor(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetBorderSize(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetTickx(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetTicky(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetLeftMargin(0.1150442);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetRightMargin(0.227083);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetTopMargin(0.04002582);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetBottomMargin(0.08064517);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetFrameLineWidth(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetFrameBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1
   TPad *cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1 = new TPad("cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1", "",0,0,1,1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->Draw();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetFillColor(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetFillStyle(4000);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetBorderSize(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetTickx(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetTicky(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetLeftMargin(0.14);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetRightMargin(0.26);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetTopMargin(0.65);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetBottomMargin(0.14);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetFrameBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.6137425588472432 = new TH2F("axisRes0.6137425588472432","",50,-1,1,50,0.6,1.4);
   axisRes0.6137425588472432->SetMarkerStyle(20);
   axisRes0.6137425588472432->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.6137425588472432->GetXaxis()->SetNdivisions(1005);
   axisRes0.6137425588472432->GetXaxis()->SetLabelFont(43);
   axisRes0.6137425588472432->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.6137425588472432->GetXaxis()->SetLabelSize(32);
   axisRes0.6137425588472432->GetXaxis()->SetTitleSize(35);
   axisRes0.6137425588472432->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.6137425588472432->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.6137425588472432->GetXaxis()->SetTitleFont(43);
   axisRes0.6137425588472432->GetYaxis()->SetTitle("Data/MC");
   axisRes0.6137425588472432->GetYaxis()->SetNdivisions(406);
   axisRes0.6137425588472432->GetYaxis()->SetLabelFont(43);
   axisRes0.6137425588472432->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.6137425588472432->GetYaxis()->SetLabelSize(32);
   axisRes0.6137425588472432->GetYaxis()->SetTitleSize(35);
   axisRes0.6137425588472432->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.6137425588472432->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.6137425588472432->GetYaxis()->SetTitleFont(43);
   axisRes0.6137425588472432->GetZaxis()->SetLabelFont(43);
   axisRes0.6137425588472432->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.6137425588472432->GetZaxis()->SetLabelSize(32);
   axisRes0.6137425588472432->GetZaxis()->SetTitleSize(35);
   axisRes0.6137425588472432->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.6137425588472432->GetZaxis()->SetTitleFont(43);
   axisRes0.6137425588472432->Draw("AXIS");
   TBox *box = new TBox(-1,0.9860475,-0.9,1.013952);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9860475,-0.9,1.013952);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9850375,-0.8,1.014963);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9850375,-0.8,1.014963);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9845446,-0.7,1.015455);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9845446,-0.7,1.015455);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9841612,-0.6,1.015839);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9841612,-0.6,1.015839);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9854722,-0.5,1.014528);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9854722,-0.5,1.014528);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9857262,-0.4,1.014274);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9857262,-0.4,1.014274);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9850573,-0.3,1.014943);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9850573,-0.3,1.014943);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9864159,-0.2,1.013584);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9864159,-0.2,1.013584);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9855966,-0.1,1.014403);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9855966,-0.1,1.014403);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856259,0,1.014374);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856259,0,1.014374);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9851248,0.1,1.014875);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9851248,0.1,1.014875);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9862346,0.2,1.013765);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9862346,0.2,1.013765);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.985919,0.3,1.014081);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.985919,0.3,1.014081);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9858982,0.4,1.014102);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9858982,0.4,1.014102);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.985632,0.5,1.014368);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.985632,0.5,1.014368);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9838657,0.6,1.016134);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9838657,0.6,1.016134);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9841605,0.7,1.01584);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.9841605,0.7,1.01584);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9752269,0.8,1.024773);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9752269,0.8,1.024773);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9790239,0.9,1.020976);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9790239,0.9,1.020976);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9536763,1,1.046324);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9536763,1,1.046324);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1871[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.6760303758920.1086940320752433 = new TH1F("setHistdata0.6760303758920.1086940320752433","",20, xAxis1871);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(1,1.076054);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(2,1.05758);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(3,0.948837);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(4,1.076541);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(5,1.067849);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(6,1.011961);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(7,1.0394);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(8,1.021583);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(9,1.001337);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(10,0.9749264);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(11,0.9925182);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(12,1.020759);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(13,0.9440936);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(14,1.028854);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(15,0.9369612);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(16,0.8790894);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(17,0.9936215);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(18,1.098675);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(19,1.023305);
   setHistdata0.6760303758920.1086940320752433->SetBinContent(20,1.513229);
   setHistdata0.6760303758920.1086940320752433->SetBinError(1,0.03913572);
   setHistdata0.6760303758920.1086940320752433->SetBinError(2,0.03916961);
   setHistdata0.6760303758920.1086940320752433->SetBinError(3,0.03780257);
   setHistdata0.6760303758920.1086940320752433->SetBinError(4,0.04023222);
   setHistdata0.6760303758920.1086940320752433->SetBinError(5,0.03999127);
   setHistdata0.6760303758920.1086940320752433->SetBinError(6,0.03900824);
   setHistdata0.6760303758920.1086940320752433->SetBinError(7,0.03898054);
   setHistdata0.6760303758920.1086940320752433->SetBinError(8,0.03858466);
   setHistdata0.6760303758920.1086940320752433->SetBinError(9,0.03755307);
   setHistdata0.6760303758920.1086940320752433->SetBinError(10,0.03692797);
   setHistdata0.6760303758920.1086940320752433->SetBinError(11,0.0368612);
   setHistdata0.6760303758920.1086940320752433->SetBinError(12,0.03801506);
   setHistdata0.6760303758920.1086940320752433->SetBinError(13,0.03636513);
   setHistdata0.6760303758920.1086940320752433->SetBinError(14,0.03908295);
   setHistdata0.6760303758920.1086940320752433->SetBinError(15,0.03712376);
   setHistdata0.6760303758920.1086940320752433->SetBinError(16,0.03708215);
   setHistdata0.6760303758920.1086940320752433->SetBinError(17,0.04111635);
   setHistdata0.6760303758920.1086940320752433->SetBinError(18,0.04646899);
   setHistdata0.6760303758920.1086940320752433->SetBinError(19,0.0504759);
   setHistdata0.6760303758920.1086940320752433->SetBinError(20,0.1097812);
   setHistdata0.6760303758920.1086940320752433->SetEntries(12813);
   setHistdata0.6760303758920.1086940320752433->SetFillStyle(0);
   setHistdata0.6760303758920.1086940320752433->SetMarkerStyle(20);
   setHistdata0.6760303758920.1086940320752433->SetMarkerSize(1.15);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetNdivisions(1005);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetLabelFont(43);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetLabelSize(32);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetTitleSize(35);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetTickLength(0.05);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.6760303758920.1086940320752433->GetXaxis()->SetTitleFont(43);
   setHistdata0.6760303758920.1086940320752433->GetYaxis()->SetNdivisions(506);
   setHistdata0.6760303758920.1086940320752433->GetYaxis()->SetLabelFont(43);
   setHistdata0.6760303758920.1086940320752433->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.6760303758920.1086940320752433->GetYaxis()->SetLabelSize(32);
   setHistdata0.6760303758920.1086940320752433->GetYaxis()->SetTitleSize(35);
   setHistdata0.6760303758920.1086940320752433->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.6760303758920.1086940320752433->GetYaxis()->SetTitleFont(43);
   setHistdata0.6760303758920.1086940320752433->GetZaxis()->SetLabelFont(43);
   setHistdata0.6760303758920.1086940320752433->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.6760303758920.1086940320752433->GetZaxis()->SetLabelSize(32);
   setHistdata0.6760303758920.1086940320752433->GetZaxis()->SetTitleSize(35);
   setHistdata0.6760303758920.1086940320752433->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.6760303758920.1086940320752433->GetZaxis()->SetTitleFont(43);
   setHistdata0.6760303758920.1086940320752433->Draw("PESame");
   
   TF1 *axisLine0.839016806108188 = new TF1("axisLine0.839016806108","1",-1,1);
   axisLine0.839016806108188->SetFillColor(19);
   axisLine0.839016806108188->SetFillStyle(0);
   axisLine0.839016806108188->SetMarkerStyle(20);
   axisLine0.839016806108188->SetLineWidth(1);
   axisLine0.839016806108188->GetXaxis()->SetNdivisions(1005);
   axisLine0.839016806108188->GetXaxis()->SetLabelFont(43);
   axisLine0.839016806108188->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.839016806108188->GetXaxis()->SetLabelSize(32);
   axisLine0.839016806108188->GetXaxis()->SetTitleSize(35);
   axisLine0.839016806108188->GetXaxis()->SetTickLength(0.05);
   axisLine0.839016806108188->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.839016806108188->GetXaxis()->SetTitleFont(43);
   axisLine0.839016806108188->GetYaxis()->SetNdivisions(506);
   axisLine0.839016806108188->GetYaxis()->SetLabelFont(43);
   axisLine0.839016806108188->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.839016806108188->GetYaxis()->SetLabelSize(32);
   axisLine0.839016806108188->GetYaxis()->SetTitleSize(35);
   axisLine0.839016806108188->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.839016806108188->GetYaxis()->SetTitleFont(43);
   axisLine0.839016806108188->Draw("SameL");
   
   TH2F *axisRes0.613742558847_copy2434 = new TH2F("axisRes0.613742558847_copy2434","",50,-1,1,50,0.6,1.4);
   axisRes0.613742558847_copy2434->SetDirectory(0);
   axisRes0.613742558847_copy2434->SetMarkerStyle(20);
   axisRes0.613742558847_copy2434->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.613742558847_copy2434->GetXaxis()->SetNdivisions(1005);
   axisRes0.613742558847_copy2434->GetXaxis()->SetLabelFont(43);
   axisRes0.613742558847_copy2434->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.613742558847_copy2434->GetXaxis()->SetLabelSize(32);
   axisRes0.613742558847_copy2434->GetXaxis()->SetTitleSize(35);
   axisRes0.613742558847_copy2434->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.613742558847_copy2434->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.613742558847_copy2434->GetXaxis()->SetTitleFont(43);
   axisRes0.613742558847_copy2434->GetYaxis()->SetTitle("Data/MC");
   axisRes0.613742558847_copy2434->GetYaxis()->SetNdivisions(406);
   axisRes0.613742558847_copy2434->GetYaxis()->SetLabelFont(43);
   axisRes0.613742558847_copy2434->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.613742558847_copy2434->GetYaxis()->SetLabelSize(32);
   axisRes0.613742558847_copy2434->GetYaxis()->SetTitleSize(35);
   axisRes0.613742558847_copy2434->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.613742558847_copy2434->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.613742558847_copy2434->GetYaxis()->SetTitleFont(43);
   axisRes0.613742558847_copy2434->GetZaxis()->SetLabelFont(43);
   axisRes0.613742558847_copy2434->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.613742558847_copy2434->GetZaxis()->SetLabelSize(32);
   axisRes0.613742558847_copy2434->GetZaxis()->SetTitleSize(35);
   axisRes0.613742558847_copy2434->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.613742558847_copy2434->GetZaxis()->SetTitleFont(43);
   axisRes0.613742558847_copy2434->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_1->Modified();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->cd();
  
// ------------>Primitives in pad: cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2
   TPad *cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2 = new TPad("cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2", "",0,0,1,1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->Draw();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->Range(-1.466667,-649.8947,1.866667,1206.947);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetFillColor(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetFillStyle(4000);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetBorderSize(2);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetTickx(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetTicky(1);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetLeftMargin(0.14);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetRightMargin(0.26);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetTopMargin(0.08);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetBottomMargin(0.35);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetFrameBorderMode(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetFrameFillStyle(0);
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->SetFrameBorderMode(0);
   
   TH2F *axis0.8379701261722435 = new TH2F("axis0.8379701261722435","",50,-1,1,50,0,1058.4);
   axis0.8379701261722435->SetMarkerStyle(20);
   axis0.8379701261722435->GetXaxis()->SetNdivisions(1005);
   axis0.8379701261722435->GetXaxis()->SetLabelFont(43);
   axis0.8379701261722435->GetXaxis()->SetLabelOffset(0.0105);
   axis0.8379701261722435->GetXaxis()->SetLabelSize(0);
   axis0.8379701261722435->GetXaxis()->SetTitleSize(35);
   axis0.8379701261722435->GetXaxis()->SetTickLength(0.025);
   axis0.8379701261722435->GetXaxis()->SetTitleOffset(1.135);
   axis0.8379701261722435->GetXaxis()->SetTitleFont(43);
   axis0.8379701261722435->GetYaxis()->SetTitle("Events / bin");
   axis0.8379701261722435->GetYaxis()->SetNdivisions(506);
   axis0.8379701261722435->GetYaxis()->SetLabelFont(43);
   axis0.8379701261722435->GetYaxis()->SetLabelOffset(0.0087);
   axis0.8379701261722435->GetYaxis()->SetLabelSize(32);
   axis0.8379701261722435->GetYaxis()->SetTitleSize(35);
   axis0.8379701261722435->GetYaxis()->SetTickLength(0.02631579);
   axis0.8379701261722435->GetYaxis()->SetTitleOffset(1.32);
   axis0.8379701261722435->GetYaxis()->SetTitleFont(43);
   axis0.8379701261722435->GetZaxis()->SetLabelFont(43);
   axis0.8379701261722435->GetZaxis()->SetLabelOffset(0.0087);
   axis0.8379701261722435->GetZaxis()->SetLabelSize(32);
   axis0.8379701261722435->GetZaxis()->SetTitleSize(35);
   axis0.8379701261722435->GetZaxis()->SetTitleOffset(1.32);
   axis0.8379701261722435->GetZaxis()->SetTitleFont(43);
   axis0.8379701261722435->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1872[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_187_stack_188 = new TH1F("_stack_187_stack_188","",20, xAxis1872);
   _stack_187_stack_188->SetMinimum(-4.347703);
   _stack_187_stack_188->SetMaximum(766.9884);
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
   
   TH1F *setHisttChannel0.6854081635522436 = new TH1F("setHisttChannel0.6854081635522436","",20, xAxis1873);
   setHisttChannel0.6854081635522436->SetBinContent(1,21.44418);
   setHisttChannel0.6854081635522436->SetBinContent(2,20.76809);
   setHisttChannel0.6854081635522436->SetBinContent(3,21.1013);
   setHisttChannel0.6854081635522436->SetBinContent(4,20.34791);
   setHisttChannel0.6854081635522436->SetBinContent(5,22.21952);
   setHisttChannel0.6854081635522436->SetBinContent(6,23.93692);
   setHisttChannel0.6854081635522436->SetBinContent(7,27.58332);
   setHisttChannel0.6854081635522436->SetBinContent(8,31.194);
   setHisttChannel0.6854081635522436->SetBinContent(9,32.58902);
   setHisttChannel0.6854081635522436->SetBinContent(10,33.73038);
   setHisttChannel0.6854081635522436->SetBinContent(11,38.27398);
   setHisttChannel0.6854081635522436->SetBinContent(12,43.49625);
   setHisttChannel0.6854081635522436->SetBinContent(13,45.40272);
   setHisttChannel0.6854081635522436->SetBinContent(14,50.10992);
   setHisttChannel0.6854081635522436->SetBinContent(15,54.03698);
   setHisttChannel0.6854081635522436->SetBinContent(16,54.04457);
   setHisttChannel0.6854081635522436->SetBinContent(17,52.09648);
   setHisttChannel0.6854081635522436->SetBinContent(18,44.63453);
   setHisttChannel0.6854081635522436->SetBinContent(19,27.67867);
   setHisttChannel0.6854081635522436->SetBinContent(20,8.525183);
   setHisttChannel0.6854081635522436->SetBinError(1,1.509409);
   setHisttChannel0.6854081635522436->SetBinError(2,1.514136);
   setHisttChannel0.6854081635522436->SetBinError(3,1.50822);
   setHisttChannel0.6854081635522436->SetBinError(4,1.465893);
   setHisttChannel0.6854081635522436->SetBinError(5,1.521527);
   setHisttChannel0.6854081635522436->SetBinError(6,1.593641);
   setHisttChannel0.6854081635522436->SetBinError(7,1.699546);
   setHisttChannel0.6854081635522436->SetBinError(8,1.816329);
   setHisttChannel0.6854081635522436->SetBinError(9,1.84811);
   setHisttChannel0.6854081635522436->SetBinError(10,1.874402);
   setHisttChannel0.6854081635522436->SetBinError(11,2.000102);
   setHisttChannel0.6854081635522436->SetBinError(12,2.129536);
   setHisttChannel0.6854081635522436->SetBinError(13,2.192418);
   setHisttChannel0.6854081635522436->SetBinError(14,2.283944);
   setHisttChannel0.6854081635522436->SetBinError(15,2.361479);
   setHisttChannel0.6854081635522436->SetBinError(16,2.375665);
   setHisttChannel0.6854081635522436->SetBinError(17,2.328094);
   setHisttChannel0.6854081635522436->SetBinError(18,2.139756);
   setHisttChannel0.6854081635522436->SetBinError(19,1.669764);
   setHisttChannel0.6854081635522436->SetBinError(20,0.9359402);
   setHisttChannel0.6854081635522436->SetEntries(14850);
   setHisttChannel0.6854081635522436->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.6854081635522436->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.6854081635522436->SetLineColor(ci);
   setHisttChannel0.6854081635522436->SetLineWidth(2);
   setHisttChannel0.6854081635522436->SetMarkerStyle(20);
   setHisttChannel0.6854081635522436->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.6854081635522436->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.6854081635522436->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.6854081635522436->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.6854081635522436->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.6854081635522436->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.6854081635522436->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.6854081635522436->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.6854081635522436->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.6854081635522436->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.6854081635522436->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.6854081635522436->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.6854081635522436->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.6854081635522436->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.6854081635522436->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.6854081635522436->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.6854081635522436->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.6854081635522436->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.6854081635522436->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.6854081635522436->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.6854081635522436->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.685408163552,"HIST F");
   Double_t xAxis1874[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttWs0.419229541992437 = new TH1F("setHisttWs0.419229541992437","",20, xAxis1874);
   setHisttWs0.419229541992437->SetBinContent(1,16.0314);
   setHisttWs0.419229541992437->SetBinContent(2,17.56123);
   setHisttWs0.419229541992437->SetBinContent(3,18.41015);
   setHisttWs0.419229541992437->SetBinContent(4,18.7257);
   setHisttWs0.419229541992437->SetBinContent(5,17.59002);
   setHisttWs0.419229541992437->SetBinContent(6,18.79059);
   setHisttWs0.419229541992437->SetBinContent(7,17.58621);
   setHisttWs0.419229541992437->SetBinContent(8,13.85753);
   setHisttWs0.419229541992437->SetBinContent(9,19.14079);
   setHisttWs0.419229541992437->SetBinContent(10,23.22336);
   setHisttWs0.419229541992437->SetBinContent(11,18.8256);
   setHisttWs0.419229541992437->SetBinContent(12,19.06313);
   setHisttWs0.419229541992437->SetBinContent(13,17.78577);
   setHisttWs0.419229541992437->SetBinContent(14,17.01316);
   setHisttWs0.419229541992437->SetBinContent(15,20.46673);
   setHisttWs0.419229541992437->SetBinContent(16,21.61127);
   setHisttWs0.419229541992437->SetBinContent(17,16.84804);
   setHisttWs0.419229541992437->SetBinContent(18,14.37333);
   setHisttWs0.419229541992437->SetBinContent(19,10.79543);
   setHisttWs0.419229541992437->SetBinContent(20,3.782686);
   setHisttWs0.419229541992437->SetBinError(1,2.573001);
   setHisttWs0.419229541992437->SetBinError(2,2.786433);
   setHisttWs0.419229541992437->SetBinError(3,2.827675);
   setHisttWs0.419229541992437->SetBinError(4,2.792914);
   setHisttWs0.419229541992437->SetBinError(5,2.714738);
   setHisttWs0.419229541992437->SetBinError(6,2.959998);
   setHisttWs0.419229541992437->SetBinError(7,2.719073);
   setHisttWs0.419229541992437->SetBinError(8,2.35734);
   setHisttWs0.419229541992437->SetBinError(9,2.90134);
   setHisttWs0.419229541992437->SetBinError(10,3.040304);
   setHisttWs0.419229541992437->SetBinError(11,2.778631);
   setHisttWs0.419229541992437->SetBinError(12,2.90838);
   setHisttWs0.419229541992437->SetBinError(13,2.666432);
   setHisttWs0.419229541992437->SetBinError(14,2.670475);
   setHisttWs0.419229541992437->SetBinError(15,2.892806);
   setHisttWs0.419229541992437->SetBinError(16,3.008056);
   setHisttWs0.419229541992437->SetBinError(17,2.530978);
   setHisttWs0.419229541992437->SetBinError(18,2.348649);
   setHisttWs0.419229541992437->SetBinError(19,2.116263);
   setHisttWs0.419229541992437->SetBinError(20,1.250125);
   setHisttWs0.419229541992437->SetEntries(2526);
   setHisttWs0.419229541992437->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.419229541992437->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.419229541992437->SetLineColor(ci);
   setHisttWs0.419229541992437->SetLineWidth(2);
   setHisttWs0.419229541992437->SetMarkerStyle(20);
   setHisttWs0.419229541992437->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.419229541992437->GetXaxis()->SetLabelFont(43);
   setHisttWs0.419229541992437->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.419229541992437->GetXaxis()->SetLabelSize(32);
   setHisttWs0.419229541992437->GetXaxis()->SetTitleSize(35);
   setHisttWs0.419229541992437->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.419229541992437->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.419229541992437->GetXaxis()->SetTitleFont(43);
   setHisttWs0.419229541992437->GetYaxis()->SetNdivisions(506);
   setHisttWs0.419229541992437->GetYaxis()->SetLabelFont(43);
   setHisttWs0.419229541992437->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.419229541992437->GetYaxis()->SetLabelSize(32);
   setHisttWs0.419229541992437->GetYaxis()->SetTitleSize(35);
   setHisttWs0.419229541992437->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.419229541992437->GetYaxis()->SetTitleFont(43);
   setHisttWs0.419229541992437->GetZaxis()->SetLabelFont(43);
   setHisttWs0.419229541992437->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.419229541992437->GetZaxis()->SetLabelSize(32);
   setHisttWs0.419229541992437->GetZaxis()->SetTitleSize(35);
   setHisttWs0.419229541992437->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.419229541992437->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.41922954199,"HIST F");
   Double_t xAxis1875[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistTTJets0.8342382101152438 = new TH1F("setHistTTJets0.8342382101152438","",20, xAxis1875);
   setHistTTJets0.8342382101152438->SetBinContent(1,646.4717);
   setHistTTJets0.8342382101152438->SetBinContent(2,617.8864);
   setHistTTJets0.8342382101152438->SetBinContent(3,594.4659);
   setHistTTJets0.8342382101152438->SetBinContent(4,595.0945);
   setHistTTJets0.8342382101152438->SetBinContent(5,603.8129);
   setHistTTJets0.8342382101152438->SetBinContent(6,608.7176);
   setHistTTJets0.8342382101152438->SetBinContent(7,612.3284);
   setHistTTJets0.8342382101152438->SetBinContent(8,632.2555);
   setHistTTJets0.8342382101152438->SetBinContent(9,634.339);
   setHistTTJets0.8342382101152438->SetBinContent(10,633.579);
   setHistTTJets0.8342382101152438->SetBinContent(11,641.9955);
   setHistTTJets0.8342382101152438->SetBinContent(12,626.4891);
   setHistTTJets0.8342382101152438->SetBinContent(13,624.7552);
   setHistTTJets0.8342382101152438->SetBinContent(14,591.7916);
   setHistTTJets0.8342382101152438->SetBinContent(15,587.064);
   setHistTTJets0.8342382101152438->SetBinContent(16,539.7065);
   setHistTTJets0.8342382101152438->SetBinContent(17,497.9258);
   setHistTTJets0.8342382101152438->SetBinContent(18,424.2024);
   setHistTTJets0.8342382101152438->SetBinContent(19,340.3792);
   setHistTTJets0.8342382101152438->SetBinContent(20,102.1189);
   setHistTTJets0.8342382101152438->SetBinError(1,7.313902);
   setHistTTJets0.8342382101152438->SetBinError(2,7.155107);
   setHistTTJets0.8342382101152438->SetBinError(3,7.013945);
   setHistTTJets0.8342382101152438->SetBinError(4,7.029084);
   setHistTTJets0.8342382101152438->SetBinError(5,7.072888);
   setHistTTJets0.8342382101152438->SetBinError(6,7.130531);
   setHistTTJets0.8342382101152438->SetBinError(7,7.169231);
   setHistTTJets0.8342382101152438->SetBinError(8,7.292324);
   setHistTTJets0.8342382101152438->SetBinError(9,7.303197);
   setHistTTJets0.8342382101152438->SetBinError(10,7.315766);
   setHistTTJets0.8342382101152438->SetBinError(11,7.390034);
   setHistTTJets0.8342382101152438->SetBinError(12,7.289528);
   setHistTTJets0.8342382101152438->SetBinError(13,7.296244);
   setHistTTJets0.8342382101152438->SetBinError(14,7.100978);
   setHistTTJets0.8342382101152438->SetBinError(15,7.099251);
   setHistTTJets0.8342382101152438->SetBinError(16,6.808684);
   setHistTTJets0.8342382101152438->SetBinError(17,6.550893);
   setHistTTJets0.8342382101152438->SetBinError(18,6.043351);
   setHistTTJets0.8342382101152438->SetBinError(19,5.459511);
   setHistTTJets0.8342382101152438->SetBinError(20,2.951948);
   setHistTTJets0.8342382101152438->SetEntries(197307);
   setHistTTJets0.8342382101152438->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.8342382101152438->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.8342382101152438->SetLineColor(ci);
   setHistTTJets0.8342382101152438->SetLineWidth(2);
   setHistTTJets0.8342382101152438->SetMarkerStyle(20);
   setHistTTJets0.8342382101152438->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.8342382101152438->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.8342382101152438->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.8342382101152438->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.8342382101152438->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.8342382101152438->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.8342382101152438->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.8342382101152438->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.8342382101152438->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.8342382101152438->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.8342382101152438->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.8342382101152438->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.8342382101152438->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.8342382101152438->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.8342382101152438->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.8342382101152438->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.8342382101152438->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.8342382101152438->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.8342382101152438->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.8342382101152438->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.8342382101152438->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.834238210115,"HIST F");
   Double_t xAxis1876[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGHF0.3825102694122439 = new TH1F("setHistWJetsMGHF0.3825102694122439","",20, xAxis1876);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(1,12.30359);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(2,18.28439);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(3,15.84782);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(4,14.02572);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(5,16.72291);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(6,9.576645);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(7,13.38777);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(8,6.923946);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(9,11.2855);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(10,12.64203);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(11,13.21813);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(12,10.18989);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(13,17.65828);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(14,11.35377);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(15,11.93925);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(16,9.572059);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(17,13.48166);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(18,18.22061);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(19,8.865305);
   setHistWJetsMGHF0.3825102694122439->SetBinContent(20,3.071827);
   setHistWJetsMGHF0.3825102694122439->SetBinError(1,3.068188);
   setHistWJetsMGHF0.3825102694122439->SetBinError(2,3.644108);
   setHistWJetsMGHF0.3825102694122439->SetBinError(3,3.856422);
   setHistWJetsMGHF0.3825102694122439->SetBinError(4,3.560855);
   setHistWJetsMGHF0.3825102694122439->SetBinError(5,3.358683);
   setHistWJetsMGHF0.3825102694122439->SetBinError(6,2.610875);
   setHistWJetsMGHF0.3825102694122439->SetBinError(7,2.849271);
   setHistWJetsMGHF0.3825102694122439->SetBinError(8,1.737481);
   setHistWJetsMGHF0.3825102694122439->SetBinError(9,2.707092);
   setHistWJetsMGHF0.3825102694122439->SetBinError(10,2.653579);
   setHistWJetsMGHF0.3825102694122439->SetBinError(11,2.885088);
   setHistWJetsMGHF0.3825102694122439->SetBinError(12,2.304243);
   setHistWJetsMGHF0.3825102694122439->SetBinError(13,3.239559);
   setHistWJetsMGHF0.3825102694122439->SetBinError(14,2.480366);
   setHistWJetsMGHF0.3825102694122439->SetBinError(15,2.788206);
   setHistWJetsMGHF0.3825102694122439->SetBinError(16,2.286175);
   setHistWJetsMGHF0.3825102694122439->SetBinError(17,2.48162);
   setHistWJetsMGHF0.3825102694122439->SetBinError(18,9.049367);
   setHistWJetsMGHF0.3825102694122439->SetBinError(19,1.98731);
   setHistWJetsMGHF0.3825102694122439->SetBinError(20,1.155496);
   setHistWJetsMGHF0.3825102694122439->SetEntries(529);
   setHistWJetsMGHF0.3825102694122439->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.3825102694122439->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.3825102694122439->SetLineColor(ci);
   setHistWJetsMGHF0.3825102694122439->SetLineWidth(2);
   setHistWJetsMGHF0.3825102694122439->SetMarkerStyle(20);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.3825102694122439->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.3825102694122439->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.3825102694122439->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.3825102694122439->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.3825102694122439->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.3825102694122439->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.3825102694122439->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.3825102694122439->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.3825102694122439->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.3825102694122439->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.3825102694122439->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.3825102694122439->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.3825102694122439->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.3825102694122439->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.382510269412,"HIST F");
   Double_t xAxis1877[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGLF0.2345399130742440 = new TH1F("setHistWJetsMGLF0.2345399130742440","",20, xAxis1877);
   setHistWJetsMGLF0.2345399130742440->SetBinContent(3,1.911727);
   setHistWJetsMGLF0.2345399130742440->SetBinError(3,1.911727);
   setHistWJetsMGLF0.2345399130742440->SetEntries(1);
   setHistWJetsMGLF0.2345399130742440->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.2345399130742440->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.2345399130742440->SetLineColor(ci);
   setHistWJetsMGLF0.2345399130742440->SetLineWidth(2);
   setHistWJetsMGLF0.2345399130742440->SetMarkerStyle(20);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.2345399130742440->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.2345399130742440->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.2345399130742440->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.2345399130742440->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.2345399130742440->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.2345399130742440->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.2345399130742440->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.2345399130742440->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.2345399130742440->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.2345399130742440->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.2345399130742440->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.2345399130742440->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.2345399130742440->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.2345399130742440->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.234539913074,"HIST F");
   Double_t xAxis1878[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistDY0.6814520352232441 = new TH1F("setHistDY0.6814520352232441","",20, xAxis1878);
   setHistDY0.6814520352232441->SetBinContent(1,2.306421);
   setHistDY0.6814520352232441->SetBinContent(4,2.099973);
   setHistDY0.6814520352232441->SetBinContent(8,2.166903);
   setHistDY0.6814520352232441->SetBinContent(11,2.07609);
   setHistDY0.6814520352232441->SetBinContent(13,0.008960249);
   setHistDY0.6814520352232441->SetBinContent(16,2.348819);
   setHistDY0.6814520352232441->SetBinContent(17,2.17827);
   setHistDY0.6814520352232441->SetBinContent(19,0.5663635);
   setHistDY0.6814520352232441->SetBinError(1,2.306421);
   setHistDY0.6814520352232441->SetBinError(4,2.099973);
   setHistDY0.6814520352232441->SetBinError(8,2.166903);
   setHistDY0.6814520352232441->SetBinError(11,2.07609);
   setHistDY0.6814520352232441->SetBinError(13,0.008960249);
   setHistDY0.6814520352232441->SetBinError(16,2.348819);
   setHistDY0.6814520352232441->SetBinError(17,2.17827);
   setHistDY0.6814520352232441->SetBinError(19,0.5663635);
   setHistDY0.6814520352232441->SetEntries(8);
   setHistDY0.6814520352232441->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.6814520352232441->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.6814520352232441->SetLineColor(ci);
   setHistDY0.6814520352232441->SetLineWidth(2);
   setHistDY0.6814520352232441->SetMarkerStyle(20);
   setHistDY0.6814520352232441->GetXaxis()->SetNdivisions(1005);
   setHistDY0.6814520352232441->GetXaxis()->SetLabelFont(43);
   setHistDY0.6814520352232441->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.6814520352232441->GetXaxis()->SetLabelSize(32);
   setHistDY0.6814520352232441->GetXaxis()->SetTitleSize(35);
   setHistDY0.6814520352232441->GetXaxis()->SetTickLength(0.05);
   setHistDY0.6814520352232441->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.6814520352232441->GetXaxis()->SetTitleFont(43);
   setHistDY0.6814520352232441->GetYaxis()->SetNdivisions(506);
   setHistDY0.6814520352232441->GetYaxis()->SetLabelFont(43);
   setHistDY0.6814520352232441->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.6814520352232441->GetYaxis()->SetLabelSize(32);
   setHistDY0.6814520352232441->GetYaxis()->SetTitleSize(35);
   setHistDY0.6814520352232441->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.6814520352232441->GetYaxis()->SetTitleFont(43);
   setHistDY0.6814520352232441->GetZaxis()->SetLabelFont(43);
   setHistDY0.6814520352232441->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.6814520352232441->GetZaxis()->SetLabelSize(32);
   setHistDY0.6814520352232441->GetZaxis()->SetTitleSize(35);
   setHistDY0.6814520352232441->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.6814520352232441->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.681452035223,"HIST F");
   Double_t xAxis1879[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistQCD_DD0.6996589473032442 = new TH1F("setHistQCD_DD0.6996589473032442","",20, xAxis1879);
   setHistQCD_DD0.6996589473032442->SetBinContent(1,4.009377);
   setHistQCD_DD0.6996589473032442->SetBinContent(2,14.80973);
   setHistQCD_DD0.6996589473032442->SetBinContent(3,12.23389);
   setHistQCD_DD0.6996589473032442->SetBinContent(4,14.7993);
   setHistQCD_DD0.6996589473032442->SetBinContent(5,7.351794);
   setHistQCD_DD0.6996589473032442->SetBinContent(6,4.023549);
   setHistQCD_DD0.6996589473032442->SetBinContent(7,13.16298);
   setHistQCD_DD0.6996589473032442->SetBinContent(8,-0.2079437);
   setHistQCD_DD0.6996589473032442->SetBinContent(9,12.69632);
   setHistQCD_DD0.6996589473032442->SetBinContent(10,11.75096);
   setHistQCD_DD0.6996589473032442->SetBinContent(11,16.07579);
   setHistQCD_DD0.6996589473032442->SetBinContent(12,7.098635);
   setHistQCD_DD0.6996589473032442->SetBinContent(13,8.301309);
   setHistQCD_DD0.6996589473032442->SetBinContent(14,3.296265);
   setHistQCD_DD0.6996589473032442->SetBinContent(15,6.350318);
   setHistQCD_DD0.6996589473032442->SetBinContent(16,12.01466);
   setHistQCD_DD0.6996589473032442->SetBinContent(17,5.218637);
   setHistQCD_DD0.6996589473032442->SetBinContent(18,7.363935);
   setHistQCD_DD0.6996589473032442->SetBinContent(19,13.35498);
   setHistQCD_DD0.6996589473032442->SetBinContent(20,8.06076);
   setHistQCD_DD0.6996589473032442->SetBinError(1,4.354885);
   setHistQCD_DD0.6996589473032442->SetBinError(2,5.642944);
   setHistQCD_DD0.6996589473032442->SetBinError(3,5.226318);
   setHistQCD_DD0.6996589473032442->SetBinError(4,5.87569);
   setHistQCD_DD0.6996589473032442->SetBinError(5,4.806485);
   setHistQCD_DD0.6996589473032442->SetBinError(6,4.598832);
   setHistQCD_DD0.6996589473032442->SetBinError(7,5.889149);
   setHistQCD_DD0.6996589473032442->SetBinError(8,4.13976);
   setHistQCD_DD0.6996589473032442->SetBinError(9,5.665335);
   setHistQCD_DD0.6996589473032442->SetBinError(10,5.682101);
   setHistQCD_DD0.6996589473032442->SetBinError(11,6.252845);
   setHistQCD_DD0.6996589473032442->SetBinError(12,4.805876);
   setHistQCD_DD0.6996589473032442->SetBinError(13,5.04061);
   setHistQCD_DD0.6996589473032442->SetBinError(14,4.614896);
   setHistQCD_DD0.6996589473032442->SetBinError(15,4.826885);
   setHistQCD_DD0.6996589473032442->SetBinError(16,5.881966);
   setHistQCD_DD0.6996589473032442->SetBinError(17,4.585465);
   setHistQCD_DD0.6996589473032442->SetBinError(18,5.510327);
   setHistQCD_DD0.6996589473032442->SetBinError(19,5.443765);
   setHistQCD_DD0.6996589473032442->SetBinError(20,4.619758);
   setHistQCD_DD0.6996589473032442->SetEntries(6418);
   setHistQCD_DD0.6996589473032442->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.6996589473032442->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.6996589473032442->SetLineColor(ci);
   setHistQCD_DD0.6996589473032442->SetLineWidth(2);
   setHistQCD_DD0.6996589473032442->SetMarkerStyle(20);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.6996589473032442->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.6996589473032442->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.6996589473032442->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.6996589473032442->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.6996589473032442->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.6996589473032442->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.6996589473032442->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.6996589473032442->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.6996589473032442->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.6996589473032442->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.6996589473032442->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.6996589473032442->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.6996589473032442->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.6996589473032442->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.699658947303,"HIST F");
   ->Draw("same");
   Double_t xAxis1880[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.6760303758922443 = new TH1F("setHistdata0.6760303758922443","",20, xAxis1880);
   setHistdata0.6760303758922443->SetBinContent(1,756);
   setHistdata0.6760303758922443->SetBinContent(2,729);
   setHistdata0.6760303758922443->SetBinContent(3,630);
   setHistdata0.6760303758922443->SetBinContent(4,716);
   setHistdata0.6760303758922443->SetBinContent(5,713);
   setHistdata0.6760303758922443->SetBinContent(6,673);
   setHistdata0.6760303758922443->SetBinContent(7,711);
   setHistdata0.6760303758922443->SetBinContent(8,701);
   setHistdata0.6760303758922443->SetBinContent(9,711);
   setHistdata0.6760303758922443->SetBinContent(10,697);
   setHistdata0.6760303758922443->SetBinContent(11,725);
   setHistdata0.6760303758922443->SetBinContent(12,721);
   setHistdata0.6760303758922443->SetBinContent(13,674);
   setHistdata0.6760303758922443->SetBinContent(14,693);
   setHistdata0.6760303758922443->SetBinContent(15,637);
   setHistdata0.6760303758922443->SetBinContent(16,562);
   setHistdata0.6760303758922443->SetBinContent(17,584);
   setHistdata0.6760303758922443->SetBinContent(18,559);
   setHistdata0.6760303758922443->SetBinContent(19,411);
   setHistdata0.6760303758922443->SetBinContent(20,190);
   setHistdata0.6760303758922443->SetBinError(1,27.49545);
   setHistdata0.6760303758922443->SetBinError(2,27);
   setHistdata0.6760303758922443->SetBinError(3,25.0998);
   setHistdata0.6760303758922443->SetBinError(4,26.75818);
   setHistdata0.6760303758922443->SetBinError(5,26.70206);
   setHistdata0.6760303758922443->SetBinError(6,25.94224);
   setHistdata0.6760303758922443->SetBinError(7,26.66458);
   setHistdata0.6760303758922443->SetBinError(8,26.4764);
   setHistdata0.6760303758922443->SetBinError(9,26.66458);
   setHistdata0.6760303758922443->SetBinError(10,26.40076);
   setHistdata0.6760303758922443->SetBinError(11,26.92582);
   setHistdata0.6760303758922443->SetBinError(12,26.85144);
   setHistdata0.6760303758922443->SetBinError(13,25.96151);
   setHistdata0.6760303758922443->SetBinError(14,26.32489);
   setHistdata0.6760303758922443->SetBinError(15,25.23886);
   setHistdata0.6760303758922443->SetBinError(16,23.70654);
   setHistdata0.6760303758922443->SetBinError(17,24.16609);
   setHistdata0.6760303758922443->SetBinError(18,23.64318);
   setHistdata0.6760303758922443->SetBinError(19,20.27313);
   setHistdata0.6760303758922443->SetBinError(20,13.78405);
   setHistdata0.6760303758922443->SetEntries(12793);
   setHistdata0.6760303758922443->SetFillStyle(0);
   setHistdata0.6760303758922443->SetMarkerStyle(20);
   setHistdata0.6760303758922443->SetMarkerSize(1.15);
   setHistdata0.6760303758922443->GetXaxis()->SetNdivisions(1005);
   setHistdata0.6760303758922443->GetXaxis()->SetLabelFont(43);
   setHistdata0.6760303758922443->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.6760303758922443->GetXaxis()->SetLabelSize(32);
   setHistdata0.6760303758922443->GetXaxis()->SetTitleSize(35);
   setHistdata0.6760303758922443->GetXaxis()->SetTickLength(0.05);
   setHistdata0.6760303758922443->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.6760303758922443->GetXaxis()->SetTitleFont(43);
   setHistdata0.6760303758922443->GetYaxis()->SetNdivisions(506);
   setHistdata0.6760303758922443->GetYaxis()->SetLabelFont(43);
   setHistdata0.6760303758922443->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.6760303758922443->GetYaxis()->SetLabelSize(32);
   setHistdata0.6760303758922443->GetYaxis()->SetTitleSize(35);
   setHistdata0.6760303758922443->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.6760303758922443->GetYaxis()->SetTitleFont(43);
   setHistdata0.6760303758922443->GetZaxis()->SetLabelFont(43);
   setHistdata0.6760303758922443->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.6760303758922443->GetZaxis()->SetLabelSize(32);
   setHistdata0.6760303758922443->GetZaxis()->SetTitleSize(35);
   setHistdata0.6760303758922443->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.6760303758922443->GetZaxis()->SetTitleFont(43);
   setHistdata0.6760303758922443->Draw("PESame");
   
   TH2F *axis0.837970126172_copy2444 = new TH2F("axis0.837970126172_copy2444","",50,-1,1,50,0,1058.4);
   axis0.837970126172_copy2444->SetDirectory(0);
   axis0.837970126172_copy2444->SetMarkerStyle(20);
   axis0.837970126172_copy2444->GetXaxis()->SetNdivisions(1005);
   axis0.837970126172_copy2444->GetXaxis()->SetLabelFont(43);
   axis0.837970126172_copy2444->GetXaxis()->SetLabelOffset(0.0105);
   axis0.837970126172_copy2444->GetXaxis()->SetLabelSize(0);
   axis0.837970126172_copy2444->GetXaxis()->SetTitleSize(35);
   axis0.837970126172_copy2444->GetXaxis()->SetTickLength(0.025);
   axis0.837970126172_copy2444->GetXaxis()->SetTitleOffset(1.135);
   axis0.837970126172_copy2444->GetXaxis()->SetTitleFont(43);
   axis0.837970126172_copy2444->GetYaxis()->SetTitle("Events / bin");
   axis0.837970126172_copy2444->GetYaxis()->SetNdivisions(506);
   axis0.837970126172_copy2444->GetYaxis()->SetLabelFont(43);
   axis0.837970126172_copy2444->GetYaxis()->SetLabelOffset(0.0087);
   axis0.837970126172_copy2444->GetYaxis()->SetLabelSize(32);
   axis0.837970126172_copy2444->GetYaxis()->SetTitleSize(35);
   axis0.837970126172_copy2444->GetYaxis()->SetTickLength(0.02631579);
   axis0.837970126172_copy2444->GetYaxis()->SetTitleOffset(1.32);
   axis0.837970126172_copy2444->GetYaxis()->SetTitleFont(43);
   axis0.837970126172_copy2444->GetZaxis()->SetLabelFont(43);
   axis0.837970126172_copy2444->GetZaxis()->SetLabelOffset(0.0087);
   axis0.837970126172_copy2444->GetZaxis()->SetLabelSize(32);
   axis0.837970126172_copy2444->GetZaxis()->SetTitleSize(35);
   axis0.837970126172_copy2444->GetZaxis()->SetTitleOffset(1.32);
   axis0.837970126172_copy2444->GetZaxis()->SetTitleFont(43);
   axis0.837970126172_copy2444->Draw("sameaxis");
   
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.676030375892","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.699658947303","Multijet","F");

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
   entry=leg->AddEntry("setHistDY0.681452035223","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.234539913074","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.382510269412","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.834238210115","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.41922954199","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.685408163552","#it{t}-channel","F");

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
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308_2->Modified();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->Modified();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->cd();
   cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308->SetSelected(cvelectron_3j2t_cosTheta_lj_qcdbdt0.483417645308);
}
