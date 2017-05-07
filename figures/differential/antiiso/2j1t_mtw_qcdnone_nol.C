void plots_antiiso/2j1t/2j1t_mtw_qcdnone_nol()
{
//=========Macro generated from canvas: cv2j1t_mtw_qcdnone0.527366624005/
//=========  (Sun May  7 20:34:38 2017) by ROOT version6.02/05
   TCanvas *cv2j1t_mtw_qcdnone0.527366624005 = new TCanvas("cv2j1t_mtw_qcdnone0.527366624005", "",0,0,800,650);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetHighLightColor(2);
   cv2j1t_mtw_qcdnone0.527366624005->Range(0,0,1,1);
   cv2j1t_mtw_qcdnone0.527366624005->SetFillColor(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetBorderSize(2);
   cv2j1t_mtw_qcdnone0.527366624005->SetTickx(1);
   cv2j1t_mtw_qcdnone0.527366624005->SetTicky(1);
   cv2j1t_mtw_qcdnone0.527366624005->SetLeftMargin(0.1150442);
   cv2j1t_mtw_qcdnone0.527366624005->SetRightMargin(0.227083);
   cv2j1t_mtw_qcdnone0.527366624005->SetTopMargin(0.04002582);
   cv2j1t_mtw_qcdnone0.527366624005->SetBottomMargin(0.08064517);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameLineWidth(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cv2j1t_mtw_qcdnone0.527366624005_1
   TPad *cv2j1t_mtw_qcdnone0.527366624005_1 = new TPad("cv2j1t_mtw_qcdnone0.527366624005_1", "",0,0,1,1);
   cv2j1t_mtw_qcdnone0.527366624005_1->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_1->cd();
   cv2j1t_mtw_qcdnone0.527366624005_1->Range(-46.66667,0.06666676,286.6667,3.87619);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFillColor(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFillStyle(4000);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetBorderSize(2);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetTickx(1);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetTicky(1);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetLeftMargin(0.14);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetRightMargin(0.26);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetTopMargin(0.65);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetBottomMargin(0.14);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_1->SetFrameBorderMode(0);
   
   TH2F *axisRes0.41475638077325 = new TH2F("axisRes0.41475638077325","",50,0,200,50,0.6,1.4);
   axisRes0.41475638077325->SetMarkerStyle(20);
   axisRes0.41475638077325->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.41475638077325->GetXaxis()->SetNdivisions(1005);
   axisRes0.41475638077325->GetXaxis()->SetLabelFont(43);
   axisRes0.41475638077325->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.41475638077325->GetXaxis()->SetLabelSize(32);
   axisRes0.41475638077325->GetXaxis()->SetTitleSize(35);
   axisRes0.41475638077325->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.41475638077325->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.41475638077325->GetXaxis()->SetTitleFont(43);
   axisRes0.41475638077325->GetYaxis()->SetTitle("Data/MC");
   axisRes0.41475638077325->GetYaxis()->SetNdivisions(406);
   axisRes0.41475638077325->GetYaxis()->SetLabelFont(43);
   axisRes0.41475638077325->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.41475638077325->GetYaxis()->SetLabelSize(32);
   axisRes0.41475638077325->GetYaxis()->SetTitleSize(35);
   axisRes0.41475638077325->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.41475638077325->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.41475638077325->GetYaxis()->SetTitleFont(43);
   axisRes0.41475638077325->GetZaxis()->SetLabelFont(43);
   axisRes0.41475638077325->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.41475638077325->GetZaxis()->SetLabelSize(32);
   axisRes0.41475638077325->GetZaxis()->SetTitleSize(35);
   axisRes0.41475638077325->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.41475638077325->GetZaxis()->SetTitleFont(43);
   axisRes0.41475638077325->Draw("AXIS");
   TBox *box = new TBox(0,0.8994569,10,1.100543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(0,0.8994569,10,1.100543);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9204483,20,1.079552);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(10,0.9204483,20,1.079552);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.9177005,30,1.0823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(20,0.9177005,30,1.0823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.92979,40,1.07021);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(30,0.92979,40,1.07021);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9351594,50,1.064841);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(40,0.9351594,50,1.064841);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9383845,60,1.061615);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(50,0.9383845,60,1.061615);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9447382,70,1.055262);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(60,0.9447382,70,1.055262);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9449442,80,1.055056);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(70,0.9449442,80,1.055056);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.9433368,90,1.056663);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(80,0.9433368,90,1.056663);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9287841,100,1.071216);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(90,0.9287841,100,1.071216);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.922723,110,1.077277);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.922723,110,1.077277);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.917111,120,1.082889);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(110,0.917111,120,1.082889);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.9204277,130,1.079572);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(120,0.9204277,130,1.079572);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.8482589,140,1.151741);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(130,0.8482589,140,1.151741);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.6942482,150,1.305752);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(140,0.6942482,150,1.305752);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.9452044,160,1.054796);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(150,0.9452044,160,1.054796);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.9405462,170,1.059454);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(160,0.9405462,170,1.059454);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.742726,180,1.257274);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(170,0.742726,180,1.257274);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.7157725,190,1.284227);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.7157725,190,1.284227);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9815613,200,1.018439);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(190,0.9815613,200,1.018439);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis19[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata760.28815435678226 = new TH1F("setHistdata760.28815435678226","",20, xAxis19);
   setHistdata760.28815435678226->SetBinContent(1,53.25793);
   setHistdata760.28815435678226->SetBinContent(2,38.75248);
   setHistdata760.28815435678226->SetBinContent(3,30.53315);
   setHistdata760.28815435678226->SetBinContent(4,17.28854);
   setHistdata760.28815435678226->SetBinContent(5,12.05889);
   setHistdata760.28815435678226->SetBinContent(6,6.160144);
   setHistdata760.28815435678226->SetBinContent(7,2.90344);
   setHistdata760.28815435678226->SetBinContent(8,1.868832);
   setHistdata760.28815435678226->SetBinContent(9,1.468865);
   setHistdata760.28815435678226->SetBinContent(10,1.53391);
   setHistdata760.28815435678226->SetBinContent(11,1.233439);
   setHistdata760.28815435678226->SetBinContent(12,1.5493);
   setHistdata760.28815435678226->SetBinContent(13,1.063322);
   setHistdata760.28815435678226->SetBinContent(14,1.225622);
   setHistdata760.28815435678226->SetBinContent(15,2.365281);
   setHistdata760.28815435678226->SetBinContent(16,0.8538508);
   setHistdata760.28815435678226->SetBinContent(17,0.6339584);
   setHistdata760.28815435678226->SetBinContent(18,1.089765);
   setHistdata760.28815435678226->SetBinContent(19,0.2950344);
   setHistdata760.28815435678226->SetBinContent(20,0.8535663);
   setHistdata760.28815435678226->SetBinError(1,0.6232515);
   setHistdata760.28815435678226->SetBinError(2,0.4830493);
   setHistdata760.28815435678226->SetBinError(3,0.415542);
   setHistdata760.28815435678226->SetBinError(4,0.2715291);
   setHistdata760.28815435678226->SetBinError(5,0.2238893);
   setHistdata760.28815435678226->SetBinError(6,0.140953);
   setHistdata760.28815435678226->SetBinError(7,0.0852112);
   setHistdata760.28815435678226->SetBinError(8,0.06623898);
   setHistdata760.28815435678226->SetBinError(9,0.06404556);
   setHistdata760.28815435678226->SetBinError(10,0.08482544);
   setHistdata760.28815435678226->SetBinError(11,0.09781806);
   setHistdata760.28815435678226->SetBinError(12,0.1589548);
   setHistdata760.28815435678226->SetBinError(13,0.1640742);
   setHistdata760.28815435678226->SetBinError(14,0.223767);
   setHistdata760.28815435678226->SetBinError(15,0.5161467);
   setHistdata760.28815435678226->SetBinError(16,0.284617);
   setHistdata760.28815435678226->SetBinError(17,0.2835148);
   setHistdata760.28815435678226->SetBinError(18,0.3852899);
   setHistdata760.28815435678226->SetBinError(19,0.2086208);
   setHistdata760.28815435678226->SetBinError(20,0.121938);
   setHistdata760.28815435678226->SetBinError(21,3.162278);
   setHistdata760.28815435678226->SetEntries(31217);
   setHistdata760.28815435678226->SetFillStyle(0);
   setHistdata760.28815435678226->SetMarkerStyle(20);
   setHistdata760.28815435678226->SetMarkerSize(1.15);
   setHistdata760.28815435678226->GetXaxis()->SetNdivisions(1005);
   setHistdata760.28815435678226->GetXaxis()->SetLabelFont(43);
   setHistdata760.28815435678226->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata760.28815435678226->GetXaxis()->SetLabelSize(32);
   setHistdata760.28815435678226->GetXaxis()->SetTitleSize(35);
   setHistdata760.28815435678226->GetXaxis()->SetTickLength(0.05);
   setHistdata760.28815435678226->GetXaxis()->SetTitleOffset(1.135);
   setHistdata760.28815435678226->GetXaxis()->SetTitleFont(43);
   setHistdata760.28815435678226->GetYaxis()->SetNdivisions(506);
   setHistdata760.28815435678226->GetYaxis()->SetLabelFont(43);
   setHistdata760.28815435678226->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678226->GetYaxis()->SetLabelSize(32);
   setHistdata760.28815435678226->GetYaxis()->SetTitleSize(35);
   setHistdata760.28815435678226->GetYaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678226->GetYaxis()->SetTitleFont(43);
   setHistdata760.28815435678226->GetZaxis()->SetLabelFont(43);
   setHistdata760.28815435678226->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678226->GetZaxis()->SetLabelSize(32);
   setHistdata760.28815435678226->GetZaxis()->SetTitleSize(35);
   setHistdata760.28815435678226->GetZaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678226->GetZaxis()->SetTitleFont(43);
   setHistdata760.28815435678226->Draw("PESame");
   
   TF1 *axisLine0.4109448946223 = new TF1("axisLine0.410944894622","1",0,200);
   axisLine0.4109448946223->SetFillColor(19);
   axisLine0.4109448946223->SetFillStyle(0);
   axisLine0.4109448946223->SetMarkerStyle(20);
   axisLine0.4109448946223->SetLineWidth(1);
   axisLine0.4109448946223->GetXaxis()->SetNdivisions(1005);
   axisLine0.4109448946223->GetXaxis()->SetLabelFont(43);
   axisLine0.4109448946223->GetXaxis()->SetLabelOffset(0.0105);
   axisLine0.4109448946223->GetXaxis()->SetLabelSize(32);
   axisLine0.4109448946223->GetXaxis()->SetTitleSize(35);
   axisLine0.4109448946223->GetXaxis()->SetTickLength(0.05);
   axisLine0.4109448946223->GetXaxis()->SetTitleOffset(1.135);
   axisLine0.4109448946223->GetXaxis()->SetTitleFont(43);
   axisLine0.4109448946223->GetYaxis()->SetNdivisions(506);
   axisLine0.4109448946223->GetYaxis()->SetLabelFont(43);
   axisLine0.4109448946223->GetYaxis()->SetLabelOffset(0.0087);
   axisLine0.4109448946223->GetYaxis()->SetLabelSize(32);
   axisLine0.4109448946223->GetYaxis()->SetTitleSize(35);
   axisLine0.4109448946223->GetYaxis()->SetTitleOffset(1.32);
   axisLine0.4109448946223->GetYaxis()->SetTitleFont(43);
   axisLine0.4109448946223->Draw("SameL");
   
   TH2F *axisRes0.414756380773_copy27 = new TH2F("axisRes0.414756380773_copy27","",50,0,200,50,0.6,1.4);
   axisRes0.414756380773_copy27->SetDirectory(0);
   axisRes0.414756380773_copy27->SetMarkerStyle(20);
   axisRes0.414756380773_copy27->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axisRes0.414756380773_copy27->GetXaxis()->SetNdivisions(1005);
   axisRes0.414756380773_copy27->GetXaxis()->SetLabelFont(43);
   axisRes0.414756380773_copy27->GetXaxis()->SetLabelOffset(0.0105);
   axisRes0.414756380773_copy27->GetXaxis()->SetLabelSize(32);
   axisRes0.414756380773_copy27->GetXaxis()->SetTitleSize(35);
   axisRes0.414756380773_copy27->GetXaxis()->SetTickLength(0.04166667);
   axisRes0.414756380773_copy27->GetXaxis()->SetTitleOffset(1.135);
   axisRes0.414756380773_copy27->GetXaxis()->SetTitleFont(43);
   axisRes0.414756380773_copy27->GetYaxis()->SetTitle("Data/MC");
   axisRes0.414756380773_copy27->GetYaxis()->SetNdivisions(406);
   axisRes0.414756380773_copy27->GetYaxis()->SetLabelFont(43);
   axisRes0.414756380773_copy27->GetYaxis()->SetLabelOffset(0.0087);
   axisRes0.414756380773_copy27->GetYaxis()->SetLabelSize(32);
   axisRes0.414756380773_copy27->GetYaxis()->SetTitleSize(35);
   axisRes0.414756380773_copy27->GetYaxis()->SetTickLength(0.07142857);
   axisRes0.414756380773_copy27->GetYaxis()->SetTitleOffset(1.32);
   axisRes0.414756380773_copy27->GetYaxis()->SetTitleFont(43);
   axisRes0.414756380773_copy27->GetZaxis()->SetLabelFont(43);
   axisRes0.414756380773_copy27->GetZaxis()->SetLabelOffset(0.0087);
   axisRes0.414756380773_copy27->GetZaxis()->SetLabelSize(32);
   axisRes0.414756380773_copy27->GetZaxis()->SetTitleSize(35);
   axisRes0.414756380773_copy27->GetZaxis()->SetTitleOffset(1.32);
   axisRes0.414756380773_copy27->GetZaxis()->SetTitleFont(43);
   axisRes0.414756380773_copy27->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_1->Modified();
   cv2j1t_mtw_qcdnone0.527366624005->cd();
  
// ------------>Primitives in pad: cv2j1t_mtw_qcdnone0.527366624005_2
   TPad *cv2j1t_mtw_qcdnone0.527366624005_2 = new TPad("cv2j1t_mtw_qcdnone0.527366624005_2", "",0,0,1,1);
   cv2j1t_mtw_qcdnone0.527366624005_2->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_2->cd();
   cv2j1t_mtw_qcdnone0.527366624005_2->Range(-46.66667,-6277.158,286.6667,11657.58);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFillColor(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFillStyle(4000);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetBorderSize(2);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetTickx(1);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetTicky(1);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetLeftMargin(0.14);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetRightMargin(0.26);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetTopMargin(0.08);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetBottomMargin(0.35);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameBorderMode(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameFillStyle(0);
   cv2j1t_mtw_qcdnone0.527366624005_2->SetFrameBorderMode(0);
   
   TH2F *axis0.098983541046628 = new TH2F("axis0.098983541046628","",50,0,200,50,0,10222.8);
   axis0.098983541046628->SetMarkerStyle(20);
   axis0.098983541046628->GetXaxis()->SetNdivisions(1005);
   axis0.098983541046628->GetXaxis()->SetLabelFont(43);
   axis0.098983541046628->GetXaxis()->SetLabelOffset(0.0105);
   axis0.098983541046628->GetXaxis()->SetLabelSize(0);
   axis0.098983541046628->GetXaxis()->SetTitleSize(35);
   axis0.098983541046628->GetXaxis()->SetTickLength(0.025);
   axis0.098983541046628->GetXaxis()->SetTitleOffset(1.135);
   axis0.098983541046628->GetXaxis()->SetTitleFont(43);
   axis0.098983541046628->GetYaxis()->SetTitle("Events / bin");
   axis0.098983541046628->GetYaxis()->SetNdivisions(506);
   axis0.098983541046628->GetYaxis()->SetLabelFont(43);
   axis0.098983541046628->GetYaxis()->SetLabelOffset(0.0087);
   axis0.098983541046628->GetYaxis()->SetLabelSize(32);
   axis0.098983541046628->GetYaxis()->SetTitleSize(35);
   axis0.098983541046628->GetYaxis()->SetTickLength(0.02631579);
   axis0.098983541046628->GetYaxis()->SetTitleOffset(1.32);
   axis0.098983541046628->GetYaxis()->SetTitleFont(43);
   axis0.098983541046628->GetZaxis()->SetLabelFont(43);
   axis0.098983541046628->GetZaxis()->SetLabelOffset(0.0087);
   axis0.098983541046628->GetZaxis()->SetLabelSize(32);
   axis0.098983541046628->GetZaxis()->SetTitleSize(35);
   axis0.098983541046628->GetZaxis()->SetTitleOffset(1.32);
   axis0.098983541046628->GetZaxis()->SetTitleFont(43);
   axis0.098983541046628->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis20[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *_stack_3 = new TH1F("_stack_3","",20, xAxis20);
   _stack_3->SetMinimum(-10.64599);
   _stack_3->SetMaximum(447.2313);
   _stack_3->SetDirectory(0);
   _stack_3->SetStats(0);
   _stack_3->SetMarkerStyle(20);
   _stack_3->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W)");
   _stack_3->GetXaxis()->SetNdivisions(1005);
   _stack_3->GetXaxis()->SetLabelFont(43);
   _stack_3->GetXaxis()->SetLabelOffset(0.0105);
   _stack_3->GetXaxis()->SetLabelSize(32);
   _stack_3->GetXaxis()->SetTitleSize(35);
   _stack_3->GetXaxis()->SetTickLength(0.05);
   _stack_3->GetXaxis()->SetTitleOffset(1.135);
   _stack_3->GetXaxis()->SetTitleFont(43);
   _stack_3->GetYaxis()->SetTitle("Events");
   _stack_3->GetYaxis()->SetNdivisions(506);
   _stack_3->GetYaxis()->SetLabelFont(43);
   _stack_3->GetYaxis()->SetLabelOffset(0.0087);
   _stack_3->GetYaxis()->SetLabelSize(32);
   _stack_3->GetYaxis()->SetTitleSize(35);
   _stack_3->GetYaxis()->SetTitleOffset(1.32);
   _stack_3->GetYaxis()->SetTitleFont(43);
   _stack_3->GetZaxis()->SetLabelFont(43);
   _stack_3->GetZaxis()->SetLabelOffset(0.0087);
   _stack_3->GetZaxis()->SetLabelSize(32);
   _stack_3->GetZaxis()->SetTitleSize(35);
   _stack_3->GetZaxis()->SetTitleOffset(1.32);
   _stack_3->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_3);
   
   Double_t xAxis21[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttChannel0.53456759249129 = new TH1F("setHisttChannel0.53456759249129","",20, xAxis21);
   setHisttChannel0.53456759249129->SetBinContent(1,8.087836);
   setHisttChannel0.53456759249129->SetBinContent(2,11.01016);
   setHisttChannel0.53456759249129->SetBinContent(3,13.56988);
   setHisttChannel0.53456759249129->SetBinContent(4,16.28394);
   setHisttChannel0.53456759249129->SetBinContent(5,21.41468);
   setHisttChannel0.53456759249129->SetBinContent(6,29.72439);
   setHisttChannel0.53456759249129->SetBinContent(7,35.81997);
   setHisttChannel0.53456759249129->SetBinContent(8,46.84268);
   setHisttChannel0.53456759249129->SetBinContent(9,32.08596);
   setHisttChannel0.53456759249129->SetBinContent(10,20.32766);
   setHisttChannel0.53456759249129->SetBinContent(11,7.323114);
   setHisttChannel0.53456759249129->SetBinContent(12,2.974015);
   setHisttChannel0.53456759249129->SetBinContent(13,0.9108415);
   setHisttChannel0.53456759249129->SetBinContent(14,0.5587255);
   setHisttChannel0.53456759249129->SetBinContent(15,-0.1650749);
   setHisttChannel0.53456759249129->SetBinContent(16,0.21705);
   setHisttChannel0.53456759249129->SetBinContent(17,0.03483018);
   setHisttChannel0.53456759249129->SetBinContent(18,0.03371138);
   setHisttChannel0.53456759249129->SetBinContent(19,0.0367455);
   setHisttChannel0.53456759249129->SetBinContent(20,0.06648155);
   setHisttChannel0.53456759249129->SetBinError(1,1.260114);
   setHisttChannel0.53456759249129->SetBinError(2,1.311123);
   setHisttChannel0.53456759249129->SetBinError(3,1.447195);
   setHisttChannel0.53456759249129->SetBinError(4,1.661619);
   setHisttChannel0.53456759249129->SetBinError(5,1.882175);
   setHisttChannel0.53456759249129->SetBinError(6,2.225205);
   setHisttChannel0.53456759249129->SetBinError(7,2.529589);
   setHisttChannel0.53456759249129->SetBinError(8,2.731693);
   setHisttChannel0.53456759249129->SetBinError(9,2.446505);
   setHisttChannel0.53456759249129->SetBinError(10,1.78247);
   setHisttChannel0.53456759249129->SetBinError(11,1.105185);
   setHisttChannel0.53456759249129->SetBinError(12,0.7018241);
   setHisttChannel0.53456759249129->SetBinError(13,0.4008958);
   setHisttChannel0.53456759249129->SetBinError(14,0.2621036);
   setHisttChannel0.53456759249129->SetBinError(15,0.1554383);
   setHisttChannel0.53456759249129->SetBinError(16,0.1411192);
   setHisttChannel0.53456759249129->SetBinError(17,0.07031754);
   setHisttChannel0.53456759249129->SetBinError(18,0.03246314);
   setHisttChannel0.53456759249129->SetBinError(19,0.09765945);
   setHisttChannel0.53456759249129->SetBinError(20,0.06096686);
   setHisttChannel0.53456759249129->SetBinError(21,0.07312036);
   setHisttChannel0.53456759249129->SetEntries(38475);
   setHisttChannel0.53456759249129->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.53456759249129->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel0.53456759249129->SetLineColor(ci);
   setHisttChannel0.53456759249129->SetLineWidth(2);
   setHisttChannel0.53456759249129->SetMarkerStyle(20);
   setHisttChannel0.53456759249129->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.53456759249129->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.53456759249129->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.53456759249129->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.53456759249129->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.53456759249129->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.53456759249129->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.53456759249129->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.53456759249129->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.53456759249129->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.53456759249129->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.53456759249129->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.53456759249129->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.53456759249129->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.53456759249129->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.53456759249129->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.53456759249129->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.53456759249129->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.53456759249129->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.53456759249129->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.53456759249129->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel0.534567592491,"HIST F");
   Double_t xAxis22[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHisttWChannel0.030302060317930 = new TH1F("setHisttWChannel0.030302060317930","",20, xAxis22);
   setHisttWChannel0.030302060317930->SetBinContent(1,7.016223);
   setHisttWChannel0.030302060317930->SetBinContent(2,9.796518);
   setHisttWChannel0.030302060317930->SetBinContent(3,8.363532);
   setHisttWChannel0.030302060317930->SetBinContent(4,9.596544);
   setHisttWChannel0.030302060317930->SetBinContent(5,12.8193);
   setHisttWChannel0.030302060317930->SetBinContent(6,17.27636);
   setHisttWChannel0.030302060317930->SetBinContent(7,22.53098);
   setHisttWChannel0.030302060317930->SetBinContent(8,25.23438);
   setHisttWChannel0.030302060317930->SetBinContent(9,19.91965);
   setHisttWChannel0.030302060317930->SetBinContent(10,10.85109);
   setHisttWChannel0.030302060317930->SetBinContent(11,5.800218);
   setHisttWChannel0.030302060317930->SetBinContent(12,3.276957);
   setHisttWChannel0.030302060317930->SetBinContent(13,1.998522);
   setHisttWChannel0.030302060317930->SetBinContent(14,0.9188901);
   setHisttWChannel0.030302060317930->SetBinContent(15,0.7643659);
   setHisttWChannel0.030302060317930->SetBinContent(16,0.4214657);
   setHisttWChannel0.030302060317930->SetBinContent(18,0.1120388);
   setHisttWChannel0.030302060317930->SetBinContent(19,0.2217521);
   setHisttWChannel0.030302060317930->SetBinContent(20,1.152352);
   setHisttWChannel0.030302060317930->SetBinError(1,0.86959);
   setHisttWChannel0.030302060317930->SetBinError(2,1.053812);
   setHisttWChannel0.030302060317930->SetBinError(3,0.9651265);
   setHisttWChannel0.030302060317930->SetBinError(4,1.017937);
   setHisttWChannel0.030302060317930->SetBinError(5,1.197316);
   setHisttWChannel0.030302060317930->SetBinError(6,1.374347);
   setHisttWChannel0.030302060317930->SetBinError(7,1.58041);
   setHisttWChannel0.030302060317930->SetBinError(8,1.665666);
   setHisttWChannel0.030302060317930->SetBinError(9,1.482243);
   setHisttWChannel0.030302060317930->SetBinError(10,1.079819);
   setHisttWChannel0.030302060317930->SetBinError(11,0.7833057);
   setHisttWChannel0.030302060317930->SetBinError(12,0.6040863);
   setHisttWChannel0.030302060317930->SetBinError(13,0.4639043);
   setHisttWChannel0.030302060317930->SetBinError(14,0.3260544);
   setHisttWChannel0.030302060317930->SetBinError(15,0.292893);
   setHisttWChannel0.030302060317930->SetBinError(16,0.2140169);
   setHisttWChannel0.030302060317930->SetBinError(18,0.1120388);
   setHisttWChannel0.030302060317930->SetBinError(19,0.1769596);
   setHisttWChannel0.030302060317930->SetBinError(20,0.1071843);
   setHisttWChannel0.030302060317930->SetBinError(21,0.3482839);
   setHisttWChannel0.030302060317930->SetEntries(1599);
   setHisttWChannel0.030302060317930->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWChannel0.030302060317930->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWChannel0.030302060317930->SetLineColor(ci);
   setHisttWChannel0.030302060317930->SetLineWidth(2);
   setHisttWChannel0.030302060317930->SetMarkerStyle(20);
   setHisttWChannel0.030302060317930->GetXaxis()->SetNdivisions(1005);
   setHisttWChannel0.030302060317930->GetXaxis()->SetLabelFont(43);
   setHisttWChannel0.030302060317930->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWChannel0.030302060317930->GetXaxis()->SetLabelSize(32);
   setHisttWChannel0.030302060317930->GetXaxis()->SetTitleSize(35);
   setHisttWChannel0.030302060317930->GetXaxis()->SetTickLength(0.05);
   setHisttWChannel0.030302060317930->GetXaxis()->SetTitleOffset(1.135);
   setHisttWChannel0.030302060317930->GetXaxis()->SetTitleFont(43);
   setHisttWChannel0.030302060317930->GetYaxis()->SetNdivisions(506);
   setHisttWChannel0.030302060317930->GetYaxis()->SetLabelFont(43);
   setHisttWChannel0.030302060317930->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.030302060317930->GetYaxis()->SetLabelSize(32);
   setHisttWChannel0.030302060317930->GetYaxis()->SetTitleSize(35);
   setHisttWChannel0.030302060317930->GetYaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.030302060317930->GetYaxis()->SetTitleFont(43);
   setHisttWChannel0.030302060317930->GetZaxis()->SetLabelFont(43);
   setHisttWChannel0.030302060317930->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWChannel0.030302060317930->GetZaxis()->SetLabelSize(32);
   setHisttWChannel0.030302060317930->GetZaxis()->SetTitleSize(35);
   setHisttWChannel0.030302060317930->GetZaxis()->SetTitleOffset(1.32);
   setHisttWChannel0.030302060317930->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWChannel0.0303020603179,"HIST F");
   Double_t xAxis23[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistTTJets0.023118414643731 = new TH1F("setHistTTJets0.023118414643731","",20, xAxis23);
   setHistTTJets0.023118414643731->SetBinContent(1,94.48471);
   setHistTTJets0.023118414643731->SetBinContent(2,99.66187);
   setHistTTJets0.023118414643731->SetBinContent(3,111.7288);
   setHistTTJets0.023118414643731->SetBinContent(4,133.7336);
   setHistTTJets0.023118414643731->SetBinContent(5,163.2077);
   setHistTTJets0.023118414643731->SetBinContent(6,201.0842);
   setHistTTJets0.023118414643731->SetBinContent(7,247.9781);
   setHistTTJets0.023118414643731->SetBinContent(8,270.1137);
   setHistTTJets0.023118414643731->SetBinContent(9,228.3596);
   setHistTTJets0.023118414643731->SetBinContent(10,147.0526);
   setHistTTJets0.023118414643731->SetBinContent(11,86.16969);
   setHistTTJets0.023118414643731->SetBinContent(12,50.26747);
   setHistTTJets0.023118414643731->SetBinContent(13,32.55662);
   setHistTTJets0.023118414643731->SetBinContent(14,21.2656);
   setHistTTJets0.023118414643731->SetBinContent(15,13.22168);
   setHistTTJets0.023118414643731->SetBinContent(16,9.901967);
   setHistTTJets0.023118414643731->SetBinContent(17,7.852123);
   setHistTTJets0.023118414643731->SetBinContent(18,5.348958);
   setHistTTJets0.023118414643731->SetBinContent(19,4.638088);
   setHistTTJets0.023118414643731->SetBinContent(20,15.18294);
   setHistTTJets0.023118414643731->SetBinError(1,1.595302);
   setHistTTJets0.023118414643731->SetBinError(2,1.633442);
   setHistTTJets0.023118414643731->SetBinError(3,1.733001);
   setHistTTJets0.023118414643731->SetBinError(4,1.893718);
   setHistTTJets0.023118414643731->SetBinError(5,2.09703);
   setHistTTJets0.023118414643731->SetBinError(6,2.328179);
   setHistTTJets0.023118414643731->SetBinError(7,2.588263);
   setHistTTJets0.023118414643731->SetBinError(8,2.699549);
   setHistTTJets0.023118414643731->SetBinError(9,2.479968);
   setHistTTJets0.023118414643731->SetBinError(10,1.991723);
   setHistTTJets0.023118414643731->SetBinError(11,1.523802);
   setHistTTJets0.023118414643731->SetBinError(12,1.162989);
   setHistTTJets0.023118414643731->SetBinError(13,0.9413874);
   setHistTTJets0.023118414643731->SetBinError(14,0.759482);
   setHistTTJets0.023118414643731->SetBinError(15,0.5995104);
   setHistTTJets0.023118414643731->SetBinError(16,0.5175628);
   setHistTTJets0.023118414643731->SetBinError(17,0.4636065);
   setHistTTJets0.023118414643731->SetBinError(18,0.3801249);
   setHistTTJets0.023118414643731->SetBinError(19,0.3584467);
   setHistTTJets0.023118414643731->SetBinError(20,0.2761464);
   setHistTTJets0.023118414643731->SetBinError(21,0.5789017);
   setHistTTJets0.023118414643731->SetEntries(79948);
   setHistTTJets0.023118414643731->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets0.023118414643731->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets0.023118414643731->SetLineColor(ci);
   setHistTTJets0.023118414643731->SetLineWidth(2);
   setHistTTJets0.023118414643731->SetMarkerStyle(20);
   setHistTTJets0.023118414643731->GetXaxis()->SetNdivisions(1005);
   setHistTTJets0.023118414643731->GetXaxis()->SetLabelFont(43);
   setHistTTJets0.023118414643731->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets0.023118414643731->GetXaxis()->SetLabelSize(32);
   setHistTTJets0.023118414643731->GetXaxis()->SetTitleSize(35);
   setHistTTJets0.023118414643731->GetXaxis()->SetTickLength(0.05);
   setHistTTJets0.023118414643731->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets0.023118414643731->GetXaxis()->SetTitleFont(43);
   setHistTTJets0.023118414643731->GetYaxis()->SetNdivisions(506);
   setHistTTJets0.023118414643731->GetYaxis()->SetLabelFont(43);
   setHistTTJets0.023118414643731->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.023118414643731->GetYaxis()->SetLabelSize(32);
   setHistTTJets0.023118414643731->GetYaxis()->SetTitleSize(35);
   setHistTTJets0.023118414643731->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets0.023118414643731->GetYaxis()->SetTitleFont(43);
   setHistTTJets0.023118414643731->GetZaxis()->SetLabelFont(43);
   setHistTTJets0.023118414643731->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets0.023118414643731->GetZaxis()->SetLabelSize(32);
   setHistTTJets0.023118414643731->GetZaxis()->SetTitleSize(35);
   setHistTTJets0.023118414643731->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets0.023118414643731->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets0.0231184146437,"HIST F");
   Double_t xAxis24[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsAMCHF0.58387243036832 = new TH1F("setHistWJetsAMCHF0.58387243036832","",20, xAxis24);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(1,4.744401);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(2,33.06889);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(3,26.59955);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(4,53.51707);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(5,24.27817);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(6,41.1499);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(7,73.59148);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(8,54.34789);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(9,66.12911);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(10,29.95311);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(11,20.54561);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(12,3.659375);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(13,2.537576);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(14,3.459263);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(15,-4.102799);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(18,1.846327);
   setHistWJetsAMCHF0.58387243036832->SetBinContent(19,1.882285);
   setHistWJetsAMCHF0.58387243036832->SetBinError(1,10.30254);
   setHistWJetsAMCHF0.58387243036832->SetBinError(2,10.24377);
   setHistWJetsAMCHF0.58387243036832->SetBinError(3,11.4034);
   setHistWJetsAMCHF0.58387243036832->SetBinError(4,13.91754);
   setHistWJetsAMCHF0.58387243036832->SetBinError(5,12.55301);
   setHistWJetsAMCHF0.58387243036832->SetBinError(6,15.69831);
   setHistWJetsAMCHF0.58387243036832->SetBinError(7,17.93963);
   setHistWJetsAMCHF0.58387243036832->SetBinError(8,19.36522);
   setHistWJetsAMCHF0.58387243036832->SetBinError(9,17.14855);
   setHistWJetsAMCHF0.58387243036832->SetBinError(10,12.77655);
   setHistWJetsAMCHF0.58387243036832->SetBinError(11,7.953341);
   setHistWJetsAMCHF0.58387243036832->SetBinError(12,4.365496);
   setHistWJetsAMCHF0.58387243036832->SetBinError(13,2.52597);
   setHistWJetsAMCHF0.58387243036832->SetBinError(14,3.172944);
   setHistWJetsAMCHF0.58387243036832->SetBinError(15,2.488883);
   setHistWJetsAMCHF0.58387243036832->SetBinError(18,1.846327);
   setHistWJetsAMCHF0.58387243036832->SetBinError(19,1.882284);
   setHistWJetsAMCHF0.58387243036832->SetEntries(909);
   setHistWJetsAMCHF0.58387243036832->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistWJetsAMCHF0.58387243036832->SetFillColor(ci);

   ci = TColor::GetColor("#065718");
   setHistWJetsAMCHF0.58387243036832->SetLineColor(ci);
   setHistWJetsAMCHF0.58387243036832->SetLineWidth(2);
   setHistWJetsAMCHF0.58387243036832->SetMarkerStyle(20);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCHF0.58387243036832->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCHF0.58387243036832->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCHF0.58387243036832->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCHF0.58387243036832->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCHF0.58387243036832->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCHF0.58387243036832->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCHF0.58387243036832->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCHF0.58387243036832->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCHF0.58387243036832->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCHF0.58387243036832->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCHF0.58387243036832->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCHF0.58387243036832->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCHF0.58387243036832->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCHF0.58387243036832->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCHF0.583872430368,"HIST F");
   Double_t xAxis25[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistWJetsAMCLF0.66223439911733 = new TH1F("setHistWJetsAMCLF0.66223439911733","",20, xAxis25);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(1,17.69576);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(2,8.879127);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(3,3.216045);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(4,12.01204);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(5,10.9304);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(6,16.63528);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(7,25.71717);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(8,17.86061);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(9,9.498536);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(10,8.169235);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(11,3.782187);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(12,2.37103);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(14,-1.725123);
   setHistWJetsAMCLF0.66223439911733->SetBinContent(15,-0.8397298);
   setHistWJetsAMCLF0.66223439911733->SetBinError(1,6.206346);
   setHistWJetsAMCLF0.66223439911733->SetBinError(2,5.876058);
   setHistWJetsAMCLF0.66223439911733->SetBinError(3,6.670414);
   setHistWJetsAMCLF0.66223439911733->SetBinError(4,6.284022);
   setHistWJetsAMCLF0.66223439911733->SetBinError(5,7.622131);
   setHistWJetsAMCLF0.66223439911733->SetBinError(6,9.688232);
   setHistWJetsAMCLF0.66223439911733->SetBinError(7,11.27269);
   setHistWJetsAMCLF0.66223439911733->SetBinError(8,11.31556);
   setHistWJetsAMCLF0.66223439911733->SetBinError(9,9.597673);
   setHistWJetsAMCLF0.66223439911733->SetBinError(10,7.177782);
   setHistWJetsAMCLF0.66223439911733->SetBinError(11,4.982489);
   setHistWJetsAMCLF0.66223439911733->SetBinError(12,1.74648);
   setHistWJetsAMCLF0.66223439911733->SetBinError(14,1.725123);
   setHistWJetsAMCLF0.66223439911733->SetBinError(15,0.8397298);
   setHistWJetsAMCLF0.66223439911733->SetEntries(264);
   setHistWJetsAMCLF0.66223439911733->SetDirectory(0);

   ci = TColor::GetColor("#19f266");
   setHistWJetsAMCLF0.66223439911733->SetFillColor(ci);

   ci = TColor::GetColor("#0f913d");
   setHistWJetsAMCLF0.66223439911733->SetLineColor(ci);
   setHistWJetsAMCLF0.66223439911733->SetLineWidth(2);
   setHistWJetsAMCLF0.66223439911733->SetMarkerStyle(20);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCLF0.66223439911733->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCLF0.66223439911733->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCLF0.66223439911733->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCLF0.66223439911733->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCLF0.66223439911733->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCLF0.66223439911733->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCLF0.66223439911733->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCLF0.66223439911733->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCLF0.66223439911733->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCLF0.66223439911733->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCLF0.66223439911733->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCLF0.66223439911733->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCLF0.66223439911733->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCLF0.66223439911733->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCLF0.662234399117,"HIST F");
   Double_t xAxis26[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistDY0.69346201180234 = new TH1F("setHistDY0.69346201180234","",20, xAxis26);
   setHistDY0.69346201180234->SetBinContent(1,5.07742);
   setHistDY0.69346201180234->SetBinContent(2,3.663143);
   setHistDY0.69346201180234->SetBinContent(3,13.34641);
   setHistDY0.69346201180234->SetBinContent(4,9.34743);
   setHistDY0.69346201180234->SetBinContent(5,7.91916);
   setHistDY0.69346201180234->SetBinContent(6,4.187527);
   setHistDY0.69346201180234->SetBinContent(7,-5.767086);
   setHistDY0.69346201180234->SetBinContent(8,11.53537);
   setHistDY0.69346201180234->SetBinContent(9,2.106764);
   setHistDY0.69346201180234->SetBinContent(10,-3.17305);
   setHistDY0.69346201180234->SetBinContent(11,5.287077);
   setHistDY0.69346201180234->SetBinContent(12,-1.23083);
   setHistDY0.69346201180234->SetBinContent(13,1.495288);
   setHistDY0.69346201180234->SetBinError(1,6.362282);
   setHistDY0.69346201180234->SetBinError(2,5.440089);
   setHistDY0.69346201180234->SetBinError(3,5.587097);
   setHistDY0.69346201180234->SetBinError(4,5.520844);
   setHistDY0.69346201180234->SetBinError(5,4.274266);
   setHistDY0.69346201180234->SetBinError(6,3.523681);
   setHistDY0.69346201180234->SetBinError(7,4.878905);
   setHistDY0.69346201180234->SetBinError(8,5.415911);
   setHistDY0.69346201180234->SetBinError(9,3.347704);
   setHistDY0.69346201180234->SetBinError(10,2.72355);
   setHistDY0.69346201180234->SetBinError(11,2.645014);
   setHistDY0.69346201180234->SetBinError(12,1.23083);
   setHistDY0.69346201180234->SetBinError(13,1.495288);
   setHistDY0.69346201180234->SetEntries(194);
   setHistDY0.69346201180234->SetDirectory(0);

   ci = TColor::GetColor("#1959d8");
   setHistDY0.69346201180234->SetFillColor(ci);

   ci = TColor::GetColor("#0f3582");
   setHistDY0.69346201180234->SetLineColor(ci);
   setHistDY0.69346201180234->SetLineWidth(2);
   setHistDY0.69346201180234->SetMarkerStyle(20);
   setHistDY0.69346201180234->GetXaxis()->SetNdivisions(1005);
   setHistDY0.69346201180234->GetXaxis()->SetLabelFont(43);
   setHistDY0.69346201180234->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY0.69346201180234->GetXaxis()->SetLabelSize(32);
   setHistDY0.69346201180234->GetXaxis()->SetTitleSize(35);
   setHistDY0.69346201180234->GetXaxis()->SetTickLength(0.05);
   setHistDY0.69346201180234->GetXaxis()->SetTitleOffset(1.135);
   setHistDY0.69346201180234->GetXaxis()->SetTitleFont(43);
   setHistDY0.69346201180234->GetYaxis()->SetNdivisions(506);
   setHistDY0.69346201180234->GetYaxis()->SetLabelFont(43);
   setHistDY0.69346201180234->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY0.69346201180234->GetYaxis()->SetLabelSize(32);
   setHistDY0.69346201180234->GetYaxis()->SetTitleSize(35);
   setHistDY0.69346201180234->GetYaxis()->SetTitleOffset(1.32);
   setHistDY0.69346201180234->GetYaxis()->SetTitleFont(43);
   setHistDY0.69346201180234->GetZaxis()->SetLabelFont(43);
   setHistDY0.69346201180234->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY0.69346201180234->GetZaxis()->SetLabelSize(32);
   setHistDY0.69346201180234->GetZaxis()->SetTitleSize(35);
   setHistDY0.69346201180234->GetZaxis()->SetTitleOffset(1.32);
   setHistDY0.69346201180234->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY0.693462011802,"HIST F");
   ->Draw("same");
   Double_t xAxis27[21] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
   
   TH1F *setHistdata760.28815435678235 = new TH1F("setHistdata760.28815435678235","",20, xAxis27);
   setHistdata760.28815435678235->SetBinContent(1,7302);
   setHistdata760.28815435678235->SetBinContent(2,6436);
   setHistdata760.28815435678235->SetBinContent(3,5399);
   setHistdata760.28815435678235->SetBinContent(4,4054);
   setHistdata760.28815435678235->SetBinContent(5,2901);
   setHistdata760.28815435678235->SetBinContent(6,1910);
   setHistdata760.28815435678235->SetBinContent(7,1161);
   setHistdata760.28815435678235->SetBinContent(8,796);
   setHistdata760.28815435678235->SetBinContent(9,526);
   setHistdata760.28815435678235->SetBinContent(10,327);
   setHistdata760.28815435678235->SetBinContent(11,159);
   setHistdata760.28815435678235->SetBinContent(12,95);
   setHistdata760.28815435678235->SetBinContent(13,42);
   setHistdata760.28815435678235->SetBinContent(14,30);
   setHistdata760.28815435678235->SetBinContent(15,21);
   setHistdata760.28815435678235->SetBinContent(16,9);
   setHistdata760.28815435678235->SetBinContent(17,5);
   setHistdata760.28815435678235->SetBinContent(18,8);
   setHistdata760.28815435678235->SetBinContent(19,2);
   setHistdata760.28815435678235->SetBinContent(20,14);
   setHistdata760.28815435678235->SetBinError(1,85.45174);
   setHistdata760.28815435678235->SetBinError(2,80.22468);
   setHistdata760.28815435678235->SetBinError(3,73.47789);
   setHistdata760.28815435678235->SetBinError(4,63.67103);
   setHistdata760.28815435678235->SetBinError(5,53.86093);
   setHistdata760.28815435678235->SetBinError(6,43.70355);
   setHistdata760.28815435678235->SetBinError(7,34.07345);
   setHistdata760.28815435678235->SetBinError(8,28.21347);
   setHistdata760.28815435678235->SetBinError(9,22.93469);
   setHistdata760.28815435678235->SetBinError(10,18.08314);
   setHistdata760.28815435678235->SetBinError(11,12.60952);
   setHistdata760.28815435678235->SetBinError(12,9.746794);
   setHistdata760.28815435678235->SetBinError(13,6.480741);
   setHistdata760.28815435678235->SetBinError(14,5.477226);
   setHistdata760.28815435678235->SetBinError(15,4.582576);
   setHistdata760.28815435678235->SetBinError(16,3);
   setHistdata760.28815435678235->SetBinError(17,2.236068);
   setHistdata760.28815435678235->SetBinError(18,2.828427);
   setHistdata760.28815435678235->SetBinError(19,1.414214);
   setHistdata760.28815435678235->SetBinError(20,2);
   setHistdata760.28815435678235->SetBinError(21,3.162278);
   setHistdata760.28815435678235->SetEntries(31197);
   setHistdata760.28815435678235->SetFillStyle(0);
   setHistdata760.28815435678235->SetMarkerStyle(20);
   setHistdata760.28815435678235->SetMarkerSize(1.15);
   setHistdata760.28815435678235->GetXaxis()->SetNdivisions(1005);
   setHistdata760.28815435678235->GetXaxis()->SetLabelFont(43);
   setHistdata760.28815435678235->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata760.28815435678235->GetXaxis()->SetLabelSize(32);
   setHistdata760.28815435678235->GetXaxis()->SetTitleSize(35);
   setHistdata760.28815435678235->GetXaxis()->SetTickLength(0.05);
   setHistdata760.28815435678235->GetXaxis()->SetTitleOffset(1.135);
   setHistdata760.28815435678235->GetXaxis()->SetTitleFont(43);
   setHistdata760.28815435678235->GetYaxis()->SetNdivisions(506);
   setHistdata760.28815435678235->GetYaxis()->SetLabelFont(43);
   setHistdata760.28815435678235->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678235->GetYaxis()->SetLabelSize(32);
   setHistdata760.28815435678235->GetYaxis()->SetTitleSize(35);
   setHistdata760.28815435678235->GetYaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678235->GetYaxis()->SetTitleFont(43);
   setHistdata760.28815435678235->GetZaxis()->SetLabelFont(43);
   setHistdata760.28815435678235->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata760.28815435678235->GetZaxis()->SetLabelSize(32);
   setHistdata760.28815435678235->GetZaxis()->SetTitleSize(35);
   setHistdata760.28815435678235->GetZaxis()->SetTitleOffset(1.32);
   setHistdata760.28815435678235->GetZaxis()->SetTitleFont(43);
   setHistdata760.28815435678235->Draw("PESame");
   
   TH2F *axis0.0989835410466_copy36 = new TH2F("axis0.0989835410466_copy36","",50,0,200,50,0,10222.8);
   axis0.0989835410466_copy36->SetDirectory(0);
   axis0.0989835410466_copy36->SetMarkerStyle(20);
   axis0.0989835410466_copy36->GetXaxis()->SetNdivisions(1005);
   axis0.0989835410466_copy36->GetXaxis()->SetLabelFont(43);
   axis0.0989835410466_copy36->GetXaxis()->SetLabelOffset(0.0105);
   axis0.0989835410466_copy36->GetXaxis()->SetLabelSize(0);
   axis0.0989835410466_copy36->GetXaxis()->SetTitleSize(35);
   axis0.0989835410466_copy36->GetXaxis()->SetTickLength(0.025);
   axis0.0989835410466_copy36->GetXaxis()->SetTitleOffset(1.135);
   axis0.0989835410466_copy36->GetXaxis()->SetTitleFont(43);
   axis0.0989835410466_copy36->GetYaxis()->SetTitle("Events / bin");
   axis0.0989835410466_copy36->GetYaxis()->SetNdivisions(506);
   axis0.0989835410466_copy36->GetYaxis()->SetLabelFont(43);
   axis0.0989835410466_copy36->GetYaxis()->SetLabelOffset(0.0087);
   axis0.0989835410466_copy36->GetYaxis()->SetLabelSize(32);
   axis0.0989835410466_copy36->GetYaxis()->SetTitleSize(35);
   axis0.0989835410466_copy36->GetYaxis()->SetTickLength(0.02631579);
   axis0.0989835410466_copy36->GetYaxis()->SetTitleOffset(1.32);
   axis0.0989835410466_copy36->GetYaxis()->SetTitleFont(43);
   axis0.0989835410466_copy36->GetZaxis()->SetLabelFont(43);
   axis0.0989835410466_copy36->GetZaxis()->SetLabelOffset(0.0087);
   axis0.0989835410466_copy36->GetZaxis()->SetLabelSize(32);
   axis0.0989835410466_copy36->GetZaxis()->SetTitleSize(35);
   axis0.0989835410466_copy36->GetZaxis()->SetTitleOffset(1.32);
   axis0.0989835410466_copy36->GetZaxis()->SetTitleFont(43);
   axis0.0989835410466_copy36->Draw("sameaxis");
   
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
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 2.3#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13TeV)");
   pt->Draw();
   cv2j1t_mtw_qcdnone0.527366624005_2->Modified();
   cv2j1t_mtw_qcdnone0.527366624005->cd();
   cv2j1t_mtw_qcdnone0.527366624005->Modified();
   cv2j1t_mtw_qcdnone0.527366624005->cd();
   cv2j1t_mtw_qcdnone0.527366624005->SetSelected(cv2j1t_mtw_qcdnone0.527366624005);
}
