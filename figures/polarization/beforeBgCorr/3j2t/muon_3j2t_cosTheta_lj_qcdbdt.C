void plots_now2/3j2t/muon_3j2t_cosTheta_lj_qcdbdt()
{
//=========Macro generated from canvas: cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739/
//=========  (Mon Aug  7 18:20:20 2017) by ROOT version6.02/05
   TCanvas *cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739 = new TCanvas("cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetHighLightColor(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->Range(0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetLeftMargin(0.1150442);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetRightMargin(0.227083);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetTopMargin(0.04002582);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetBottomMargin(0.08064517);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetFrameLineWidth(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->Range(-1.466667,0.06666676,1.866667,3.87619);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetTopMargin(0.65);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetBottomMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.1527436800532640 = new TH2F("axisRes0.1527436800532640","",50,-1,1,50,0.6,1.4);
   axisRes0.1527436800532640->SetMarkerStyle(20);
   axisRes0.1527436800532640->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.1527436800532640->GetXaxis()->SetNdivisions(1005);
   axisRes0.1527436800532640->GetXaxis()->SetLabelFont(43);
   axisRes0.1527436800532640->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.1527436800532640->GetXaxis()->SetLabelSize(32);
   axisRes0.1527436800532640->GetXaxis()->SetTitleSize(35);
   axisRes0.1527436800532640->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.1527436800532640->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.1527436800532640->GetXaxis()->SetTitleFont(43);
   axisRes0.1527436800532640->GetYaxis()->SetTitle("Data/MC");
   axisRes0.1527436800532640->GetYaxis()->SetNdivisions(406);
   axisRes0.1527436800532640->GetYaxis()->SetLabelFont(43);
   axisRes0.1527436800532640->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.1527436800532640->GetYaxis()->SetLabelSize(32);
   axisRes0.1527436800532640->GetYaxis()->SetTitleSize(35);
   axisRes0.1527436800532640->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.1527436800532640->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.1527436800532640->GetYaxis()->SetTitleFont(43);
   axisRes0.1527436800532640->GetZaxis()->SetLabelFont(43);
   axisRes0.1527436800532640->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.1527436800532640->GetZaxis()->SetLabelSize(32);
   axisRes0.1527436800532640->GetZaxis()->SetTitleSize(35);
   axisRes0.1527436800532640->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.1527436800532640->GetZaxis()->SetTitleFont(43);
   axisRes0.1527436800532640->Draw("AXIS");
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
   Double_t xAxis2031[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.8134181945860.007372404106992641 = new TH1F("setHistdata0.8134181945860.007372404106992641","",20, xAxis2031);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(1,0.9970261);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(2,1.013229);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(3,1.008007);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(4,0.9569709);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(5,1.061056);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(6,0.9996147);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(7,1.007807);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(8,1.022159);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(9,0.9845744);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(10,0.9263075);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(11,1.059772);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(12,0.9344844);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(13,0.975458);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(14,0.9921344);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(15,1.019054);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(16,1.038145);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(17,1.014461);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(18,0.9961226);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(19,1.024441);
   setHistdata0.8134181945860.007372404106992641->SetBinContent(20,1.107264);
   setHistdata0.8134181945860.007372404106992641->SetBinError(1,0.03342039);
   setHistdata0.8134181945860.007372404106992641->SetBinError(2,0.03342334);
   setHistdata0.8134181945860.007372404106992641->SetBinError(3,0.03347033);
   setHistdata0.8134181945860.007372404106992641->SetBinError(4,0.03231461);
   setHistdata0.8134181945860.007372404106992641->SetBinError(5,0.03479341);
   setHistdata0.8134181945860.007372404106992641->SetBinError(6,0.0329922);
   setHistdata0.8134181945860.007372404106992641->SetBinError(7,0.03288853);
   setHistdata0.8134181945860.007372404106992641->SetBinError(8,0.03337466);
   setHistdata0.8134181945860.007372404106992641->SetBinError(9,0.03281915);
   setHistdata0.8134181945860.007372404106992641->SetBinError(10,0.03103247);
   setHistdata0.8134181945860.007372404106992641->SetBinError(11,0.0340448);
   setHistdata0.8134181945860.007372404106992641->SetBinError(12,0.03130641);
   setHistdata0.8134181945860.007372404106992641->SetBinError(13,0.03260596);
   setHistdata0.8134181945860.007372404106992641->SetBinError(14,0.0329979);
   setHistdata0.8134181945860.007372404106992641->SetBinError(15,0.03413959);
   setHistdata0.8134181945860.007372404106992641->SetBinError(16,0.03468199);
   setHistdata0.8134181945860.007372404106992641->SetBinError(17,0.03455268);
   setHistdata0.8134181945860.007372404106992641->SetBinError(18,0.03625261);
   setHistdata0.8134181945860.007372404106992641->SetBinError(19,0.04097763);
   setHistdata0.8134181945860.007372404106992641->SetBinError(20,0.07365408);
   setHistdata0.8134181945860.007372404106992641->SetEntries(17043);
   setHistdata0.8134181945860.007372404106992641->SetFillStyle(0);
   setHistdata0.8134181945860.007372404106992641->SetMarkerStyle(20);
   setHistdata0.8134181945860.007372404106992641->SetMarkerSize(1.15);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetNdivisions(1005);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetLabelFont(43);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetLabelSize(32);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetTitleSize(35);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetTickLength(0.05);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.8134181945860.007372404106992641->GetXaxis()->SetTitleFont(43);
   setHistdata0.8134181945860.007372404106992641->GetYaxis()->SetNdivisions(506);
   setHistdata0.8134181945860.007372404106992641->GetYaxis()->SetLabelFont(43);
   setHistdata0.8134181945860.007372404106992641->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.8134181945860.007372404106992641->GetYaxis()->SetLabelSize(32);
   setHistdata0.8134181945860.007372404106992641->GetYaxis()->SetTitleSize(35);
   setHistdata0.8134181945860.007372404106992641->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.8134181945860.007372404106992641->GetYaxis()->SetTitleFont(43);
   setHistdata0.8134181945860.007372404106992641->GetZaxis()->SetLabelFont(43);
   setHistdata0.8134181945860.007372404106992641->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.8134181945860.007372404106992641->GetZaxis()->SetLabelSize(32);
   setHistdata0.8134181945860.007372404106992641->GetZaxis()->SetTitleSize(35);
   setHistdata0.8134181945860.007372404106992641->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.8134181945860.007372404106992641->GetZaxis()->SetTitleFont(43);
   setHistdata0.8134181945860.007372404106992641->Draw("PESame");
   
   TF1 *axisLine0.208846601912204 = new TF1("axisLine0.208846601912","1",-1,1);
   axisLine0.208846601912204->SetFillColor(19);
   axisLine0.208846601912204->SetFillStyle(0);
   axisLine0.208846601912204->SetMarkerStyle(20);
   axisLine0.208846601912204->SetLineWidth(1);
   axisLine0.208846601912204->GetXaxis()->SetNdivisions(1005);
   axisLine0.208846601912204->GetXaxis()->SetLabelFont(43);
   axisLine0.208846601912204->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.208846601912204->GetXaxis()->SetLabelSize(32);
   axisLine0.208846601912204->GetXaxis()->SetTitleSize(35);
   axisLine0.208846601912204->GetXaxis()->SetTickLength(0.05);
   axisLine0.208846601912204->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.208846601912204->GetXaxis()->SetTitleFont(43);
   axisLine0.208846601912204->GetYaxis()->SetNdivisions(506);
   axisLine0.208846601912204->GetYaxis()->SetLabelFont(43);
   axisLine0.208846601912204->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.208846601912204->GetYaxis()->SetLabelSize(32);
   axisLine0.208846601912204->GetYaxis()->SetTitleSize(35);
   axisLine0.208846601912204->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.208846601912204->GetYaxis()->SetTitleFont(43);
   axisLine0.208846601912204->Draw("SameL");
   
   TH2F *axisRes0.152743680053_copy2642 = new TH2F("axisRes0.152743680053_copy2642","",50,-1,1,50,0.6,1.4);
   axisRes0.152743680053_copy2642->SetDirectory(0);
   axisRes0.152743680053_copy2642->SetMarkerStyle(20);
   axisRes0.152743680053_copy2642->GetXaxis()->SetTitle("cos#kern[0.1]{#theta}#scale[0.7]{#lower[0.28]{#mu}}#kern[-1.1]{*}");
   axisRes0.152743680053_copy2642->GetXaxis()->SetNdivisions(1005);
   axisRes0.152743680053_copy2642->GetXaxis()->SetLabelFont(43);
   axisRes0.152743680053_copy2642->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.152743680053_copy2642->GetXaxis()->SetLabelSize(32);
   axisRes0.152743680053_copy2642->GetXaxis()->SetTitleSize(35);
   axisRes0.152743680053_copy2642->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.152743680053_copy2642->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.152743680053_copy2642->GetXaxis()->SetTitleFont(43);
   axisRes0.152743680053_copy2642->GetYaxis()->SetTitle("Data/MC");
   axisRes0.152743680053_copy2642->GetYaxis()->SetNdivisions(406);
   axisRes0.152743680053_copy2642->GetYaxis()->SetLabelFont(43);
   axisRes0.152743680053_copy2642->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.152743680053_copy2642->GetYaxis()->SetLabelSize(32);
   axisRes0.152743680053_copy2642->GetYaxis()->SetTitleSize(35);
   axisRes0.152743680053_copy2642->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.152743680053_copy2642->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.152743680053_copy2642->GetYaxis()->SetTitleFont(43);
   axisRes0.152743680053_copy2642->GetZaxis()->SetLabelFont(43);
   axisRes0.152743680053_copy2642->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.152743680053_copy2642->GetZaxis()->SetLabelSize(32);
   axisRes0.152743680053_copy2642->GetZaxis()->SetTitleSize(35);
   axisRes0.152743680053_copy2642->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.152743680053_copy2642->GetZaxis()->SetTitleFont(43);
   axisRes0.152743680053_copy2642->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_1->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->cd();
  
// ------------>Primitives in pad: cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2
   TPad *cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2 = new TPad("cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2", "",0,0,1,1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->Draw();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->Range(-1.466667,-833,1.866667,1547);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetFillColor(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetFillStyle(4000);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetBorderSize(2);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetTickx(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetTicky(1);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetLeftMargin(0.14);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetRightMargin(0.26);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetTopMargin(0.08);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetBottomMargin(0.35);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetFrameBorderMode(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetFrameFillStyle(0);
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->SetFrameBorderMode(0);
   
   TH2F *axis0.8088387850622643 = new TH2F("axis0.8088387850622643","",50,-1,1,50,0,1356.6);
   axis0.8088387850622643->SetMarkerStyle(20);
   axis0.8088387850622643->GetXaxis()->SetNdivisions(1005);
   axis0.8088387850622643->GetXaxis()->SetLabelFont(43);
   axis0.8088387850622643->GetXaxis()->SetLabelOffset(0.0105);
   axis0.8088387850622643->GetXaxis()->SetLabelSize(0);
   axis0.8088387850622643->GetXaxis()->SetTitleSize(35);
   axis0.8088387850622643->GetXaxis()->SetTickLength(0.025);
   axis0.8088387850622643->GetXaxis()->SetTitleOffset(1.135);
   axis0.8088387850622643->GetXaxis()->SetTitleFont(43);
   axis0.8088387850622643->GetYaxis()->SetTitle("Events / bin");
   axis0.8088387850622643->GetYaxis()->SetNdivisions(506);
   axis0.8088387850622643->GetYaxis()->SetLabelFont(43);
   axis0.8088387850622643->GetYaxis()->SetLabelOffset(0.0087);
   axis0.8088387850622643->GetYaxis()->SetLabelSize(32);
   axis0.8088387850622643->GetYaxis()->SetTitleSize(35);
   axis0.8088387850622643->GetYaxis()->SetTickLength(0.02631579);
   axis0.8088387850622643->GetYaxis()->SetTitleOffset(1.32);
   axis0.8088387850622643->GetYaxis()->SetTitleFont(43);
   axis0.8088387850622643->GetZaxis()->SetLabelFont(43);
   axis0.8088387850622643->GetZaxis()->SetLabelOffset(0.0087);
   axis0.8088387850622643->GetZaxis()->SetLabelSize(32);
   axis0.8088387850622643->GetZaxis()->SetTitleSize(35);
   axis0.8088387850622643->GetZaxis()->SetTitleOffset(1.32);
   axis0.8088387850622643->GetZaxis()->SetTitleFont(43);
   axis0.8088387850622643->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis2032[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_203_stack_204 = new TH1F("_stack_203_stack_204","",20, xAxis2032);
   _stack_203_stack_204->SetMinimum(-13.18613);
   _stack_203_stack_204->SetMaximum(1009.978);
   _stack_203_stack_204->SetDirectory(0);
   _stack_203_stack_204->SetStats(0);
   _stack_203_stack_204->SetMarkerStyle(20);
   _stack_203_stack_204->GetXaxis()->SetNdivisions(1005);
   _stack_203_stack_204->GetXaxis()->SetLabelFont(43);
   _stack_203_stack_204->GetXaxis()->SetLabelOffset(0.0105);
   _stack_203_stack_204->GetXaxis()->SetLabelSize(32);
   _stack_203_stack_204->GetXaxis()->SetTitleSize(35);
   _stack_203_stack_204->GetXaxis()->SetTickLength(0.05);
   _stack_203_stack_204->GetXaxis()->SetTitleOffset(1.135);
   _stack_203_stack_204->GetXaxis()->SetTitleFont(43);
   _stack_203_stack_204->GetYaxis()->SetNdivisions(506);
   _stack_203_stack_204->GetYaxis()->SetLabelFont(43);
   _stack_203_stack_204->GetYaxis()->SetLabelOffset(0.0087);
   _stack_203_stack_204->GetYaxis()->SetLabelSize(32);
   _stack_203_stack_204->GetYaxis()->SetTitleSize(35);
   _stack_203_stack_204->GetYaxis()->SetTitleOffset(1.32);
   _stack_203_stack_204->GetYaxis()->SetTitleFont(43);
   _stack_203_stack_204->GetZaxis()->SetLabelFont(43);
   _stack_203_stack_204->GetZaxis()->SetLabelOffset(0.0087);
   _stack_203_stack_204->GetZaxis()->SetLabelSize(32);
   _stack_203_stack_204->GetZaxis()->SetTitleSize(35);
   _stack_203_stack_204->GetZaxis()->SetTitleOffset(1.32);
   _stack_203_stack_204->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_203_stack_204);
   
   Double_t xAxis2033[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttChannel0.1254064337312644 = new TH1F("setHisttChannel0.1254064337312644","",20, xAxis2033);
   setHisttChannel0.1254064337312644->SetBinContent(1,24.13267);
   setHisttChannel0.1254064337312644->SetBinContent(2,26.99692);
   setHisttChannel0.1254064337312644->SetBinContent(3,24.75311);
   setHisttChannel0.1254064337312644->SetBinContent(4,30.22013);
   setHisttChannel0.1254064337312644->SetBinContent(5,31.1625);
   setHisttChannel0.1254064337312644->SetBinContent(6,33.40547);
   setHisttChannel0.1254064337312644->SetBinContent(7,36.66896);
   setHisttChannel0.1254064337312644->SetBinContent(8,40.95938);
   setHisttChannel0.1254064337312644->SetBinContent(9,46.31335);
   setHisttChannel0.1254064337312644->SetBinContent(10,48.02217);
   setHisttChannel0.1254064337312644->SetBinContent(11,57.58482);
   setHisttChannel0.1254064337312644->SetBinContent(12,64.07852);
   setHisttChannel0.1254064337312644->SetBinContent(13,64.04989);
   setHisttChannel0.1254064337312644->SetBinContent(14,69.04692);
   setHisttChannel0.1254064337312644->SetBinContent(15,69.3368);
   setHisttChannel0.1254064337312644->SetBinContent(16,76.63512);
   setHisttChannel0.1254064337312644->SetBinContent(17,79.86387);
   setHisttChannel0.1254064337312644->SetBinContent(18,74.84472);
   setHisttChannel0.1254064337312644->SetBinContent(19,54.75772);
   setHisttChannel0.1254064337312644->SetBinContent(20,15.70786);
   setHisttChannel0.1254064337312644->SetBinError(1,1.633121);
   setHisttChannel0.1254064337312644->SetBinError(2,1.709827);
   setHisttChannel0.1254064337312644->SetBinError(3,1.649407);
   setHisttChannel0.1254064337312644->SetBinError(4,1.812723);
   setHisttChannel0.1254064337312644->SetBinError(5,1.854294);
   setHisttChannel0.1254064337312644->SetBinError(6,1.91055);
   setHisttChannel0.1254064337312644->SetBinError(7,2.013708);
   setHisttChannel0.1254064337312644->SetBinError(8,2.145882);
   setHisttChannel0.1254064337312644->SetBinError(9,2.283283);
   setHisttChannel0.1254064337312644->SetBinError(10,2.280172);
   setHisttChannel0.1254064337312644->SetBinError(11,2.543815);
   setHisttChannel0.1254064337312644->SetBinError(12,2.659593);
   setHisttChannel0.1254064337312644->SetBinError(13,2.623406);
   setHisttChannel0.1254064337312644->SetBinError(14,2.738276);
   setHisttChannel0.1254064337312644->SetBinError(15,2.746206);
   setHisttChannel0.1254064337312644->SetBinError(16,2.902526);
   setHisttChannel0.1254064337312644->SetBinError(17,2.97768);
   setHisttChannel0.1254064337312644->SetBinError(18,2.8867);
   setHisttChannel0.1254064337312644->SetBinError(19,2.483553);
   setHisttChannel0.1254064337312644->SetBinError(20,1.318144);
   setHisttChannel0.1254064337312644->SetEntries(20202);
   setHisttChannel0.1254064337312644->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.1254064337312644->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.1254064337312644->SetLineColor(ci);
   setHisttChannel0.1254064337312644->SetLineWidth(2);
   setHisttChannel0.1254064337312644->SetMarkerStyle(20);
   setHisttChannel0.1254064337312644->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.1254064337312644->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.1254064337312644->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.1254064337312644->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.1254064337312644->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.1254064337312644->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.1254064337312644->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.1254064337312644->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.1254064337312644->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.1254064337312644->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.1254064337312644->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.1254064337312644->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.1254064337312644->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.1254064337312644->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.1254064337312644->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.1254064337312644->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.1254064337312644->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.1254064337312644->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.1254064337312644->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.1254064337312644->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.1254064337312644->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.125406433731,"HIST F");
   Double_t xAxis2034[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHisttWs0.6545419794232645 = new TH1F("setHisttWs0.6545419794232645","",20, xAxis2034);
   setHisttWs0.6545419794232645->SetBinContent(1,24.23662);
   setHisttWs0.6545419794232645->SetBinContent(2,26.17441);
   setHisttWs0.6545419794232645->SetBinContent(3,31.89831);
   setHisttWs0.6545419794232645->SetBinContent(4,30.63965);
   setHisttWs0.6545419794232645->SetBinContent(5,25.85162);
   setHisttWs0.6545419794232645->SetBinContent(6,30.77558);
   setHisttWs0.6545419794232645->SetBinContent(7,25.52924);
   setHisttWs0.6545419794232645->SetBinContent(8,22.61395);
   setHisttWs0.6545419794232645->SetBinContent(9,22.62976);
   setHisttWs0.6545419794232645->SetBinContent(10,29.03386);
   setHisttWs0.6545419794232645->SetBinContent(11,24.5475);
   setHisttWs0.6545419794232645->SetBinContent(12,25.38918);
   setHisttWs0.6545419794232645->SetBinContent(13,23.37325);
   setHisttWs0.6545419794232645->SetBinContent(14,26.29475);
   setHisttWs0.6545419794232645->SetBinContent(15,20.88251);
   setHisttWs0.6545419794232645->SetBinContent(16,27.79273);
   setHisttWs0.6545419794232645->SetBinContent(17,23.13346);
   setHisttWs0.6545419794232645->SetBinContent(18,15.47522);
   setHisttWs0.6545419794232645->SetBinContent(19,16.13845);
   setHisttWs0.6545419794232645->SetBinContent(20,5.687551);
   setHisttWs0.6545419794232645->SetBinError(1,3.261183);
   setHisttWs0.6545419794232645->SetBinError(2,3.375335);
   setHisttWs0.6545419794232645->SetBinError(3,3.704687);
   setHisttWs0.6545419794232645->SetBinError(4,3.69796);
   setHisttWs0.6545419794232645->SetBinError(5,3.262429);
   setHisttWs0.6545419794232645->SetBinError(6,3.584157);
   setHisttWs0.6545419794232645->SetBinError(7,3.377986);
   setHisttWs0.6545419794232645->SetBinError(8,3.267529);
   setHisttWs0.6545419794232645->SetBinError(9,3.070867);
   setHisttWs0.6545419794232645->SetBinError(10,3.533569);
   setHisttWs0.6545419794232645->SetBinError(11,3.153518);
   setHisttWs0.6545419794232645->SetBinError(12,3.250304);
   setHisttWs0.6545419794232645->SetBinError(13,3.153257);
   setHisttWs0.6545419794232645->SetBinError(14,3.193439);
   setHisttWs0.6545419794232645->SetBinError(15,3.019238);
   setHisttWs0.6545419794232645->SetBinError(16,3.491574);
   setHisttWs0.6545419794232645->SetBinError(17,3.135687);
   setHisttWs0.6545419794232645->SetBinError(18,2.614799);
   setHisttWs0.6545419794232645->SetBinError(19,2.625228);
   setHisttWs0.6545419794232645->SetBinError(20,1.541079);
   setHisttWs0.6545419794232645->SetEntries(3351);
   setHisttWs0.6545419794232645->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWs0.6545419794232645->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWs0.6545419794232645->SetLineColor(ci);
   setHisttWs0.6545419794232645->SetLineWidth(2);
   setHisttWs0.6545419794232645->SetMarkerStyle(20);
   setHisttWs0.6545419794232645->GetXaxis()->SetNdivisions(1005);
   setHisttWs0.6545419794232645->GetXaxis()->SetLabelFont(43);
   setHisttWs0.6545419794232645->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWs0.6545419794232645->GetXaxis()->SetLabelSize(32);
   setHisttWs0.6545419794232645->GetXaxis()->SetTitleSize(35);
   setHisttWs0.6545419794232645->GetXaxis()->SetTickLength(0.05);
   setHisttWs0.6545419794232645->GetXaxis()->SetTitleOffset(1.135);
   setHisttWs0.6545419794232645->GetXaxis()->SetTitleFont(43);
   setHisttWs0.6545419794232645->GetYaxis()->SetNdivisions(506);
   setHisttWs0.6545419794232645->GetYaxis()->SetLabelFont(43);
   setHisttWs0.6545419794232645->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWs0.6545419794232645->GetYaxis()->SetLabelSize(32);
   setHisttWs0.6545419794232645->GetYaxis()->SetTitleSize(35);
   setHisttWs0.6545419794232645->GetYaxis()->SetTitleOffset(1.32);
   setHisttWs0.6545419794232645->GetYaxis()->SetTitleFont(43);
   setHisttWs0.6545419794232645->GetZaxis()->SetLabelFont(43);
   setHisttWs0.6545419794232645->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWs0.6545419794232645->GetZaxis()->SetLabelSize(32);
   setHisttWs0.6545419794232645->GetZaxis()->SetTitleSize(35);
   setHisttWs0.6545419794232645->GetZaxis()->SetTitleOffset(1.32);
   setHisttWs0.6545419794232645->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWs0.654541979423,"HIST F");
   Double_t xAxis2035[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistTTJets0.008459924444172646 = new TH1F("setHistTTJets0.008459924444172646","",20, xAxis2035);
   setHistTTJets0.008459924444172646->SetBinContent(1,814.0163);
   setHistTTJets0.008459924444172646->SetBinContent(2,819.0032);
   setHistTTJets0.008459924444172646->SetBinContent(3,824.1637);
   setHistTTJets0.008459924444172646->SetBinContent(4,825.7379);
   setHistTTJets0.008459924444172646->SetBinContent(5,806.3262);
   setHistTTJets0.008459924444172646->SetBinContent(6,822.9811);
   setHistTTJets0.008459924444172646->SetBinContent(7,824.7495);
   setHistTTJets0.008459924444172646->SetBinContent(8,821.6339);
   setHistTTJets0.008459924444172646->SetBinContent(9,824.4757);
   setHistTTJets0.008459924444172646->SetBinContent(10,831.8329);
   setHistTTJets0.008459924444172646->SetBinContent(11,810.2668);
   setHistTTJets0.008459924444172646->SetBinContent(12,815.0362);
   setHistTTJets0.008459924444172646->SetBinContent(13,804.6645);
   setHistTTJets0.008459924444172646->SetBinContent(14,785.7484);
   setHistTTJets0.008459924444172646->SetBinContent(15,751.3405);
   setHistTTJets0.008459924444172646->SetBinContent(16,727.6401);
   setHistTTJets0.008459924444172646->SetBinContent(17,679.9975);
   setHistTTJets0.008459924444172646->SetBinContent(18,627.7761);
   setHistTTJets0.008459924444172646->SetBinContent(19,498.1643);
   setHistTTJets0.008459924444172646->SetBinContent(20,157.0853);
   setHistTTJets0.008459924444172646->SetBinError(1,8.391624);
   setHistTTJets0.008459924444172646->SetBinError(2,8.428819);
   setHistTTJets0.008459924444172646->SetBinError(3,8.468403);
   setHistTTJets0.008459924444172646->SetBinError(4,8.511662);
   setHistTTJets0.008459924444172646->SetBinError(5,8.375714);
   setHistTTJets0.008459924444172646->SetBinError(6,8.468024);
   setHistTTJets0.008459924444172646->SetBinError(7,8.480957);
   setHistTTJets0.008459924444172646->SetBinError(8,8.479554);
   setHistTTJets0.008459924444172646->SetBinError(9,8.481358);
   setHistTTJets0.008459924444172646->SetBinError(10,8.499007);
   setHistTTJets0.008459924444172646->SetBinError(11,8.416423);
   setHistTTJets0.008459924444172646->SetBinError(12,8.415333);
   setHistTTJets0.008459924444172646->SetBinError(13,8.366523);
   setHistTTJets0.008459924444172646->SetBinError(14,8.257074);
   setHistTTJets0.008459924444172646->SetBinError(15,8.061152);
   setHistTTJets0.008459924444172646->SetBinError(16,7.957279);
   setHistTTJets0.008459924444172646->SetBinError(17,7.675453);
   setHistTTJets0.008459924444172646->SetBinError(18,7.400918);
   setHistTTJets0.008459924444172646->SetBinError(19,6.608413);
   setHistTTJets0.008459924444172646->SetBinError(20,3.700841);
   setHistTTJets0.008459924444172646->SetEntries(249437);
   setHistTTJets0.008459924444172646->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.008459924444172646->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.008459924444172646->SetLineColor(ci);
   setHistTTJets0.008459924444172646->SetLineWidth(2);
   setHistTTJets0.008459924444172646->SetMarkerStyle(20);
   setHistTTJets0.008459924444172646->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.008459924444172646->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.008459924444172646->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.008459924444172646->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.008459924444172646->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.008459924444172646->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.008459924444172646->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.008459924444172646->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.008459924444172646->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.008459924444172646->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.008459924444172646->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.008459924444172646->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.008459924444172646->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.008459924444172646->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.008459924444172646->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.008459924444172646->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.008459924444172646->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.008459924444172646->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.008459924444172646->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.008459924444172646->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.008459924444172646->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.00845992444417,"HIST F");
   Double_t xAxis2036[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGHF0.3619305700972647 = new TH1F("setHistWJetsMGHF0.3619305700972647","",20, xAxis2036);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(1,23.71954);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(2,21.86485);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(3,15.88758);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(4,16.84122);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(5,14.92049);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(6,17.44029);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(7,25.80348);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(8,22.34805);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(9,23.60344);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(10,27.38256);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(11,18.36486);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(12,29.09418);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(13,19.83204);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(14,21.28451);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(15,24.19054);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(16,23.46568);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(17,34.8215);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(18,30.16907);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(19,31.0785);
   setHistWJetsMGHF0.3619305700972647->SetBinContent(20,14.35643);
   setHistWJetsMGHF0.3619305700972647->SetBinError(1,4.211926);
   setHistWJetsMGHF0.3619305700972647->SetBinError(2,4.169585);
   setHistWJetsMGHF0.3619305700972647->SetBinError(3,3.164325);
   setHistWJetsMGHF0.3619305700972647->SetBinError(4,3.578628);
   setHistWJetsMGHF0.3619305700972647->SetBinError(5,3.071204);
   setHistWJetsMGHF0.3619305700972647->SetBinError(6,3.739954);
   setHistWJetsMGHF0.3619305700972647->SetBinError(7,4.418982);
   setHistWJetsMGHF0.3619305700972647->SetBinError(8,4.418538);
   setHistWJetsMGHF0.3619305700972647->SetBinError(9,4.414888);
   setHistWJetsMGHF0.3619305700972647->SetBinError(10,4.590797);
   setHistWJetsMGHF0.3619305700972647->SetBinError(11,3.831516);
   setHistWJetsMGHF0.3619305700972647->SetBinError(12,4.691696);
   setHistWJetsMGHF0.3619305700972647->SetBinError(13,4.155843);
   setHistWJetsMGHF0.3619305700972647->SetBinError(14,3.899798);
   setHistWJetsMGHF0.3619305700972647->SetBinError(15,4.363743);
   setHistWJetsMGHF0.3619305700972647->SetBinError(16,4.1137);
   setHistWJetsMGHF0.3619305700972647->SetBinError(17,5.096032);
   setHistWJetsMGHF0.3619305700972647->SetBinError(18,4.658603);
   setHistWJetsMGHF0.3619305700972647->SetBinError(19,4.800333);
   setHistWJetsMGHF0.3619305700972647->SetBinError(20,3.239207);
   setHistWJetsMGHF0.3619305700972647->SetEntries(798);
   setHistWJetsMGHF0.3619305700972647->SetDirectory(0);

   ci = TColor::GetColor("#1bb320");
   setHistWJetsMGHF0.3619305700972647->SetFillColor(ci);

   ci = TColor::GetColor("#106b13");
   setHistWJetsMGHF0.3619305700972647->SetLineColor(ci);
   setHistWJetsMGHF0.3619305700972647->SetLineWidth(2);
   setHistWJetsMGHF0.3619305700972647->SetMarkerStyle(20);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGHF0.3619305700972647->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.3619305700972647->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGHF0.3619305700972647->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.3619305700972647->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.3619305700972647->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.3619305700972647->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.3619305700972647->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.3619305700972647->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGHF0.3619305700972647->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGHF0.3619305700972647->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGHF0.3619305700972647->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGHF0.3619305700972647->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGHF0.3619305700972647->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGHF0.3619305700972647->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGHF0.361930570097,"HIST F");
   Double_t xAxis2037[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistWJetsMGLF0.4503082379362648 = new TH1F("setHistWJetsMGLF0.4503082379362648","",20, xAxis2037);
   setHistWJetsMGLF0.4503082379362648->SetBinContent(2,0.2029773);
   setHistWJetsMGLF0.4503082379362648->SetBinContent(8,1.272569);
   setHistWJetsMGLF0.4503082379362648->SetBinContent(12,0.1856888);
   setHistWJetsMGLF0.4503082379362648->SetBinContent(18,1.048948);
   setHistWJetsMGLF0.4503082379362648->SetBinError(2,0.2029772);
   setHistWJetsMGLF0.4503082379362648->SetBinError(8,1.272569);
   setHistWJetsMGLF0.4503082379362648->SetBinError(12,0.1856888);
   setHistWJetsMGLF0.4503082379362648->SetBinError(18,1.048948);
   setHistWJetsMGLF0.4503082379362648->SetEntries(4);
   setHistWJetsMGLF0.4503082379362648->SetDirectory(0);

   ci = TColor::GetColor("#4dff97");
   setHistWJetsMGLF0.4503082379362648->SetFillColor(ci);

   ci = TColor::GetColor("#2e995a");
   setHistWJetsMGLF0.4503082379362648->SetLineColor(ci);
   setHistWJetsMGLF0.4503082379362648->SetLineWidth(2);
   setHistWJetsMGLF0.4503082379362648->SetMarkerStyle(20);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetNdivisions(1005);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetTickLength(0.05);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsMGLF0.4503082379362648->GetXaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.4503082379362648->GetYaxis()->SetNdivisions(506);
   setHistWJetsMGLF0.4503082379362648->GetYaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.4503082379362648->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.4503082379362648->GetYaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.4503082379362648->GetYaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.4503082379362648->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.4503082379362648->GetYaxis()->SetTitleFont(43);
   setHistWJetsMGLF0.4503082379362648->GetZaxis()->SetLabelFont(43);
   setHistWJetsMGLF0.4503082379362648->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsMGLF0.4503082379362648->GetZaxis()->SetLabelSize(32);
   setHistWJetsMGLF0.4503082379362648->GetZaxis()->SetTitleSize(35);
   setHistWJetsMGLF0.4503082379362648->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsMGLF0.4503082379362648->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsMGLF0.450308237936,"HIST F");
   Double_t xAxis2038[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistDYVV0.5409121821862649 = new TH1F("setHistDYVV0.5409121821862649","",20, xAxis2038);
   setHistDYVV0.5409121821862649->SetBinContent(1,4.603554);
   setHistDYVV0.5409121821862649->SetBinContent(2,9.932739);
   setHistDYVV0.5409121821862649->SetBinContent(3,10.58465);
   setHistDYVV0.5409121821862649->SetBinContent(4,3.36537);
   setHistDYVV0.5409121821862649->SetBinContent(5,5.779731);
   setHistDYVV0.5409121821862649->SetBinContent(6,6.840467);
   setHistDYVV0.5409121821862649->SetBinContent(7,7.239033);
   setHistDYVV0.5409121821862649->SetBinContent(8,3.712994);
   setHistDYVV0.5409121821862649->SetBinContent(9,4.069021);
   setHistDYVV0.5409121821862649->SetBinContent(10,4.775056);
   setHistDYVV0.5409121821862649->SetBinContent(11,1.666029);
   setHistDYVV0.5409121821862649->SetBinContent(12,9.442406);
   setHistDYVV0.5409121821862649->SetBinContent(13,7.723366);
   setHistDYVV0.5409121821862649->SetBinContent(14,7.83377);
   setHistDYVV0.5409121821862649->SetBinContent(15,1.863709);
   setHistDYVV0.5409121821862649->SetBinContent(16,4.850601);
   setHistDYVV0.5409121821862649->SetBinContent(17,6.789501);
   setHistDYVV0.5409121821862649->SetBinContent(18,8.163886);
   setHistDYVV0.5409121821862649->SetBinContent(19,4.704268);
   setHistDYVV0.5409121821862649->SetBinContent(20,0.3405941);
   setHistDYVV0.5409121821862649->SetBinError(1,3.092057);
   setHistDYVV0.5409121821862649->SetBinError(2,5.065439);
   setHistDYVV0.5409121821862649->SetBinError(3,5.149247);
   setHistDYVV0.5409121821862649->SetBinError(4,1.9678);
   setHistDYVV0.5409121821862649->SetBinError(5,3.13891);
   setHistDYVV0.5409121821862649->SetBinError(6,5.251596);
   setHistDYVV0.5409121821862649->SetBinError(7,4.031312);
   setHistDYVV0.5409121821862649->SetBinError(8,2.817655);
   setHistDYVV0.5409121821862649->SetBinError(9,2.506313);
   setHistDYVV0.5409121821862649->SetBinError(10,3.027856);
   setHistDYVV0.5409121821862649->SetBinError(11,0.3988012);
   setHistDYVV0.5409121821862649->SetBinError(12,5.282408);
   setHistDYVV0.5409121821862649->SetBinError(13,4.250875);
   setHistDYVV0.5409121821862649->SetBinError(14,4.158268);
   setHistDYVV0.5409121821862649->SetBinError(15,0.440809);
   setHistDYVV0.5409121821862649->SetBinError(16,3.07582);
   setHistDYVV0.5409121821862649->SetBinError(17,4.237476);
   setHistDYVV0.5409121821862649->SetBinError(18,4.440212);
   setHistDYVV0.5409121821862649->SetBinError(19,3.074023);
   setHistDYVV0.5409121821862649->SetBinError(20,0.1808156);
   setHistDYVV0.5409121821862649->SetEntries(444);
   setHistDYVV0.5409121821862649->SetDirectory(0);

   ci = TColor::GetColor("#3d7bea");
   setHistDYVV0.5409121821862649->SetFillColor(ci);

   ci = TColor::GetColor("#24498c");
   setHistDYVV0.5409121821862649->SetLineColor(ci);
   setHistDYVV0.5409121821862649->SetLineWidth(2);
   setHistDYVV0.5409121821862649->SetMarkerStyle(20);
   setHistDYVV0.5409121821862649->GetXaxis()->SetNdivisions(1005);
   setHistDYVV0.5409121821862649->GetXaxis()->SetLabelFont(43);
   setHistDYVV0.5409121821862649->GetXaxis()->SetLabelOffset(0.0105);
   setHistDYVV0.5409121821862649->GetXaxis()->SetLabelSize(32);
   setHistDYVV0.5409121821862649->GetXaxis()->SetTitleSize(35);
   setHistDYVV0.5409121821862649->GetXaxis()->SetTickLength(0.05);
   setHistDYVV0.5409121821862649->GetXaxis()->SetTitleOffset(1.135);
   setHistDYVV0.5409121821862649->GetXaxis()->SetTitleFont(43);
   setHistDYVV0.5409121821862649->GetYaxis()->SetNdivisions(506);
   setHistDYVV0.5409121821862649->GetYaxis()->SetLabelFont(43);
   setHistDYVV0.5409121821862649->GetYaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.5409121821862649->GetYaxis()->SetLabelSize(32);
   setHistDYVV0.5409121821862649->GetYaxis()->SetTitleSize(35);
   setHistDYVV0.5409121821862649->GetYaxis()->SetTitleOffset(1.32);
   setHistDYVV0.5409121821862649->GetYaxis()->SetTitleFont(43);
   setHistDYVV0.5409121821862649->GetZaxis()->SetLabelFont(43);
   setHistDYVV0.5409121821862649->GetZaxis()->SetLabelOffset(0.0087);
   setHistDYVV0.5409121821862649->GetZaxis()->SetLabelSize(32);
   setHistDYVV0.5409121821862649->GetZaxis()->SetTitleSize(35);
   setHistDYVV0.5409121821862649->GetZaxis()->SetTitleOffset(1.32);
   setHistDYVV0.5409121821862649->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDYVV0.540912182186,"HIST F");
   Double_t xAxis2039[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistQCD_DD0.4993435131732650 = new TH1F("setHistQCD_DD0.4993435131732650","",20, xAxis2039);
   setHistQCD_DD0.4993435131732650->SetBinContent(1,1.945837);
   setHistQCD_DD0.4993435131732650->SetBinContent(2,2.826244);
   setHistQCD_DD0.4993435131732650->SetBinContent(3,-7.492262);
   setHistQCD_DD0.4993435131732650->SetBinContent(4,9.629053);
   setHistQCD_DD0.4993435131732650->SetBinContent(5,-7.55533);
   setHistQCD_DD0.4993435131732650->SetBinContent(6,6.910938);
   setHistQCD_DD0.4993435131732650->SetBinContent(7,11.73596);
   setHistQCD_DD0.4993435131732650->SetBinContent(8,5.124996);
   setHistQCD_DD0.4993435131732650->SetBinContent(9,-6.990788);
   setHistQCD_DD0.4993435131732650->SetBinContent(10,20.83699);
   setHistQCD_DD0.4993435131732650->SetBinContent(11,1.917147);
   setHistQCD_DD0.4993435131732650->SetBinContent(12,10.24077);
   setHistQCD_DD0.4993435131732650->SetBinContent(13,-2.125333);
   setHistQCD_DD0.4993435131732650->SetBinContent(14,0.9586017);
   setHistQCD_DD0.4993435131732650->SetBinContent(15,6.726412);
   setHistQCD_DD0.4993435131732650->SetBinContent(16,2.693745);
   setHistQCD_DD0.4993435131732650->SetBinContent(17,25.1066);
   setHistQCD_DD0.4993435131732650->SetBinContent(18,0.4608882);
   setHistQCD_DD0.4993435131732650->SetBinContent(19,5.245767);
   setHistQCD_DD0.4993435131732650->SetBinContent(20,10.92903);
   setHistQCD_DD0.4993435131732650->SetBinError(1,6.478632);
   setHistQCD_DD0.4993435131732650->SetBinError(2,6.423019);
   setHistQCD_DD0.4993435131732650->SetBinError(3,5.239752);
   setHistQCD_DD0.4993435131732650->SetBinError(4,6.78089);
   setHistQCD_DD0.4993435131732650->SetBinError(5,5.630805);
   setHistQCD_DD0.4993435131732650->SetBinError(6,6.798637);
   setHistQCD_DD0.4993435131732650->SetBinError(7,7.597697);
   setHistQCD_DD0.4993435131732650->SetBinError(8,6.948151);
   setHistQCD_DD0.4993435131732650->SetBinError(9,5.75312);
   setHistQCD_DD0.4993435131732650->SetBinError(10,8.355231);
   setHistQCD_DD0.4993435131732650->SetBinError(11,7.156417);
   setHistQCD_DD0.4993435131732650->SetBinError(12,8.365768);
   setHistQCD_DD0.4993435131732650->SetBinError(13,6.480194);
   setHistQCD_DD0.4993435131732650->SetBinError(14,7.519862);
   setHistQCD_DD0.4993435131732650->SetBinError(15,7.872688);
   setHistQCD_DD0.4993435131732650->SetBinError(16,6.978295);
   setHistQCD_DD0.4993435131732650->SetBinError(17,8.842433);
   setHistQCD_DD0.4993435131732650->SetBinError(18,7.160175);
   setHistQCD_DD0.4993435131732650->SetBinError(19,7.287157);
   setHistQCD_DD0.4993435131732650->SetBinError(20,7.296141);
   setHistQCD_DD0.4993435131732650->SetEntries(19197);
   setHistQCD_DD0.4993435131732650->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.4993435131732650->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD0.4993435131732650->SetLineColor(ci);
   setHistQCD_DD0.4993435131732650->SetLineWidth(2);
   setHistQCD_DD0.4993435131732650->SetMarkerStyle(20);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.4993435131732650->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.4993435131732650->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.4993435131732650->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.4993435131732650->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.4993435131732650->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.4993435131732650->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.4993435131732650->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.4993435131732650->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.4993435131732650->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.4993435131732650->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.4993435131732650->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.4993435131732650->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.4993435131732650->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.4993435131732650->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD0.499343513173,"HIST F");
   ->Draw("same");
   Double_t xAxis2040[21] = {-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *setHistdata0.8134181945862651 = new TH1F("setHistdata0.8134181945862651","",20, xAxis2040);
   setHistdata0.8134181945862651->SetBinContent(1,890);
   setHistdata0.8134181945862651->SetBinContent(2,919);
   setHistdata0.8134181945862651->SetBinContent(3,907);
   setHistdata0.8134181945862651->SetBinContent(4,877);
   setHistdata0.8134181945862651->SetBinContent(5,930);
   setHistdata0.8134181945862651->SetBinContent(6,918);
   setHistdata0.8134181945862651->SetBinContent(7,939);
   setHistdata0.8134181945862651->SetBinContent(8,938);
   setHistdata0.8134181945862651->SetBinContent(9,900);
   setHistdata0.8134181945862651->SetBinContent(10,891);
   setHistdata0.8134181945862651->SetBinContent(11,969);
   setHistdata0.8134181945862651->SetBinContent(12,891);
   setHistdata0.8134181945862651->SetBinContent(13,895);
   setHistdata0.8134181945862651->SetBinContent(14,904);
   setHistdata0.8134181945862651->SetBinContent(15,891);
   setHistdata0.8134181945862651->SetBinContent(16,896);
   setHistdata0.8134181945862651->SetBinContent(17,862);
   setHistdata0.8134181945862651->SetBinContent(18,755);
   setHistdata0.8134181945862651->SetBinContent(19,625);
   setHistdata0.8134181945862651->SetBinContent(20,226);
   setHistdata0.8134181945862651->SetBinError(1,29.83287);
   setHistdata0.8134181945862651->SetBinError(2,30.31501);
   setHistdata0.8134181945862651->SetBinError(3,30.11644);
   setHistdata0.8134181945862651->SetBinError(4,29.61419);
   setHistdata0.8134181945862651->SetBinError(5,30.4959);
   setHistdata0.8134181945862651->SetBinError(6,30.29851);
   setHistdata0.8134181945862651->SetBinError(7,30.64311);
   setHistdata0.8134181945862651->SetBinError(8,30.62679);
   setHistdata0.8134181945862651->SetBinError(9,30);
   setHistdata0.8134181945862651->SetBinError(10,29.84962);
   setHistdata0.8134181945862651->SetBinError(11,31.12876);
   setHistdata0.8134181945862651->SetBinError(12,29.84962);
   setHistdata0.8134181945862651->SetBinError(13,29.91655);
   setHistdata0.8134181945862651->SetBinError(14,30.06659);
   setHistdata0.8134181945862651->SetBinError(15,29.84962);
   setHistdata0.8134181945862651->SetBinError(16,29.93326);
   setHistdata0.8134181945862651->SetBinError(17,29.35984);
   setHistdata0.8134181945862651->SetBinError(18,27.47726);
   setHistdata0.8134181945862651->SetBinError(19,25);
   setHistdata0.8134181945862651->SetBinError(20,15.0333);
   setHistdata0.8134181945862651->SetEntries(17023);
   setHistdata0.8134181945862651->SetFillStyle(0);
   setHistdata0.8134181945862651->SetMarkerStyle(20);
   setHistdata0.8134181945862651->SetMarkerSize(1.15);
   setHistdata0.8134181945862651->GetXaxis()->SetNdivisions(1005);
   setHistdata0.8134181945862651->GetXaxis()->SetLabelFont(43);
   setHistdata0.8134181945862651->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata0.8134181945862651->GetXaxis()->SetLabelSize(32);
   setHistdata0.8134181945862651->GetXaxis()->SetTitleSize(35);
   setHistdata0.8134181945862651->GetXaxis()->SetTickLength(0.05);
   setHistdata0.8134181945862651->GetXaxis()->SetTitleOffset(1.135);
   setHistdata0.8134181945862651->GetXaxis()->SetTitleFont(43);
   setHistdata0.8134181945862651->GetYaxis()->SetNdivisions(506);
   setHistdata0.8134181945862651->GetYaxis()->SetLabelFont(43);
   setHistdata0.8134181945862651->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata0.8134181945862651->GetYaxis()->SetLabelSize(32);
   setHistdata0.8134181945862651->GetYaxis()->SetTitleSize(35);
   setHistdata0.8134181945862651->GetYaxis()->SetTitleOffset(1.32);
   setHistdata0.8134181945862651->GetYaxis()->SetTitleFont(43);
   setHistdata0.8134181945862651->GetZaxis()->SetLabelFont(43);
   setHistdata0.8134181945862651->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata0.8134181945862651->GetZaxis()->SetLabelSize(32);
   setHistdata0.8134181945862651->GetZaxis()->SetTitleSize(35);
   setHistdata0.8134181945862651->GetZaxis()->SetTitleOffset(1.32);
   setHistdata0.8134181945862651->GetZaxis()->SetTitleFont(43);
   setHistdata0.8134181945862651->Draw("PESame");
   
   TH2F *axis0.808838785062_copy2652 = new TH2F("axis0.808838785062_copy2652","",50,-1,1,50,0,1356.6);
   axis0.808838785062_copy2652->SetDirectory(0);
   axis0.808838785062_copy2652->SetMarkerStyle(20);
   axis0.808838785062_copy2652->GetXaxis()->SetNdivisions(1005);
   axis0.808838785062_copy2652->GetXaxis()->SetLabelFont(43);
   axis0.808838785062_copy2652->GetXaxis()->SetLabelOffset(0.0105);
   axis0.808838785062_copy2652->GetXaxis()->SetLabelSize(0);
   axis0.808838785062_copy2652->GetXaxis()->SetTitleSize(35);
   axis0.808838785062_copy2652->GetXaxis()->SetTickLength(0.025);
   axis0.808838785062_copy2652->GetXaxis()->SetTitleOffset(1.135);
   axis0.808838785062_copy2652->GetXaxis()->SetTitleFont(43);
   axis0.808838785062_copy2652->GetYaxis()->SetTitle("Events / bin");
   axis0.808838785062_copy2652->GetYaxis()->SetNdivisions(506);
   axis0.808838785062_copy2652->GetYaxis()->SetLabelFont(43);
   axis0.808838785062_copy2652->GetYaxis()->SetLabelOffset(0.0087);
   axis0.808838785062_copy2652->GetYaxis()->SetLabelSize(32);
   axis0.808838785062_copy2652->GetYaxis()->SetTitleSize(35);
   axis0.808838785062_copy2652->GetYaxis()->SetTickLength(0.02631579);
   axis0.808838785062_copy2652->GetYaxis()->SetTitleOffset(1.32);
   axis0.808838785062_copy2652->GetYaxis()->SetTitleFont(43);
   axis0.808838785062_copy2652->GetZaxis()->SetLabelFont(43);
   axis0.808838785062_copy2652->GetZaxis()->SetLabelOffset(0.0087);
   axis0.808838785062_copy2652->GetZaxis()->SetLabelSize(32);
   axis0.808838785062_copy2652->GetZaxis()->SetTitleSize(35);
   axis0.808838785062_copy2652->GetZaxis()->SetTitleOffset(1.32);
   axis0.808838785062_copy2652->GetZaxis()->SetTitleFont(43);
   axis0.808838785062_copy2652->Draw("sameaxis");
   
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
   TLegendEntry *entry=leg->AddEntry("setHistdata0.813418194586","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD0.499343513173","Multijet","F");

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
   entry=leg->AddEntry("setHistDYVV0.540912182186","Z/#gamma/VV","F");

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
   entry=leg->AddEntry("setHistWJetsMGLF0.450308237936","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsMGHF0.361930570097","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets0.00845992444417","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWs0.654541979423","tW/#it{s}-ch.","F");

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
   entry=leg->AddEntry("setHisttChannel0.125406433731","#it{t}-channel","F");

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
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739_2->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->Modified();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->cd();
   cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739->SetSelected(cvmuon_3j2t_cosTheta_lj_qcdbdt0.368209186739);
}
