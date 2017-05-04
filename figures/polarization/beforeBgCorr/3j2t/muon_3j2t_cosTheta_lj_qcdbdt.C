void plots_now/3j2t/muon_3j2t_cosTheta_lj_qcdbdt()
{
//=========Macro generated from canvas: cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409/
//=========  (Sat Apr 29 17:51:52 2017) by ROOT version6.02/05
   TCanvas *cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409 = new TCanvas("cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetHighLightColor(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->Range(0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetLeftMargin(0.1150442);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetRightMargin(0.227083);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetTopMargin(0.04002582);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetBottomMargin(0.08064517);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetFrameLineWidth(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetTopMargin(0.65);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetBottomMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.6597930379262536 = new TH2F("axisRes0.6597930379262536","",50,-1,1,50,0.6,1.4);
   axisRes0.6597930379262536->SetMarkerStyle(20);
   axisRes0.6597930379262536->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.6597930379262536->GetXaxis()->SetNdivisions(1005);
   axisRes0.6597930379262536->GetXaxis()->SetLabelFont(43);
   axisRes0.6597930379262536->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.6597930379262536->GetXaxis()->SetLabelSize(32);
   axisRes0.6597930379262536->GetXaxis()->SetTitleSize(35);
   axisRes0.6597930379262536->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.6597930379262536->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.6597930379262536->GetXaxis()->SetTitleFont(43);
   axisRes0.6597930379262536->GetYaxis()->SetTitle("Data/MC");
   axisRes0.6597930379262536->GetYaxis()->SetNdivisions(406);
   axisRes0.6597930379262536->GetYaxis()->SetLabelFont(43);
   axisRes0.6597930379262536->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.6597930379262536->GetYaxis()->SetLabelSize(32);
   axisRes0.6597930379262536->GetYaxis()->SetTitleSize(35);
   axisRes0.6597930379262536->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.6597930379262536->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.6597930379262536->GetYaxis()->SetTitleFont(43);
   axisRes0.6597930379262536->GetZaxis()->SetLabelFont(43);
   axisRes0.6597930379262536->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.6597930379262536->GetZaxis()->SetLabelSize(32);
   axisRes0.6597930379262536->GetZaxis()->SetTitleSize(35);
   axisRes0.6597930379262536->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.6597930379262536->GetZaxis()->SetTitleFont(43);
   axisRes0.6597930379262536->Draw("AXIS");
   TBox *box = new TBox(-1,0.9861434,-0.9,1.013857);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-1,0.9861434,-0.9,1.013857);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9856373,-0.8,1.014363);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.9,0.9856373,-0.8,1.014363);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9862918,-0.7,1.013708);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.8,0.9862918,-0.7,1.013708);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9865439,-0.6,1.013456);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.7,0.9865439,-0.6,1.013456);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9867326,-0.5,1.013267);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.6,0.9867326,-0.5,1.013267);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9855544,-0.4,1.014446);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.5,0.9855544,-0.4,1.014446);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9855647,-0.3,1.014435);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.4,0.9855647,-0.3,1.014435);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9860217,-0.2,1.013978);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.3,0.9860217,-0.2,1.013978);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9868065,-0.1,1.013194);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.2,0.9868065,-0.1,1.013194);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856708,0,1.014329);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(-0.1,0.9856708,0,1.014329);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9864585,0.1,1.013542);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.9864585,0.1,1.013542);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9848597,0.2,1.01514);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.1,0.9848597,0.2,1.01514);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9860358,0.3,1.013964);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.2,0.9860358,0.3,1.013964);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9854847,0.4,1.014515);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.3,0.9854847,0.4,1.014515);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.9854044,0.5,1.014596);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.4,0.9854044,0.5,1.014596);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9853894,0.6,1.014611);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.5,0.9853894,0.6,1.014611);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.983368,0.7,1.016632);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.6,0.983368,0.7,1.016632);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9831178,0.8,1.016882);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.7,0.9831178,0.8,1.016882);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9804454,0.9,1.019555);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.8,0.9804454,0.9,1.019555);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9557512,1,1.044249);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0.9,0.9557512,1,1.044249);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1951[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.7577094287580.1013623309332537 = new TH1F("setHistdata0.7577094287580.1013623309332537","",20, xAxis1951);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(1,0.9970261);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(2,1.013229);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(3,1.008007);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(4,0.9569709);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(5,1.061056);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(6,0.9996147);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(7,1.007807);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(8,1.022159);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(9,0.9845744);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(10,0.9263075);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(11,1.059772);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(12,0.9344844);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(13,0.975458);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(14,0.9921344);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(15,1.019054);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(16,1.038145);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(17,1.014461);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(18,0.9961226);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(19,1.024441);
   setHistdata0.7577094287580.1013623309332537->SetBinContent(20,1.107264);
   setHistdata0.7577094287580.1013623309332537->SetBinError(1,0.03342039);
   setHistdata0.7577094287580.1013623309332537->SetBinError(2,0.03342334);
   setHistdata0.7577094287580.1013623309332537->SetBinError(3,0.03347033);
   setHistdata0.7577094287580.1013623309332537->SetBinError(4,0.03231461);
   setHistdata0.7577094287580.1013623309332537->SetBinError(5,0.03479341);
   setHistdata0.7577094287580.1013623309332537->SetBinError(6,0.0329922);
   setHistdata0.7577094287580.1013623309332537->SetBinError(7,0.03288853);
   setHistdata0.7577094287580.1013623309332537->SetBinError(8,0.03337466);
   setHistdata0.7577094287580.1013623309332537->SetBinError(9,0.03281915);
   setHistdata0.7577094287580.1013623309332537->SetBinError(10,0.03103247);
   setHistdata0.7577094287580.1013623309332537->SetBinError(11,0.0340448);
   setHistdata0.7577094287580.1013623309332537->SetBinError(12,0.03130641);
   setHistdata0.7577094287580.1013623309332537->SetBinError(13,0.03260596);
   setHistdata0.7577094287580.1013623309332537->SetBinError(14,0.0329979);
   setHistdata0.7577094287580.1013623309332537->SetBinError(15,0.03413959);
   setHistdata0.7577094287580.1013623309332537->SetBinError(16,0.03468199);
   setHistdata0.7577094287580.1013623309332537->SetBinError(17,0.03455268);
   setHistdata0.7577094287580.1013623309332537->SetBinError(18,0.03625261);
   setHistdata0.7577094287580.1013623309332537->SetBinError(19,0.04097763);
   setHistdata0.7577094287580.1013623309332537->SetBinError(20,0.07365408);
   setHistdata0.7577094287580.1013623309332537->SetEntries(17043);
   setHistdata0.7577094287580.1013623309332537->SetFillStyle(0);
   setHistdata0.7577094287580.1013623309332537->SetMarkerStyle(20);
   setHistdata0.7577094287580.1013623309332537->SetMarkerSize(1.15);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetNdivisions(1005);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetLabelFont(43);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetLabelSize(32);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetTitleSize(35);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetTickLength(0.05);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.7577094287580.1013623309332537->GetXaxis()->SetTitleFont(43);
   setHistdata0.7577094287580.1013623309332537->GetYaxis()->SetNdivisions(506);
   setHistdata0.7577094287580.1013623309332537->GetYaxis()->SetLabelFont(43);
   setHistdata0.7577094287580.1013623309332537->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.7577094287580.1013623309332537->GetYaxis()->SetLabelSize(32);
   setHistdata0.7577094287580.1013623309332537->GetYaxis()->SetTitleSize(35);
   setHistdata0.7577094287580.1013623309332537->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.7577094287580.1013623309332537->GetYaxis()->SetTitleFont(43);
   setHistdata0.7577094287580.1013623309332537->GetZaxis()->SetLabelFont(43);
   setHistdata0.7577094287580.1013623309332537->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.7577094287580.1013623309332537->GetZaxis()->SetLabelSize(32);
   setHistdata0.7577094287580.1013623309332537->GetZaxis()->SetTitleSize(35);
   setHistdata0.7577094287580.1013623309332537->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.7577094287580.1013623309332537->GetZaxis()->SetTitleFont(43);
   setHistdata0.7577094287580.1013623309332537->Draw("PESame");
   
   TF1 *axisLine0.26919413099196 = new TF1("axisLine0.26919413099","1",-1,1);
   axisLine0.26919413099196->SetFillColor(19);
   axisLine0.26919413099196->SetFillStyle(0);
   axisLine0.26919413099196->SetMarkerStyle(20);
   axisLine0.26919413099196->SetLineWidth(1);
   axisLine0.26919413099196->GetXaxis()->SetNdivisions(1005);
   axisLine0.26919413099196->GetXaxis()->SetLabelFont(43);
   axisLine0.26919413099196->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.26919413099196->GetXaxis()->SetLabelSize(32);
   axisLine0.26919413099196->GetXaxis()->SetTitleSize(35);
   axisLine0.26919413099196->GetXaxis()->SetTickLength(0.05);
   axisLine0.26919413099196->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.26919413099196->GetXaxis()->SetTitleFont(43);
   axisLine0.26919413099196->GetYaxis()->SetNdivisions(506);
   axisLine0.26919413099196->GetYaxis()->SetLabelFont(43);
   axisLine0.26919413099196->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.26919413099196->GetYaxis()->SetLabelSize(32);
   axisLine0.26919413099196->GetYaxis()->SetTitleSize(35);
   axisLine0.26919413099196->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.26919413099196->GetYaxis()->SetTitleFont(43);
   axisLine0.26919413099196->Draw("SameL");
   
   TH2F *axisRes0.659793037926_copy2538 = new TH2F("axisRes0.659793037926_copy2538","",50,-1,1,50,0.6,1.4);
   axisRes0.659793037926_copy2538->SetDirectory(0);
   axisRes0.659793037926_copy2538->SetMarkerStyle(20);
   axisRes0.659793037926_copy2538->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.659793037926_copy2538->GetXaxis()->SetNdivisions(1005);
   axisRes0.659793037926_copy2538->GetXaxis()->SetLabelFont(43);
   axisRes0.659793037926_copy2538->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.659793037926_copy2538->GetXaxis()->SetLabelSize(32);
   axisRes0.659793037926_copy2538->GetXaxis()->SetTitleSize(35);
   axisRes0.659793037926_copy2538->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.659793037926_copy2538->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.659793037926_copy2538->GetXaxis()->SetTitleFont(43);
   axisRes0.659793037926_copy2538->GetYaxis()->SetTitle("Data/MC");
   axisRes0.659793037926_copy2538->GetYaxis()->SetNdivisions(406);
   axisRes0.659793037926_copy2538->GetYaxis()->SetLabelFont(43);
   axisRes0.659793037926_copy2538->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.659793037926_copy2538->GetYaxis()->SetLabelSize(32);
   axisRes0.659793037926_copy2538->GetYaxis()->SetTitleSize(35);
   axisRes0.659793037926_copy2538->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.659793037926_copy2538->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.659793037926_copy2538->GetYaxis()->SetTitleFont(43);
   axisRes0.659793037926_copy2538->GetZaxis()->SetLabelFont(43);
   axisRes0.659793037926_copy2538->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.659793037926_copy2538->GetZaxis()->SetLabelSize(32);
   axisRes0.659793037926_copy2538->GetZaxis()->SetTitleSize(35);
   axisRes0.659793037926_copy2538->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.659793037926_copy2538->GetZaxis()->SetTitleFont(43);
   axisRes0.659793037926_copy2538->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_1->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->cd();
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->Range(-1.466667,-833,1.866667,1547);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetTopMargin(0.08);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetBottomMargin(0.35);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->SetFrameBorderMode(0);
   
   TH2F *axis0.8233453474952539 = new TH2F("axis0.8233453474952539","",50,-1,1,50,0,1356.6);
   axis0.8233453474952539->SetMarkerStyle(20);
   axis0.8233453474952539->GetXaxis()->SetNdivisions(1005);
   axis0.8233453474952539->GetXaxis()->SetLabelFont(43);
   axis0.8233453474952539->GetXaxis()->SetLabelOffset(0.0105);
   axis0.8233453474952539->GetXaxis()->SetLabelSize(0);
   axis0.8233453474952539->GetXaxis()->SetTitleSize(35);
   axis0.8233453474952539->GetXaxis()->SetTickLength(0.025);
   axis0.8233453474952539->GetXaxis()->SetTitleOffset(1.135);
   axis0.8233453474952539->GetXaxis()->SetTitleFont(43);
   axis0.8233453474952539->GetYaxis()->SetTitle("Events / bin");
   axis0.8233453474952539->GetYaxis()->SetNdivisions(506);
   axis0.8233453474952539->GetYaxis()->SetLabelFont(43);
   axis0.8233453474952539->GetYaxis()->SetLabelOffset(0.0087);
   axis0.8233453474952539->GetYaxis()->SetLabelSize(32);
   axis0.8233453474952539->GetYaxis()->SetTitleSize(35);
   axis0.8233453474952539->GetYaxis()->SetTickLength(0.02631579);
   axis0.8233453474952539->GetYaxis()->SetTitleOffset(1.32);
   axis0.8233453474952539->GetYaxis()->SetTitleFont(43);
   axis0.8233453474952539->GetZaxis()->SetLabelFont(43);
   axis0.8233453474952539->GetZaxis()->SetLabelOffset(0.0087);
   axis0.8233453474952539->GetZaxis()->SetLabelSize(32);
   axis0.8233453474952539->GetZaxis()->SetTitleSize(35);
   axis0.8233453474952539->GetZaxis()->SetTitleOffset(1.32);
   axis0.8233453474952539->GetZaxis()->SetTitleFont(43);
   axis0.8233453474952539->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1952[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_195_stack_196 = new TH1F("_stack_195_stack_196","",20, xAxis1952);
   _stack_195_stack_196->SetMinimum(-13.18613);
   _stack_195_stack_196->SetMaximum(1009.978);
   _stack_195_stack_196->SetDirectory(0);
   _stack_195_stack_196->SetStats(0);
   _stack_195_stack_196->SetMarkerStyle(20);
   _stack_195_stack_196->GetXaxis()->SetNdivisions(1005);
   _stack_195_stack_196->GetXaxis()->SetLabelFont(43);
   _stack_195_stack_196->GetXaxis()->SetLabelOffset(0.0105);
   _stack_195_stack_196->GetXaxis()->SetLabelSize(32);
   _stack_195_stack_196->GetXaxis()->SetTitleSize(35);
   _stack_195_stack_196->GetXaxis()->SetTickLength(0.05);
   _stack_195_stack_196->GetXaxis()->SetTitleOffset(1.135);
   _stack_195_stack_196->GetXaxis()->SetTitleFont(43);
   _stack_195_stack_196->GetYaxis()->SetNdivisions(506);
   _stack_195_stack_196->GetYaxis()->SetLabelFont(43);
   _stack_195_stack_196->GetYaxis()->SetLabelOffset(0.0087);
   _stack_195_stack_196->GetYaxis()->SetLabelSize(32);
   _stack_195_stack_196->GetYaxis()->SetTitleSize(35);
   _stack_195_stack_196->GetYaxis()->SetTitleOffset(1.32);
   _stack_195_stack_196->GetYaxis()->SetTitleFont(43);
   _stack_195_stack_196->GetZaxis()->SetLabelFont(43);
   _stack_195_stack_196->GetZaxis()->SetLabelOffset(0.0087);
   _stack_195_stack_196->GetZaxis()->SetLabelSize(32);
   _stack_195_stack_196->GetZaxis()->SetTitleSize(35);
   _stack_195_stack_196->GetZaxis()->SetTitleOffset(1.32);
   _stack_195_stack_196->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_195_stack_196);
   
   Double_t xAxis1953[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttChannel0.6345208773122540 = new TH1F("setHisttChannel0.6345208773122540","",20, xAxis1953);
   setHisttChannel0.6345208773122540->SetBinContent(1,24.13267);
   setHisttChannel0.6345208773122540->SetBinContent(2,26.99692);
   setHisttChannel0.6345208773122540->SetBinContent(3,24.75311);
   setHisttChannel0.6345208773122540->SetBinContent(4,30.22013);
   setHisttChannel0.6345208773122540->SetBinContent(5,31.1625);
   setHisttChannel0.6345208773122540->SetBinContent(6,33.40547);
   setHisttChannel0.6345208773122540->SetBinContent(7,36.66896);
   setHisttChannel0.6345208773122540->SetBinContent(8,40.95938);
   setHisttChannel0.6345208773122540->SetBinContent(9,46.31335);
   setHisttChannel0.6345208773122540->SetBinContent(10,48.02217);
   setHisttChannel0.6345208773122540->SetBinContent(11,57.58482);
   setHisttChannel0.6345208773122540->SetBinContent(12,64.07852);
   setHisttChannel0.6345208773122540->SetBinContent(13,64.04989);
   setHisttChannel0.6345208773122540->SetBinContent(14,69.04692);
   setHisttChannel0.6345208773122540->SetBinContent(15,69.3368);
   setHisttChannel0.6345208773122540->SetBinContent(16,76.63512);
   setHisttChannel0.6345208773122540->SetBinContent(17,79.86387);
   setHisttChannel0.6345208773122540->SetBinContent(18,74.84472);
   setHisttChannel0.6345208773122540->SetBinContent(19,54.75772);
   setHisttChannel0.6345208773122540->SetBinContent(20,15.70786);
   setHisttChannel0.6345208773122540->SetBinError(1,1.633121);
   setHisttChannel0.6345208773122540->SetBinError(2,1.709827);
   setHisttChannel0.6345208773122540->SetBinError(3,1.649407);
   setHisttChannel0.6345208773122540->SetBinError(4,1.812723);
   setHisttChannel0.6345208773122540->SetBinError(5,1.854294);
   setHisttChannel0.6345208773122540->SetBinError(6,1.91055);
   setHisttChannel0.6345208773122540->SetBinError(7,2.013708);
   setHisttChannel0.6345208773122540->SetBinError(8,2.145882);
   setHisttChannel0.6345208773122540->SetBinError(9,2.283283);
   setHisttChannel0.6345208773122540->SetBinError(10,2.280172);
   setHisttChannel0.6345208773122540->SetBinError(11,2.543815);
   setHisttChannel0.6345208773122540->SetBinError(12,2.659593);
   setHisttChannel0.6345208773122540->SetBinError(13,2.623406);
   setHisttChannel0.6345208773122540->SetBinError(14,2.738276);
   setHisttChannel0.6345208773122540->SetBinError(15,2.746206);
   setHisttChannel0.6345208773122540->SetBinError(16,2.902526);
   setHisttChannel0.6345208773122540->SetBinError(17,2.97768);
   setHisttChannel0.6345208773122540->SetBinError(18,2.8867);
   setHisttChannel0.6345208773122540->SetBinError(19,2.483553);
   setHisttChannel0.6345208773122540->SetBinError(20,1.318144);
   setHisttChannel0.6345208773122540->SetEntries(20202);
   setHisttChannel0.6345208773122540->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.6345208773122540->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.6345208773122540->SetLineColor(ci);
   setHisttChannel0.6345208773122540->SetLineWidth(2);
   setHisttChannel0.6345208773122540->SetMarkerStyle(20);
   setHisttChannel0.6345208773122540->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.6345208773122540->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.6345208773122540->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.6345208773122540->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.6345208773122540->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.6345208773122540->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.6345208773122540->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.6345208773122540->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.6345208773122540->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.6345208773122540->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.6345208773122540->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.6345208773122540->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.6345208773122540->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.6345208773122540->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.6345208773122540->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.6345208773122540->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.6345208773122540->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.6345208773122540->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.6345208773122540->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.6345208773122540->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.6345208773122540->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.634520877312,"HIST F");
   Double_t xAxis1954[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttWs0.03370934829032541 = new TH1F("setHisttWs0.03370934829032541","",20, xAxis1954);
   setHisttWs0.03370934829032541->SetBinContent(1,24.23662);
   setHisttWs0.03370934829032541->SetBinContent(2,26.17441);
   setHisttWs0.03370934829032541->SetBinContent(3,31.89831);
   setHisttWs0.03370934829032541->SetBinContent(4,30.63965);
   setHisttWs0.03370934829032541->SetBinContent(5,25.85162);
   setHisttWs0.03370934829032541->SetBinContent(6,30.77558);
   setHisttWs0.03370934829032541->SetBinContent(7,25.52924);
   setHisttWs0.03370934829032541->SetBinContent(8,22.61395);
   setHisttWs0.03370934829032541->SetBinContent(9,22.62976);
   setHisttWs0.03370934829032541->SetBinContent(10,29.03386);
   setHisttWs0.03370934829032541->SetBinContent(11,24.5475);
   setHisttWs0.03370934829032541->SetBinContent(12,25.38918);
   setHisttWs0.03370934829032541->SetBinContent(13,23.37325);
   setHisttWs0.03370934829032541->SetBinContent(14,26.29475);
   setHisttWs0.03370934829032541->SetBinContent(15,20.88251);
   setHisttWs0.03370934829032541->SetBinContent(16,27.79273);
   setHisttWs0.03370934829032541->SetBinContent(17,23.13346);
   setHisttWs0.03370934829032541->SetBinContent(18,15.47522);
   setHisttWs0.03370934829032541->SetBinContent(19,16.13845);
   setHisttWs0.03370934829032541->SetBinContent(20,5.687551);
   setHisttWs0.03370934829032541->SetBinError(1,3.261183);
   setHisttWs0.03370934829032541->SetBinError(2,3.375335);
   setHisttWs0.03370934829032541->SetBinError(3,3.704687);
   setHisttWs0.03370934829032541->SetBinError(4,3.69796);
   setHisttWs0.03370934829032541->SetBinError(5,3.262429);
   setHisttWs0.03370934829032541->SetBinError(6,3.584157);
   setHisttWs0.03370934829032541->SetBinError(7,3.377986);
   setHisttWs0.03370934829032541->SetBinError(8,3.267529);
   setHisttWs0.03370934829032541->SetBinError(9,3.070867);
   setHisttWs0.03370934829032541->SetBinError(10,3.533569);
   setHisttWs0.03370934829032541->SetBinError(11,3.153518);
   setHisttWs0.03370934829032541->SetBinError(12,3.250304);
   setHisttWs0.03370934829032541->SetBinError(13,3.153257);
   setHisttWs0.03370934829032541->SetBinError(14,3.193439);
   setHisttWs0.03370934829032541->SetBinError(15,3.019238);
   setHisttWs0.03370934829032541->SetBinError(16,3.491574);
   setHisttWs0.03370934829032541->SetBinError(17,3.135687);
   setHisttWs0.03370934829032541->SetBinError(18,2.614799);
   setHisttWs0.03370934829032541->SetBinError(19,2.625228);
   setHisttWs0.03370934829032541->SetBinError(20,1.541079);
   setHisttWs0.03370934829032541->SetEntries(3351);
   setHisttWs0.03370934829032541->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.03370934829032541->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.03370934829032541->SetLineColor(ci);
   setHisttWs0.03370934829032541->SetLineWidth(2);
   setHisttWs0.03370934829032541->SetMarkerStyle(20);
   setHisttWs0.03370934829032541->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.03370934829032541->GetXaxis()->SetLabelFont(43);
   setHisttWs0.03370934829032541->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.03370934829032541->GetXaxis()->SetLabelSize(32);
   setHisttWs0.03370934829032541->GetXaxis()->SetTitleSize(35);
   setHisttWs0.03370934829032541->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.03370934829032541->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.03370934829032541->GetXaxis()->SetTitleFont(43);
   setHisttWs0.03370934829032541->GetYaxis()->SetNdivisions(506);
   setHisttWs0.03370934829032541->GetYaxis()->SetLabelFont(43);
   setHisttWs0.03370934829032541->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.03370934829032541->GetYaxis()->SetLabelSize(32);
   setHisttWs0.03370934829032541->GetYaxis()->SetTitleSize(35);
   setHisttWs0.03370934829032541->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.03370934829032541->GetYaxis()->SetTitleFont(43);
   setHisttWs0.03370934829032541->GetZaxis()->SetLabelFont(43);
   setHisttWs0.03370934829032541->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.03370934829032541->GetZaxis()->SetLabelSize(32);
   setHisttWs0.03370934829032541->GetZaxis()->SetTitleSize(35);
   setHisttWs0.03370934829032541->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.03370934829032541->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.0337093482903,"HIST F");
   Double_t xAxis1955[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistTTJets0.5784344826192542 = new TH1F("setHistTTJets0.5784344826192542","",20, xAxis1955);
   setHistTTJets0.5784344826192542->SetBinContent(1,814.0163);
   setHistTTJets0.5784344826192542->SetBinContent(2,819.0032);
   setHistTTJets0.5784344826192542->SetBinContent(3,824.1637);
   setHistTTJets0.5784344826192542->SetBinContent(4,825.7379);
   setHistTTJets0.5784344826192542->SetBinContent(5,806.3262);
   setHistTTJets0.5784344826192542->SetBinContent(6,822.9811);
   setHistTTJets0.5784344826192542->SetBinContent(7,824.7495);
   setHistTTJets0.5784344826192542->SetBinContent(8,821.6339);
   setHistTTJets0.5784344826192542->SetBinContent(9,824.4757);
   setHistTTJets0.5784344826192542->SetBinContent(10,831.8329);
   setHistTTJets0.5784344826192542->SetBinContent(11,810.2668);
   setHistTTJets0.5784344826192542->SetBinContent(12,815.0362);
   setHistTTJets0.5784344826192542->SetBinContent(13,804.6645);
   setHistTTJets0.5784344826192542->SetBinContent(14,785.7484);
   setHistTTJets0.5784344826192542->SetBinContent(15,751.3405);
   setHistTTJets0.5784344826192542->SetBinContent(16,727.6401);
   setHistTTJets0.5784344826192542->SetBinContent(17,679.9975);
   setHistTTJets0.5784344826192542->SetBinContent(18,627.7761);
   setHistTTJets0.5784344826192542->SetBinContent(19,498.1643);
   setHistTTJets0.5784344826192542->SetBinContent(20,157.0853);
   setHistTTJets0.5784344826192542->SetBinError(1,8.391624);
   setHistTTJets0.5784344826192542->SetBinError(2,8.428819);
   setHistTTJets0.5784344826192542->SetBinError(3,8.468403);
   setHistTTJets0.5784344826192542->SetBinError(4,8.511662);
   setHistTTJets0.5784344826192542->SetBinError(5,8.375714);
   setHistTTJets0.5784344826192542->SetBinError(6,8.468024);
   setHistTTJets0.5784344826192542->SetBinError(7,8.480957);
   setHistTTJets0.5784344826192542->SetBinError(8,8.479554);
   setHistTTJets0.5784344826192542->SetBinError(9,8.481358);
   setHistTTJets0.5784344826192542->SetBinError(10,8.499007);
   setHistTTJets0.5784344826192542->SetBinError(11,8.416423);
   setHistTTJets0.5784344826192542->SetBinError(12,8.415333);
   setHistTTJets0.5784344826192542->SetBinError(13,8.366523);
   setHistTTJets0.5784344826192542->SetBinError(14,8.257074);
   setHistTTJets0.5784344826192542->SetBinError(15,8.061152);
   setHistTTJets0.5784344826192542->SetBinError(16,7.957279);
   setHistTTJets0.5784344826192542->SetBinError(17,7.675453);
   setHistTTJets0.5784344826192542->SetBinError(18,7.400918);
   setHistTTJets0.5784344826192542->SetBinError(19,6.608413);
   setHistTTJets0.5784344826192542->SetBinError(20,3.700841);
   setHistTTJets0.5784344826192542->SetEntries(249437);
   setHistTTJets0.5784344826192542->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.5784344826192542->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.5784344826192542->SetLineColor(ci);
   setHistTTJets0.5784344826192542->SetLineWidth(2);
   setHistTTJets0.5784344826192542->SetMarkerStyle(20);
   setHistTTJets0.5784344826192542->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.5784344826192542->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.5784344826192542->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.5784344826192542->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.5784344826192542->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.5784344826192542->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.5784344826192542->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.5784344826192542->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.5784344826192542->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.5784344826192542->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.5784344826192542->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.5784344826192542->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.5784344826192542->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.5784344826192542->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.5784344826192542->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.5784344826192542->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.5784344826192542->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.5784344826192542->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.5784344826192542->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.5784344826192542->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.5784344826192542->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.578434482619,"HIST F");
   Double_t xAxis1956[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGHF0.5193267276812543 = new TH1F("setHistWJetsMGHF0.5193267276812543","",20, xAxis1956);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(1,23.71954);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(2,21.86485);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(3,15.88758);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(4,16.84122);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(5,14.92049);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(6,17.44029);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(7,25.80348);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(8,22.34805);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(9,23.60344);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(10,27.38256);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(11,18.36486);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(12,29.09418);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(13,19.83204);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(14,21.28451);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(15,24.19054);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(16,23.46568);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(17,34.8215);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(18,30.16907);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(19,31.0785);
   setHistWJetsMGHF0.5193267276812543->SetBinContent(20,14.35643);
   setHistWJetsMGHF0.5193267276812543->SetBinError(1,4.211926);
   setHistWJetsMGHF0.5193267276812543->SetBinError(2,4.169585);
   setHistWJetsMGHF0.5193267276812543->SetBinError(3,3.164325);
   setHistWJetsMGHF0.5193267276812543->SetBinError(4,3.578628);
   setHistWJetsMGHF0.5193267276812543->SetBinError(5,3.071204);
   setHistWJetsMGHF0.5193267276812543->SetBinError(6,3.739954);
   setHistWJetsMGHF0.5193267276812543->SetBinError(7,4.418982);
   setHistWJetsMGHF0.5193267276812543->SetBinError(8,4.418538);
   setHistWJetsMGHF0.5193267276812543->SetBinError(9,4.414888);
   setHistWJetsMGHF0.5193267276812543->SetBinError(10,4.590797);
   setHistWJetsMGHF0.5193267276812543->SetBinError(11,3.831516);
   setHistWJetsMGHF0.5193267276812543->SetBinError(12,4.691696);
   setHistWJetsMGHF0.5193267276812543->SetBinError(13,4.155843);
   setHistWJetsMGHF0.5193267276812543->SetBinError(14,3.899798);
   setHistWJetsMGHF0.5193267276812543->SetBinError(15,4.363743);
   setHistWJetsMGHF0.5193267276812543->SetBinError(16,4.1137);
   setHistWJetsMGHF0.5193267276812543->SetBinError(17,5.096032);
   setHistWJetsMGHF0.5193267276812543->SetBinError(18,4.658603);
   setHistWJetsMGHF0.5193267276812543->SetBinError(19,4.800333);
   setHistWJetsMGHF0.5193267276812543->SetBinError(20,3.239207);
   setHistWJetsMGHF0.5193267276812543->SetEntries(798);
   setHistWJetsMGHF0.5193267276812543->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsMGHF0.5193267276812543->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsMGHF0.5193267276812543->SetLineColor(ci);
   setHistWJetsMGHF0.5193267276812543->SetLineWidth(2);
   setHistWJetsMGHF0.5193267276812543->SetMarkerStyle(20);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.5193267276812543->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.5193267276812543->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.5193267276812543->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.5193267276812543->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.5193267276812543->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.5193267276812543->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.5193267276812543->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.5193267276812543->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.5193267276812543->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.5193267276812543->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.5193267276812543->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.5193267276812543->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.5193267276812543->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.5193267276812543->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.519326727681,"HIST F");
   Double_t xAxis1957[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGLF0.7951890200742544 = new TH1F("setHistWJetsMGLF0.7951890200742544","",20, xAxis1957);
   setHistWJetsMGLF0.7951890200742544->SetBinContent(2,0.2029773);
   setHistWJetsMGLF0.7951890200742544->SetBinContent(8,1.272569);
   setHistWJetsMGLF0.7951890200742544->SetBinContent(12,0.1856888);
   setHistWJetsMGLF0.7951890200742544->SetBinContent(18,1.048948);
   setHistWJetsMGLF0.7951890200742544->SetBinError(2,0.2029772);
   setHistWJetsMGLF0.7951890200742544->SetBinError(8,1.272569);
   setHistWJetsMGLF0.7951890200742544->SetBinError(12,0.1856888);
   setHistWJetsMGLF0.7951890200742544->SetBinError(18,1.048948);
   setHistWJetsMGLF0.7951890200742544->SetEntries(4);
   setHistWJetsMGLF0.7951890200742544->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsMGLF0.7951890200742544->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsMGLF0.7951890200742544->SetLineColor(ci);
   setHistWJetsMGLF0.7951890200742544->SetLineWidth(2);
   setHistWJetsMGLF0.7951890200742544->SetMarkerStyle(20);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.7951890200742544->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.7951890200742544->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.7951890200742544->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.7951890200742544->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.7951890200742544->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.7951890200742544->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.7951890200742544->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.7951890200742544->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.7951890200742544->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.7951890200742544->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.7951890200742544->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.7951890200742544->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.7951890200742544->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.7951890200742544->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.795189020074,"HIST F");
   Double_t xAxis1958[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistDYVV0.5740708689622545 = new TH1F("setHistDYVV0.5740708689622545","",20, xAxis1958);
   setHistDYVV0.5740708689622545->SetBinContent(1,4.603554);
   setHistDYVV0.5740708689622545->SetBinContent(2,9.932739);
   setHistDYVV0.5740708689622545->SetBinContent(3,10.58465);
   setHistDYVV0.5740708689622545->SetBinContent(4,3.36537);
   setHistDYVV0.5740708689622545->SetBinContent(5,5.779731);
   setHistDYVV0.5740708689622545->SetBinContent(6,6.840467);
   setHistDYVV0.5740708689622545->SetBinContent(7,7.239033);
   setHistDYVV0.5740708689622545->SetBinContent(8,3.712994);
   setHistDYVV0.5740708689622545->SetBinContent(9,4.069021);
   setHistDYVV0.5740708689622545->SetBinContent(10,4.775056);
   setHistDYVV0.5740708689622545->SetBinContent(11,1.666029);
   setHistDYVV0.5740708689622545->SetBinContent(12,9.442406);
   setHistDYVV0.5740708689622545->SetBinContent(13,7.723366);
   setHistDYVV0.5740708689622545->SetBinContent(14,7.83377);
   setHistDYVV0.5740708689622545->SetBinContent(15,1.863709);
   setHistDYVV0.5740708689622545->SetBinContent(16,4.850601);
   setHistDYVV0.5740708689622545->SetBinContent(17,6.789501);
   setHistDYVV0.5740708689622545->SetBinContent(18,8.163886);
   setHistDYVV0.5740708689622545->SetBinContent(19,4.704268);
   setHistDYVV0.5740708689622545->SetBinContent(20,0.3405941);
   setHistDYVV0.5740708689622545->SetBinError(1,3.092057);
   setHistDYVV0.5740708689622545->SetBinError(2,5.065439);
   setHistDYVV0.5740708689622545->SetBinError(3,5.149247);
   setHistDYVV0.5740708689622545->SetBinError(4,1.9678);
   setHistDYVV0.5740708689622545->SetBinError(5,3.13891);
   setHistDYVV0.5740708689622545->SetBinError(6,5.251596);
   setHistDYVV0.5740708689622545->SetBinError(7,4.031312);
   setHistDYVV0.5740708689622545->SetBinError(8,2.817655);
   setHistDYVV0.5740708689622545->SetBinError(9,2.506313);
   setHistDYVV0.5740708689622545->SetBinError(10,3.027856);
   setHistDYVV0.5740708689622545->SetBinError(11,0.3988012);
   setHistDYVV0.5740708689622545->SetBinError(12,5.282408);
   setHistDYVV0.5740708689622545->SetBinError(13,4.250875);
   setHistDYVV0.5740708689622545->SetBinError(14,4.158268);
   setHistDYVV0.5740708689622545->SetBinError(15,0.440809);
   setHistDYVV0.5740708689622545->SetBinError(16,3.07582);
   setHistDYVV0.5740708689622545->SetBinError(17,4.237476);
   setHistDYVV0.5740708689622545->SetBinError(18,4.440212);
   setHistDYVV0.5740708689622545->SetBinError(19,3.074023);
   setHistDYVV0.5740708689622545->SetBinError(20,0.1808156);
   setHistDYVV0.5740708689622545->SetEntries(444);
   setHistDYVV0.5740708689622545->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDYVV0.5740708689622545->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDYVV0.5740708689622545->SetLineColor(ci);
   setHistDYVV0.5740708689622545->SetLineWidth(2);
   setHistDYVV0.5740708689622545->SetMarkerStyle(20);
   setHistDYVV0.5740708689622545->GetXaxis()->SetNdivisions(1005);
   setHistDYVV0.5740708689622545->GetXaxis()->SetLabelFont(43);
   setHistDYVV0.5740708689622545->GetXaxis()->SetLabelOffset(0.0105);
   setHistDYVV0.5740708689622545->GetXaxis()->SetLabelSize(32);
   setHistDYVV0.5740708689622545->GetXaxis()->SetTitleSize(35);
   setHistDYVV0.5740708689622545->GetXaxis()->SetTickLength(0.05);
   setHistDYVV0.5740708689622545->GetXaxis()->SetTitleOffset(1.135);
   setHistDYVV0.5740708689622545->GetXaxis()->SetTitleFont(43);
   setHistDYVV0.5740708689622545->GetYaxis()->SetNdivisions(506);
   setHistDYVV0.5740708689622545->GetYaxis()->SetLabelFont(43);
   setHistDYVV0.5740708689622545->GetYaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.5740708689622545->GetYaxis()->SetLabelSize(32);
   setHistDYVV0.5740708689622545->GetYaxis()->SetTitleSize(35);
   setHistDYVV0.5740708689622545->GetYaxis()->SetTitleOffset(1.32);
   setHistDYVV0.5740708689622545->GetYaxis()->SetTitleFont(43);
   setHistDYVV0.5740708689622545->GetZaxis()->SetLabelFont(43);
   setHistDYVV0.5740708689622545->GetZaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.5740708689622545->GetZaxis()->SetLabelSize(32);
   setHistDYVV0.5740708689622545->GetZaxis()->SetTitleSize(35);
   setHistDYVV0.5740708689622545->GetZaxis()->SetTitleOffset(1.32);
   setHistDYVV0.5740708689622545->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDYVV0.574070868962,"HIST F");
   Double_t xAxis1959[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistQCD_DD0.7518871010792546 = new TH1F("setHistQCD_DD0.7518871010792546","",20, xAxis1959);
   setHistQCD_DD0.7518871010792546->SetBinContent(1,1.945837);
   setHistQCD_DD0.7518871010792546->SetBinContent(2,2.826244);
   setHistQCD_DD0.7518871010792546->SetBinContent(3,-7.492262);
   setHistQCD_DD0.7518871010792546->SetBinContent(4,9.629053);
   setHistQCD_DD0.7518871010792546->SetBinContent(5,-7.55533);
   setHistQCD_DD0.7518871010792546->SetBinContent(6,6.910938);
   setHistQCD_DD0.7518871010792546->SetBinContent(7,11.73596);
   setHistQCD_DD0.7518871010792546->SetBinContent(8,5.124996);
   setHistQCD_DD0.7518871010792546->SetBinContent(9,-6.990788);
   setHistQCD_DD0.7518871010792546->SetBinContent(10,20.83699);
   setHistQCD_DD0.7518871010792546->SetBinContent(11,1.917147);
   setHistQCD_DD0.7518871010792546->SetBinContent(12,10.24077);
   setHistQCD_DD0.7518871010792546->SetBinContent(13,-2.125333);
   setHistQCD_DD0.7518871010792546->SetBinContent(14,0.9586017);
   setHistQCD_DD0.7518871010792546->SetBinContent(15,6.726412);
   setHistQCD_DD0.7518871010792546->SetBinContent(16,2.693745);
   setHistQCD_DD0.7518871010792546->SetBinContent(17,25.1066);
   setHistQCD_DD0.7518871010792546->SetBinContent(18,0.4608882);
   setHistQCD_DD0.7518871010792546->SetBinContent(19,5.245767);
   setHistQCD_DD0.7518871010792546->SetBinContent(20,10.92903);
   setHistQCD_DD0.7518871010792546->SetBinError(1,6.478632);
   setHistQCD_DD0.7518871010792546->SetBinError(2,6.423019);
   setHistQCD_DD0.7518871010792546->SetBinError(3,5.239752);
   setHistQCD_DD0.7518871010792546->SetBinError(4,6.78089);
   setHistQCD_DD0.7518871010792546->SetBinError(5,5.630805);
   setHistQCD_DD0.7518871010792546->SetBinError(6,6.798637);
   setHistQCD_DD0.7518871010792546->SetBinError(7,7.597697);
   setHistQCD_DD0.7518871010792546->SetBinError(8,6.948151);
   setHistQCD_DD0.7518871010792546->SetBinError(9,5.75312);
   setHistQCD_DD0.7518871010792546->SetBinError(10,8.355231);
   setHistQCD_DD0.7518871010792546->SetBinError(11,7.156417);
   setHistQCD_DD0.7518871010792546->SetBinError(12,8.365768);
   setHistQCD_DD0.7518871010792546->SetBinError(13,6.480194);
   setHistQCD_DD0.7518871010792546->SetBinError(14,7.519862);
   setHistQCD_DD0.7518871010792546->SetBinError(15,7.872688);
   setHistQCD_DD0.7518871010792546->SetBinError(16,6.978295);
   setHistQCD_DD0.7518871010792546->SetBinError(17,8.842433);
   setHistQCD_DD0.7518871010792546->SetBinError(18,7.160175);
   setHistQCD_DD0.7518871010792546->SetBinError(19,7.287157);
   setHistQCD_DD0.7518871010792546->SetBinError(20,7.296141);
   setHistQCD_DD0.7518871010792546->SetEntries(19197);
   setHistQCD_DD0.7518871010792546->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.7518871010792546->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.7518871010792546->SetLineColor(ci);
   setHistQCD_DD0.7518871010792546->SetLineWidth(2);
   setHistQCD_DD0.7518871010792546->SetMarkerStyle(20);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.7518871010792546->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.7518871010792546->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.7518871010792546->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.7518871010792546->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.7518871010792546->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.7518871010792546->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.7518871010792546->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.7518871010792546->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.7518871010792546->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.7518871010792546->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.7518871010792546->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.7518871010792546->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.7518871010792546->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.7518871010792546->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.751887101079,"HIST F");
   ->Draw("same");
   Double_t xAxis1960[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.7577094287582547 = new TH1F("setHistdata0.7577094287582547","",20, xAxis1960);
   setHistdata0.7577094287582547->SetBinContent(1,890);
   setHistdata0.7577094287582547->SetBinContent(2,919);
   setHistdata0.7577094287582547->SetBinContent(3,907);
   setHistdata0.7577094287582547->SetBinContent(4,877);
   setHistdata0.7577094287582547->SetBinContent(5,930);
   setHistdata0.7577094287582547->SetBinContent(6,918);
   setHistdata0.7577094287582547->SetBinContent(7,939);
   setHistdata0.7577094287582547->SetBinContent(8,938);
   setHistdata0.7577094287582547->SetBinContent(9,900);
   setHistdata0.7577094287582547->SetBinContent(10,891);
   setHistdata0.7577094287582547->SetBinContent(11,969);
   setHistdata0.7577094287582547->SetBinContent(12,891);
   setHistdata0.7577094287582547->SetBinContent(13,895);
   setHistdata0.7577094287582547->SetBinContent(14,904);
   setHistdata0.7577094287582547->SetBinContent(15,891);
   setHistdata0.7577094287582547->SetBinContent(16,896);
   setHistdata0.7577094287582547->SetBinContent(17,862);
   setHistdata0.7577094287582547->SetBinContent(18,755);
   setHistdata0.7577094287582547->SetBinContent(19,625);
   setHistdata0.7577094287582547->SetBinContent(20,226);
   setHistdata0.7577094287582547->SetBinError(1,29.83287);
   setHistdata0.7577094287582547->SetBinError(2,30.31501);
   setHistdata0.7577094287582547->SetBinError(3,30.11644);
   setHistdata0.7577094287582547->SetBinError(4,29.61419);
   setHistdata0.7577094287582547->SetBinError(5,30.4959);
   setHistdata0.7577094287582547->SetBinError(6,30.29851);
   setHistdata0.7577094287582547->SetBinError(7,30.64311);
   setHistdata0.7577094287582547->SetBinError(8,30.62679);
   setHistdata0.7577094287582547->SetBinError(9,30);
   setHistdata0.7577094287582547->SetBinError(10,29.84962);
   setHistdata0.7577094287582547->SetBinError(11,31.12876);
   setHistdata0.7577094287582547->SetBinError(12,29.84962);
   setHistdata0.7577094287582547->SetBinError(13,29.91655);
   setHistdata0.7577094287582547->SetBinError(14,30.06659);
   setHistdata0.7577094287582547->SetBinError(15,29.84962);
   setHistdata0.7577094287582547->SetBinError(16,29.93326);
   setHistdata0.7577094287582547->SetBinError(17,29.35984);
   setHistdata0.7577094287582547->SetBinError(18,27.47726);
   setHistdata0.7577094287582547->SetBinError(19,25);
   setHistdata0.7577094287582547->SetBinError(20,15.0333);
   setHistdata0.7577094287582547->SetEntries(17023);
   setHistdata0.7577094287582547->SetFillStyle(0);
   setHistdata0.7577094287582547->SetMarkerStyle(20);
   setHistdata0.7577094287582547->SetMarkerSize(1.15);
   setHistdata0.7577094287582547->GetXaxis()->SetNdivisions(1005);
   setHistdata0.7577094287582547->GetXaxis()->SetLabelFont(43);
   setHistdata0.7577094287582547->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.7577094287582547->GetXaxis()->SetLabelSize(32);
   setHistdata0.7577094287582547->GetXaxis()->SetTitleSize(35);
   setHistdata0.7577094287582547->GetXaxis()->SetTickLength(0.05);
   setHistdata0.7577094287582547->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.7577094287582547->GetXaxis()->SetTitleFont(43);
   setHistdata0.7577094287582547->GetYaxis()->SetNdivisions(506);
   setHistdata0.7577094287582547->GetYaxis()->SetLabelFont(43);
   setHistdata0.7577094287582547->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.7577094287582547->GetYaxis()->SetLabelSize(32);
   setHistdata0.7577094287582547->GetYaxis()->SetTitleSize(35);
   setHistdata0.7577094287582547->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.7577094287582547->GetYaxis()->SetTitleFont(43);
   setHistdata0.7577094287582547->GetZaxis()->SetLabelFont(43);
   setHistdata0.7577094287582547->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.7577094287582547->GetZaxis()->SetLabelSize(32);
   setHistdata0.7577094287582547->GetZaxis()->SetTitleSize(35);
   setHistdata0.7577094287582547->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.7577094287582547->GetZaxis()->SetTitleFont(43);
   setHistdata0.7577094287582547->Draw("PESame");
   
   TH2F *axis0.823345347495_copy2548 = new TH2F("axis0.823345347495_copy2548","",50,-1,1,50,0,1356.6);
   axis0.823345347495_copy2548->SetDirectory(0);
   axis0.823345347495_copy2548->SetMarkerStyle(20);
   axis0.823345347495_copy2548->GetXaxis()->SetNdivisions(1005);
   axis0.823345347495_copy2548->GetXaxis()->SetLabelFont(43);
   axis0.823345347495_copy2548->GetXaxis()->SetLabelOffset(0.0105);
   axis0.823345347495_copy2548->GetXaxis()->SetLabelSize(0);
   axis0.823345347495_copy2548->GetXaxis()->SetTitleSize(35);
   axis0.823345347495_copy2548->GetXaxis()->SetTickLength(0.025);
   axis0.823345347495_copy2548->GetXaxis()->SetTitleOffset(1.135);
   axis0.823345347495_copy2548->GetXaxis()->SetTitleFont(43);
   axis0.823345347495_copy2548->GetYaxis()->SetTitle("Events / bin");
   axis0.823345347495_copy2548->GetYaxis()->SetNdivisions(506);
   axis0.823345347495_copy2548->GetYaxis()->SetLabelFont(43);
   axis0.823345347495_copy2548->GetYaxis()->SetLabelOffset(0.0087);
   axis0.823345347495_copy2548->GetYaxis()->SetLabelSize(32);
   axis0.823345347495_copy2548->GetYaxis()->SetTitleSize(35);
   axis0.823345347495_copy2548->GetYaxis()->SetTickLength(0.02631579);
   axis0.823345347495_copy2548->GetYaxis()->SetTitleOffset(1.32);
   axis0.823345347495_copy2548->GetYaxis()->SetTitleFont(43);
   axis0.823345347495_copy2548->GetZaxis()->SetLabelFont(43);
   axis0.823345347495_copy2548->GetZaxis()->SetLabelOffset(0.0087);
   axis0.823345347495_copy2548->GetZaxis()->SetLabelSize(32);
   axis0.823345347495_copy2548->GetZaxis()->SetTitleSize(35);
   axis0.823345347495_copy2548->GetZaxis()->SetTitleOffset(1.32);
   axis0.823345347495_copy2548->GetZaxis()->SetTitleFont(43);
   axis0.823345347495_copy2548->Draw("sameaxis");
   
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.757709428758","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.751887101079","Multijet","F");

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
   entry=leg->AddEntry("setHistDYVV0.574070868962","Z/#gamma/VV","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.795189020074","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.519326727681","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.578434482619","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.0337093482903","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.634520877312","#it{t}-channel","F");

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
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409_2->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409->SetSelected(cvmuon_3j2t_cosTheta_lj_qcdbdt0.765696195409);
}
