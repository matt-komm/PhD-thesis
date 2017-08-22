void plots/3j2t/electron_3j2t_top_mass_qcdnone()
{
//=========Macro generated from canvas: cvelectron_3j2t_top_mass_qcdnone47602/
//=========  (Tue Aug 22 21:42:49 2017) by ROOT version6.02/05
   TCanvas *cvelectron_3j2t_top_mass_qcdnone47602 = new TCanvas("cvelectron_3j2t_top_mass_qcdnone47602", "",1,1,800,626);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cvelectron_3j2t_top_mass_qcdnone47602->SetHighLightColor(2);
   cvelectron_3j2t_top_mass_qcdnone47602->Range(0,0,1,1);
   cvelectron_3j2t_top_mass_qcdnone47602->SetFillColor(0);
   cvelectron_3j2t_top_mass_qcdnone47602->SetBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone47602->SetBorderSize(2);
   cvelectron_3j2t_top_mass_qcdnone47602->SetTickx(1);
   cvelectron_3j2t_top_mass_qcdnone47602->SetTicky(1);
   cvelectron_3j2t_top_mass_qcdnone47602->SetLeftMargin(0.1150442);
   cvelectron_3j2t_top_mass_qcdnone47602->SetRightMargin(0.227083);
   cvelectron_3j2t_top_mass_qcdnone47602->SetTopMargin(0.04002582);
   cvelectron_3j2t_top_mass_qcdnone47602->SetBottomMargin(0.08064517);
   cvelectron_3j2t_top_mass_qcdnone47602->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone47602->SetFrameLineWidth(0);
   cvelectron_3j2t_top_mass_qcdnone47602->SetFrameBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone47602->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: cvelectron_3j2t_top_mass_qcdnone47602_1
   TPad *cvelectron_3j2t_top_mass_qcdnone47602_1 = new TPad("cvelectron_3j2t_top_mass_qcdnone47602_1", "",0,0,1,1);
   cvelectron_3j2t_top_mass_qcdnone47602_1->Draw();
   cvelectron_3j2t_top_mass_qcdnone47602_1->cd();
   cvelectron_3j2t_top_mass_qcdnone47602_1->Range(6.66667,0.06666676,673.3333,3.87619);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetFillColor(0);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetFillStyle(4000);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetBorderSize(2);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetTickx(1);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetTicky(1);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetLeftMargin(0.14);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetRightMargin(0.26);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetTopMargin(0.65);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetBottomMargin(0.14);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetFrameBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone47602_1->SetFrameBorderMode(0);
   
   TH2F *axisRes414611314 = new TH2F("axisRes414611314","",50,100,500,50,0.6,1.4);
   axisRes414611314->SetMarkerStyle(20);
   axisRes414611314->GetXaxis()->SetTitle("top quark mass (GeV)");
   axisRes414611314->GetXaxis()->SetNdivisions(1005);
   axisRes414611314->GetXaxis()->SetLabelFont(43);
   axisRes414611314->GetXaxis()->SetLabelOffset(0.0105);
   axisRes414611314->GetXaxis()->SetLabelSize(32);
   axisRes414611314->GetXaxis()->SetTitleSize(35);
   axisRes414611314->GetXaxis()->SetTickLength(0.04166667);
   axisRes414611314->GetXaxis()->SetTitleOffset(1.135);
   axisRes414611314->GetXaxis()->SetTitleFont(43);
   axisRes414611314->GetYaxis()->SetTitle("Data/MC");
   axisRes414611314->GetYaxis()->SetNdivisions(406);
   axisRes414611314->GetYaxis()->SetLabelFont(43);
   axisRes414611314->GetYaxis()->SetLabelOffset(0.0087);
   axisRes414611314->GetYaxis()->SetLabelSize(32);
   axisRes414611314->GetYaxis()->SetTitleSize(35);
   axisRes414611314->GetYaxis()->SetTickLength(0.07142857);
   axisRes414611314->GetYaxis()->SetTitleOffset(1.32);
   axisRes414611314->GetYaxis()->SetTitleFont(43);
   axisRes414611314->GetZaxis()->SetLabelFont(43);
   axisRes414611314->GetZaxis()->SetLabelOffset(0.0087);
   axisRes414611314->GetZaxis()->SetLabelSize(32);
   axisRes414611314->GetZaxis()->SetTitleSize(35);
   axisRes414611314->GetZaxis()->SetTitleOffset(1.32);
   axisRes414611314->GetZaxis()->SetTitleFont(43);
   axisRes414611314->Draw("AXIS");
   TBox *box = new TBox(100,0.9363149,116,1.063685);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(100,0.9363149,116,1.063685);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(116,0.9731144,132,1.026886);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(116,0.9731144,132,1.026886);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(132,0.9835739,148,1.016426);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(132,0.9835739,148,1.016426);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(148,0.9886904,164,1.01131);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(148,0.9886904,164,1.01131);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(164,0.9901212,180,1.009879);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(164,0.9901212,180,1.009879);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.9891559,196,1.010844);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(180,0.9891559,196,1.010844);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(196,0.9851312,212,1.014869);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(196,0.9851312,212,1.014869);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(212,0.9814183,228,1.018582);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(212,0.9814183,228,1.018582);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(228,0.9817863,244,1.018214);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(228,0.9817863,244,1.018214);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(244,0.9788414,260,1.021159);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(244,0.9788414,260,1.021159);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(260,0.9778185,276,1.022182);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(260,0.9778185,276,1.022182);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(276,0.9736174,292,1.026383);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(276,0.9736174,292,1.026383);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(292,0.9709021,308,1.029098);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(292,0.9709021,308,1.029098);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(308,0.9737644,324,1.026236);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(308,0.9737644,324,1.026236);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(324,0.9667912,340,1.033209);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(324,0.9667912,340,1.033209);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(340,0.9601047,356,1.039895);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(340,0.9601047,356,1.039895);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(356,0.9638957,372,1.036104);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(356,0.9638957,372,1.036104);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(372,0.9537986,388,1.046201);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(372,0.9537986,388,1.046201);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(388,0.948589,404,1.051411);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(388,0.948589,404,1.051411);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(404,0.9548775,420,1.045122);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(404,0.9548775,420,1.045122);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(420,0.9344999,436,1.0655);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(420,0.9344999,436,1.0655);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(436,0.9157226,452,1.084277);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(436,0.9157226,452,1.084277);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(452,0.9385221,468,1.061478);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(452,0.9385221,468,1.061478);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(468,0.9191768,484,1.080823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(468,0.9191768,484,1.080823);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(484,0.9918233,500,1.008177);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3345);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   box = new TBox(484,0.9918233,500,1.008177);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   box->SetLineColor(ci);
   box->SetLineWidth(2);
   box->Draw();
   Double_t xAxis1011[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHistdata77805530361315 = new TH1F("setHistdata77805530361315","",25, xAxis1011);
   setHistdata77805530361315->SetBinContent(1,0.9353479);
   setHistdata77805530361315->SetBinContent(2,1.067337);
   setHistdata77805530361315->SetBinContent(3,0.990699);
   setHistdata77805530361315->SetBinContent(4,0.9927614);
   setHistdata77805530361315->SetBinContent(5,1.017508);
   setHistdata77805530361315->SetBinContent(6,0.9977691);
   setHistdata77805530361315->SetBinContent(7,0.9482426);
   setHistdata77805530361315->SetBinContent(8,0.9784953);
   setHistdata77805530361315->SetBinContent(9,0.9610478);
   setHistdata77805530361315->SetBinContent(10,0.9485494);
   setHistdata77805530361315->SetBinContent(11,0.8998193);
   setHistdata77805530361315->SetBinContent(12,0.9114699);
   setHistdata77805530361315->SetBinContent(13,0.9286554);
   setHistdata77805530361315->SetBinContent(14,0.9721254);
   setHistdata77805530361315->SetBinContent(15,0.864289);
   setHistdata77805530361315->SetBinContent(16,0.8963521);
   setHistdata77805530361315->SetBinContent(17,0.865995);
   setHistdata77805530361315->SetBinContent(18,0.8419459);
   setHistdata77805530361315->SetBinContent(19,0.9185017);
   setHistdata77805530361315->SetBinContent(20,0.9498165);
   setHistdata77805530361315->SetBinContent(21,0.914187);
   setHistdata77805530361315->SetBinContent(22,0.9260063);
   setHistdata77805530361315->SetBinContent(23,0.8826747);
   setHistdata77805530361315->SetBinContent(24,0.9096591);
   setHistdata77805530361315->SetBinContent(25,0.8683454);
   setHistdata77805530361315->SetBinError(0,2.645751);
   setHistdata77805530361315->SetBinError(1,0.05597926);
   setHistdata77805530361315->SetBinError(2,0.02972863);
   setHistdata77805530361315->SetBinError(3,0.01718348);
   setHistdata77805530361315->SetBinError(4,0.01252652);
   setHistdata77805530361315->SetBinError(5,0.01152249);
   setHistdata77805530361315->SetBinError(6,0.01215346);
   setHistdata77805530361315->SetBinError(7,0.01335818);
   setHistdata77805530361315->SetBinError(8,0.01563842);
   setHistdata77805530361315->SetBinError(9,0.01733659);
   setHistdata77805530361315->SetBinError(10,0.01849267);
   setHistdata77805530361315->SetBinError(11,0.01923235);
   setHistdata77805530361315->SetBinError(12,0.02136518);
   setHistdata77805530361315->SetBinError(13,0.02334071);
   setHistdata77805530361315->SetBinError(14,0.02638957);
   setHistdata77805530361315->SetBinError(15,0.02622673);
   setHistdata77805530361315->SetBinError(16,0.02870624);
   setHistdata77805530361315->SetBinError(17,0.03052231);
   setHistdata77805530361315->SetBinError(18,0.03255151);
   setHistdata77805530361315->SetBinError(19,0.03833752);
   setHistdata77805530361315->SetBinError(20,0.043353);
   setHistdata77805530361315->SetBinError(21,0.045259);
   setHistdata77805530361315->SetBinError(22,0.05021974);
   setHistdata77805530361315->SetBinError(23,0.05130442);
   setHistdata77805530361315->SetBinError(24,0.0566329);
   setHistdata77805530361315->SetBinError(25,0.008002089);
   setHistdata77805530361315->SetBinError(26,36.98648);
   setHistdata77805530361315->SetEntries(54807);
   setHistdata77805530361315->SetFillStyle(0);
   setHistdata77805530361315->SetMarkerStyle(20);
   setHistdata77805530361315->SetMarkerSize(1.15);
   setHistdata77805530361315->GetXaxis()->SetNdivisions(1005);
   setHistdata77805530361315->GetXaxis()->SetLabelFont(43);
   setHistdata77805530361315->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata77805530361315->GetXaxis()->SetLabelSize(32);
   setHistdata77805530361315->GetXaxis()->SetTitleSize(35);
   setHistdata77805530361315->GetXaxis()->SetTickLength(0.05);
   setHistdata77805530361315->GetXaxis()->SetTitleOffset(1.135);
   setHistdata77805530361315->GetXaxis()->SetTitleFont(43);
   setHistdata77805530361315->GetYaxis()->SetNdivisions(506);
   setHistdata77805530361315->GetYaxis()->SetLabelFont(43);
   setHistdata77805530361315->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata77805530361315->GetYaxis()->SetLabelSize(32);
   setHistdata77805530361315->GetYaxis()->SetTitleSize(35);
   setHistdata77805530361315->GetYaxis()->SetTitleOffset(1.32);
   setHistdata77805530361315->GetYaxis()->SetTitleFont(43);
   setHistdata77805530361315->GetZaxis()->SetLabelFont(43);
   setHistdata77805530361315->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata77805530361315->GetZaxis()->SetLabelSize(32);
   setHistdata77805530361315->GetZaxis()->SetTitleSize(35);
   setHistdata77805530361315->GetZaxis()->SetTitleOffset(1.32);
   setHistdata77805530361315->GetZaxis()->SetTitleFont(43);
   setHistdata77805530361315->Draw("PESame");
   
   TF1 *axisLine78024102 = new TF1("axisLine78024","1",100,500);
   axisLine78024102->SetFillColor(19);
   axisLine78024102->SetFillStyle(0);
   axisLine78024102->SetMarkerStyle(20);
   axisLine78024102->SetLineWidth(1);
   axisLine78024102->GetXaxis()->SetNdivisions(1005);
   axisLine78024102->GetXaxis()->SetLabelFont(43);
   axisLine78024102->GetXaxis()->SetLabelOffset(0.0105);
   axisLine78024102->GetXaxis()->SetLabelSize(32);
   axisLine78024102->GetXaxis()->SetTitleSize(35);
   axisLine78024102->GetXaxis()->SetTickLength(0.05);
   axisLine78024102->GetXaxis()->SetTitleOffset(1.135);
   axisLine78024102->GetXaxis()->SetTitleFont(43);
   axisLine78024102->GetYaxis()->SetNdivisions(506);
   axisLine78024102->GetYaxis()->SetLabelFont(43);
   axisLine78024102->GetYaxis()->SetLabelOffset(0.0087);
   axisLine78024102->GetYaxis()->SetLabelSize(32);
   axisLine78024102->GetYaxis()->SetTitleSize(35);
   axisLine78024102->GetYaxis()->SetTitleOffset(1.32);
   axisLine78024102->GetYaxis()->SetTitleFont(43);
   axisLine78024102->Draw("SameL");
   
   TH2F *axisRes41461_copy1316 = new TH2F("axisRes41461_copy1316","",50,100,500,50,0.6,1.4);
   axisRes41461_copy1316->SetDirectory(0);
   axisRes41461_copy1316->SetMarkerStyle(20);
   axisRes41461_copy1316->GetXaxis()->SetTitle("top quark mass (GeV)");
   axisRes41461_copy1316->GetXaxis()->SetNdivisions(1005);
   axisRes41461_copy1316->GetXaxis()->SetLabelFont(43);
   axisRes41461_copy1316->GetXaxis()->SetLabelOffset(0.0105);
   axisRes41461_copy1316->GetXaxis()->SetLabelSize(32);
   axisRes41461_copy1316->GetXaxis()->SetTitleSize(35);
   axisRes41461_copy1316->GetXaxis()->SetTickLength(0.04166667);
   axisRes41461_copy1316->GetXaxis()->SetTitleOffset(1.135);
   axisRes41461_copy1316->GetXaxis()->SetTitleFont(43);
   axisRes41461_copy1316->GetYaxis()->SetTitle("Data/MC");
   axisRes41461_copy1316->GetYaxis()->SetNdivisions(406);
   axisRes41461_copy1316->GetYaxis()->SetLabelFont(43);
   axisRes41461_copy1316->GetYaxis()->SetLabelOffset(0.0087);
   axisRes41461_copy1316->GetYaxis()->SetLabelSize(32);
   axisRes41461_copy1316->GetYaxis()->SetTitleSize(35);
   axisRes41461_copy1316->GetYaxis()->SetTickLength(0.07142857);
   axisRes41461_copy1316->GetYaxis()->SetTitleOffset(1.32);
   axisRes41461_copy1316->GetYaxis()->SetTitleFont(43);
   axisRes41461_copy1316->GetZaxis()->SetLabelFont(43);
   axisRes41461_copy1316->GetZaxis()->SetLabelOffset(0.0087);
   axisRes41461_copy1316->GetZaxis()->SetLabelSize(32);
   axisRes41461_copy1316->GetZaxis()->SetTitleSize(35);
   axisRes41461_copy1316->GetZaxis()->SetTitleOffset(1.32);
   axisRes41461_copy1316->GetZaxis()->SetTitleFont(43);
   axisRes41461_copy1316->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.08,0.322,0.135,0.378,"brNDC");
   pt->SetFillColor(0);
   pt->Draw();
   cvelectron_3j2t_top_mass_qcdnone47602_1->Modified();
   cvelectron_3j2t_top_mass_qcdnone47602->cd();
  
// ------------>Primitives in pad: cvelectron_3j2t_top_mass_qcdnone47602_2
   TPad *cvelectron_3j2t_top_mass_qcdnone47602_2 = new TPad("cvelectron_3j2t_top_mass_qcdnone47602_2", "",0,0,1,1);
   cvelectron_3j2t_top_mass_qcdnone47602_2->Draw();
   cvelectron_3j2t_top_mass_qcdnone47602_2->cd();
   cvelectron_3j2t_top_mass_qcdnone47602_2->Range(6.66667,-6847.191,673.3333,12716.21);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetFillColor(0);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetFillStyle(4000);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetBorderSize(2);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetTickx(1);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetTicky(1);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetLeftMargin(0.14);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetRightMargin(0.26);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetTopMargin(0.08);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetBottomMargin(0.35);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetFrameBorderMode(0);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetFrameFillStyle(0);
   cvelectron_3j2t_top_mass_qcdnone47602_2->SetFrameBorderMode(0);
   
   TH2F *axis347241317 = new TH2F("axis347241317","",50,100,500,50,0,11151.14);
   axis347241317->SetMarkerStyle(20);
   axis347241317->GetXaxis()->SetNdivisions(1005);
   axis347241317->GetXaxis()->SetLabelFont(43);
   axis347241317->GetXaxis()->SetLabelOffset(0.0105);
   axis347241317->GetXaxis()->SetLabelSize(0);
   axis347241317->GetXaxis()->SetTitleSize(35);
   axis347241317->GetXaxis()->SetTickLength(0.025);
   axis347241317->GetXaxis()->SetTitleOffset(1.135);
   axis347241317->GetXaxis()->SetTitleFont(43);
   axis347241317->GetYaxis()->SetTitle("Events / bin");
   axis347241317->GetYaxis()->SetNdivisions(506);
   axis347241317->GetYaxis()->SetLabelFont(43);
   axis347241317->GetYaxis()->SetLabelOffset(0.0087);
   axis347241317->GetYaxis()->SetLabelSize(32);
   axis347241317->GetYaxis()->SetTitleSize(35);
   axis347241317->GetYaxis()->SetTickLength(0.02631579);
   axis347241317->GetYaxis()->SetTitleOffset(1.32);
   axis347241317->GetYaxis()->SetTitleFont(43);
   axis347241317->GetZaxis()->SetLabelFont(43);
   axis347241317->GetZaxis()->SetLabelOffset(0.0087);
   axis347241317->GetZaxis()->SetLabelSize(32);
   axis347241317->GetZaxis()->SetTitleSize(35);
   axis347241317->GetZaxis()->SetTitleOffset(1.32);
   axis347241317->GetZaxis()->SetTitleFont(43);
   axis347241317->Draw("AXIS");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1012[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *_stack_101_stack_102 = new TH1F("_stack_101_stack_102","",25, xAxis1012);
   _stack_101_stack_102->SetMinimum(-31.86895);
   _stack_101_stack_102->SetMaximum(8047.014);
   _stack_101_stack_102->SetDirectory(0);
   _stack_101_stack_102->SetStats(0);
   _stack_101_stack_102->SetMarkerStyle(20);
   _stack_101_stack_102->GetXaxis()->SetNdivisions(1005);
   _stack_101_stack_102->GetXaxis()->SetLabelFont(43);
   _stack_101_stack_102->GetXaxis()->SetLabelOffset(0.0105);
   _stack_101_stack_102->GetXaxis()->SetLabelSize(32);
   _stack_101_stack_102->GetXaxis()->SetTitleSize(35);
   _stack_101_stack_102->GetXaxis()->SetTickLength(0.05);
   _stack_101_stack_102->GetXaxis()->SetTitleOffset(1.135);
   _stack_101_stack_102->GetXaxis()->SetTitleFont(43);
   _stack_101_stack_102->GetYaxis()->SetNdivisions(506);
   _stack_101_stack_102->GetYaxis()->SetLabelFont(43);
   _stack_101_stack_102->GetYaxis()->SetLabelOffset(0.0087);
   _stack_101_stack_102->GetYaxis()->SetLabelSize(32);
   _stack_101_stack_102->GetYaxis()->SetTitleSize(35);
   _stack_101_stack_102->GetYaxis()->SetTitleOffset(1.32);
   _stack_101_stack_102->GetYaxis()->SetTitleFont(43);
   _stack_101_stack_102->GetZaxis()->SetLabelFont(43);
   _stack_101_stack_102->GetZaxis()->SetLabelOffset(0.0087);
   _stack_101_stack_102->GetZaxis()->SetLabelSize(32);
   _stack_101_stack_102->GetZaxis()->SetTitleSize(35);
   _stack_101_stack_102->GetZaxis()->SetTitleOffset(1.32);
   _stack_101_stack_102->GetZaxis()->SetTitleFont(43);
   ->SetHistogram(_stack_101_stack_102);
   
   Double_t xAxis1013[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHisttChannel568231318 = new TH1F("setHisttChannel568231318","",25, xAxis1013);
   setHisttChannel568231318->SetBinContent(1,15.82769);
   setHisttChannel568231318->SetBinContent(2,72.13203);
   setHisttChannel568231318->SetBinContent(3,196.7371);
   setHisttChannel568231318->SetBinContent(4,373.2619);
   setHisttChannel568231318->SetBinContent(5,446.651);
   setHisttChannel568231318->SetBinContent(6,386.8042);
   setHisttChannel568231318->SetBinContent(7,275.0158);
   setHisttChannel568231318->SetBinContent(8,205.8481);
   setHisttChannel568231318->SetBinContent(9,156.6357);
   setHisttChannel568231318->SetBinContent(10,141.8607);
   setHisttChannel568231318->SetBinContent(11,122.8331);
   setHisttChannel568231318->SetBinContent(12,98.90838);
   setHisttChannel568231318->SetBinContent(13,87.18623);
   setHisttChannel568231318->SetBinContent(14,76.73137);
   setHisttChannel568231318->SetBinContent(15,62.75846);
   setHisttChannel568231318->SetBinContent(16,57.94115);
   setHisttChannel568231318->SetBinContent(17,44.71965);
   setHisttChannel568231318->SetBinContent(18,39.17535);
   setHisttChannel568231318->SetBinContent(19,34.53305);
   setHisttChannel568231318->SetBinContent(20,29.77507);
   setHisttChannel568231318->SetBinContent(21,25.25611);
   setHisttChannel568231318->SetBinContent(22,24.73587);
   setHisttChannel568231318->SetBinContent(23,21.78263);
   setHisttChannel568231318->SetBinContent(24,17.35462);
   setHisttChannel568231318->SetBinContent(25,105.0302);
   setHisttChannel568231318->SetBinError(0,0.1893637);
   setHisttChannel568231318->SetBinError(1,1.032265);
   setHisttChannel568231318->SetBinError(2,2.253616);
   setHisttChannel568231318->SetBinError(3,3.72206);
   setHisttChannel568231318->SetBinError(4,5.142393);
   setHisttChannel568231318->SetBinError(5,5.6214);
   setHisttChannel568231318->SetBinError(6,5.238677);
   setHisttChannel568231318->SetBinError(7,4.419703);
   setHisttChannel568231318->SetBinError(8,3.820074);
   setHisttChannel568231318->SetBinError(9,3.341409);
   setHisttChannel568231318->SetBinError(10,3.18047);
   setHisttChannel568231318->SetBinError(11,2.969527);
   setHisttChannel568231318->SetBinError(12,2.660753);
   setHisttChannel568231318->SetBinError(13,2.506644);
   setHisttChannel568231318->SetBinError(14,2.355774);
   setHisttChannel568231318->SetBinError(15,2.131345);
   setHisttChannel568231318->SetBinError(16,2.051466);
   setHisttChannel568231318->SetBinError(17,1.794954);
   setHisttChannel568231318->SetBinError(18,1.68831);
   setHisttChannel568231318->SetBinError(19,1.589366);
   setHisttChannel568231318->SetBinError(20,1.481559);
   setHisttChannel568231318->SetBinError(21,1.358353);
   setHisttChannel568231318->SetBinError(22,1.348139);
   setHisttChannel568231318->SetBinError(23,1.265465);
   setHisttChannel568231318->SetBinError(24,1.132724);
   setHisttChannel568231318->SetBinError(25,1.004766);
   setHisttChannel568231318->SetBinError(26,2.599559);
   setHisttChannel568231318->SetEntries(46496);
   setHisttChannel568231318->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel568231318->SetFillColor(ci);

   ci = TColor::GetColor("#990303");
   setHisttChannel568231318->SetLineColor(ci);
   setHisttChannel568231318->SetLineWidth(2);
   setHisttChannel568231318->SetMarkerStyle(20);
   setHisttChannel568231318->GetXaxis()->SetNdivisions(1005);
   setHisttChannel568231318->GetXaxis()->SetLabelFont(43);
   setHisttChannel568231318->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel568231318->GetXaxis()->SetLabelSize(32);
   setHisttChannel568231318->GetXaxis()->SetTitleSize(35);
   setHisttChannel568231318->GetXaxis()->SetTickLength(0.05);
   setHisttChannel568231318->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel568231318->GetXaxis()->SetTitleFont(43);
   setHisttChannel568231318->GetYaxis()->SetNdivisions(506);
   setHisttChannel568231318->GetYaxis()->SetLabelFont(43);
   setHisttChannel568231318->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel568231318->GetYaxis()->SetLabelSize(32);
   setHisttChannel568231318->GetYaxis()->SetTitleSize(35);
   setHisttChannel568231318->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel568231318->GetYaxis()->SetTitleFont(43);
   setHisttChannel568231318->GetZaxis()->SetLabelFont(43);
   setHisttChannel568231318->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel568231318->GetZaxis()->SetLabelSize(32);
   setHisttChannel568231318->GetZaxis()->SetTitleSize(35);
   setHisttChannel568231318->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel568231318->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttChannel56823,"HIST F");
   Double_t xAxis1014[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHisttWChannel393291319 = new TH1F("setHisttWChannel393291319","",25, xAxis1014);
   setHisttWChannel393291319->SetBinContent(1,7.296795);
   setHisttWChannel393291319->SetBinContent(2,22.51061);
   setHisttWChannel393291319->SetBinContent(3,55.76833);
   setHisttWChannel393291319->SetBinContent(4,90.60503);
   setHisttWChannel393291319->SetBinContent(5,119.4988);
   setHisttWChannel393291319->SetBinContent(6,116.0064);
   setHisttWChannel393291319->SetBinContent(7,91.29639);
   setHisttWChannel393291319->SetBinContent(8,83.46952);
   setHisttWChannel393291319->SetBinContent(9,76.07524);
   setHisttWChannel393291319->SetBinContent(10,72.00842);
   setHisttWChannel393291319->SetBinContent(11,63.89225);
   setHisttWChannel393291319->SetBinContent(12,53.26255);
   setHisttWChannel393291319->SetBinContent(13,41.92634);
   setHisttWChannel393291319->SetBinContent(14,50.15458);
   setHisttWChannel393291319->SetBinContent(15,43.5025);
   setHisttWChannel393291319->SetBinContent(16,35.12854);
   setHisttWChannel393291319->SetBinContent(17,33.87563);
   setHisttWChannel393291319->SetBinContent(18,25.67209);
   setHisttWChannel393291319->SetBinContent(19,24.94488);
   setHisttWChannel393291319->SetBinContent(20,21.46922);
   setHisttWChannel393291319->SetBinContent(21,17.4487);
   setHisttWChannel393291319->SetBinContent(22,20.24497);
   setHisttWChannel393291319->SetBinContent(23,15.16107);
   setHisttWChannel393291319->SetBinContent(24,13.90377);
   setHisttWChannel393291319->SetBinContent(25,119.2181);
   setHisttWChannel393291319->SetBinError(0,0.1676985);
   setHisttWChannel393291319->SetBinError(1,1.11086);
   setHisttWChannel393291319->SetBinError(2,1.981486);
   setHisttWChannel393291319->SetBinError(3,3.111865);
   setHisttWChannel393291319->SetBinError(4,3.965545);
   setHisttWChannel393291319->SetBinError(5,4.546992);
   setHisttWChannel393291319->SetBinError(6,4.506129);
   setHisttWChannel393291319->SetBinError(7,3.99032);
   setHisttWChannel393291319->SetBinError(8,3.821339);
   setHisttWChannel393291319->SetBinError(9,3.670514);
   setHisttWChannel393291319->SetBinError(10,3.565998);
   setHisttWChannel393291319->SetBinError(11,3.341479);
   setHisttWChannel393291319->SetBinError(12,3.067253);
   setHisttWChannel393291319->SetBinError(13,2.706212);
   setHisttWChannel393291319->SetBinError(14,2.984308);
   setHisttWChannel393291319->SetBinError(15,2.785673);
   setHisttWChannel393291319->SetBinError(16,2.49247);
   setHisttWChannel393291319->SetBinError(17,2.458002);
   setHisttWChannel393291319->SetBinError(18,2.156205);
   setHisttWChannel393291319->SetBinError(19,2.1116);
   setHisttWChannel393291319->SetBinError(20,1.962492);
   setHisttWChannel393291319->SetBinError(21,1.778189);
   setHisttWChannel393291319->SetBinError(22,1.91124);
   setHisttWChannel393291319->SetBinError(23,1.654204);
   setHisttWChannel393291319->SetBinError(24,1.578435);
   setHisttWChannel393291319->SetBinError(25,1.40232);
   setHisttWChannel393291319->SetBinError(26,4.431251);
   setHisttWChannel393291319->SetEntries(7930);
   setHisttWChannel393291319->SetDirectory(0);

   ci = TColor::GetColor("#f9c40c");
   setHisttWChannel393291319->SetFillColor(ci);

   ci = TColor::GetColor("#957507");
   setHisttWChannel393291319->SetLineColor(ci);
   setHisttWChannel393291319->SetLineWidth(2);
   setHisttWChannel393291319->SetMarkerStyle(20);
   setHisttWChannel393291319->GetXaxis()->SetNdivisions(1005);
   setHisttWChannel393291319->GetXaxis()->SetLabelFont(43);
   setHisttWChannel393291319->GetXaxis()->SetLabelOffset(0.0105);
   setHisttWChannel393291319->GetXaxis()->SetLabelSize(32);
   setHisttWChannel393291319->GetXaxis()->SetTitleSize(35);
   setHisttWChannel393291319->GetXaxis()->SetTickLength(0.05);
   setHisttWChannel393291319->GetXaxis()->SetTitleOffset(1.135);
   setHisttWChannel393291319->GetXaxis()->SetTitleFont(43);
   setHisttWChannel393291319->GetYaxis()->SetNdivisions(506);
   setHisttWChannel393291319->GetYaxis()->SetLabelFont(43);
   setHisttWChannel393291319->GetYaxis()->SetLabelOffset(0.0087);
   setHisttWChannel393291319->GetYaxis()->SetLabelSize(32);
   setHisttWChannel393291319->GetYaxis()->SetTitleSize(35);
   setHisttWChannel393291319->GetYaxis()->SetTitleOffset(1.32);
   setHisttWChannel393291319->GetYaxis()->SetTitleFont(43);
   setHisttWChannel393291319->GetZaxis()->SetLabelFont(43);
   setHisttWChannel393291319->GetZaxis()->SetLabelOffset(0.0087);
   setHisttWChannel393291319->GetZaxis()->SetLabelSize(32);
   setHisttWChannel393291319->GetZaxis()->SetTitleSize(35);
   setHisttWChannel393291319->GetZaxis()->SetTitleOffset(1.32);
   setHisttWChannel393291319->GetZaxis()->SetTitleFont(43);
   ->Add(setHisttWChannel39329,"HIST F");
   Double_t xAxis1015[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHistTTJets808611320 = new TH1F("setHistTTJets808611320","",25, xAxis1015);
   setHistTTJets808611320->SetBinContent(1,224.936);
   setHistTTJets808611320->SetBinContent(2,1041.714);
   setHistTTJets808611320->SetBinContent(3,2884.97);
   setHistTTJets808611320->SetBinContent(4,5483.074);
   setHistTTJets808611320->SetBinContent(5,6922.917);
   setHistTTJets808611320->SetBinContent(6,5946.828);
   setHistTTJets808611320->SetBinContent(7,4524.359);
   setHistTTJets808611320->SetBinContent(8,3482.329);
   setHistTTJets808611320->SetBinContent(9,2819.503);
   setHistTTJets808611320->SetBinContent(10,2349.906);
   setHistTTJets808611320->SetBinContent(11,2009.352);
   setHistTTJets808611320->SetBinContent(12,1661.258);
   setHistTTJets808611320->SetBinContent(13,1447.105);
   setHistTTJets808611320->SetBinContent(14,1187.484);
   setHistTTJets808611320->SetBinContent(15,1034.962);
   setHistTTJets808611320->SetBinContent(16,871.2847);
   setHistTTJets808611320->SetBinContent(17,745.7717);
   setHistTTJets808611320->SetBinContent(18,635.2111);
   setHistTTJets808611320->SetBinContent(19,530.8889);
   setHistTTJets808611320->SetBinContent(20,433.2088);
   setHistTTJets808611320->SetBinContent(21,378.1478);
   setHistTTJets808611320->SetBinContent(22,305.1625);
   setHistTTJets808611320->SetBinContent(23,272.5243);
   setHistTTJets808611320->SetBinContent(24,212.2249);
   setHistTTJets808611320->SetBinContent(25,1410.468);
   setHistTTJets808611320->SetBinError(0,0.9658513);
   setHistTTJets808611320->SetBinError(1,8.862578);
   setHistTTJets808611320->SetBinError(2,19.33161);
   setHistTTJets808611320->SetBinError(3,32.22815);
   setHistTTJets808611320->SetBinError(4,44.49534);
   setHistTTJets808611320->SetBinError(5,50.06861);
   setHistTTJets808611320->SetBinError(6,46.43449);
   setHistTTJets808611320->SetBinError(7,40.47175);
   setHistTTJets808611320->SetBinError(8,35.54992);
   setHistTTJets808611320->SetBinError(9,32.04285);
   setHistTTJets808611320->SetBinError(10,29.26817);
   setHistTTJets808611320->SetBinError(11,27.1041);
   setHistTTJets808611320->SetBinError(12,24.67447);
   setHistTTJets808611320->SetBinError(13,23.07558);
   setHistTTJets808611320->SetBinError(14,20.90284);
   setHistTTJets808611320->SetBinError(15,19.56135);
   setHistTTJets808611320->SetBinError(16,17.95624);
   setHistTTJets808611320->SetBinError(17,16.61882);
   setHistTTJets808611320->SetBinError(18,15.34982);
   setHistTTJets808611320->SetBinError(19,14.04855);
   setHistTTJets808611320->SetBinError(20,12.67334);
   setHistTTJets808611320->SetBinError(21,11.88366);
   setHistTTJets808611320->SetBinError(22,10.67685);
   setHistTTJets808611320->SetBinError(23,10.07453);
   setHistTTJets808611320->SetBinError(24,8.893781);
   setHistTTJets808611320->SetBinError(25,8.545383);
   setHistTTJets808611320->SetBinError(26,21.40397);
   setHistTTJets808611320->SetEntries(142618);
   setHistTTJets808611320->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTTJets808611320->SetFillColor(ci);

   ci = TColor::GetColor("#955707");
   setHistTTJets808611320->SetLineColor(ci);
   setHistTTJets808611320->SetLineWidth(2);
   setHistTTJets808611320->SetMarkerStyle(20);
   setHistTTJets808611320->GetXaxis()->SetNdivisions(1005);
   setHistTTJets808611320->GetXaxis()->SetLabelFont(43);
   setHistTTJets808611320->GetXaxis()->SetLabelOffset(0.0105);
   setHistTTJets808611320->GetXaxis()->SetLabelSize(32);
   setHistTTJets808611320->GetXaxis()->SetTitleSize(35);
   setHistTTJets808611320->GetXaxis()->SetTickLength(0.05);
   setHistTTJets808611320->GetXaxis()->SetTitleOffset(1.135);
   setHistTTJets808611320->GetXaxis()->SetTitleFont(43);
   setHistTTJets808611320->GetYaxis()->SetNdivisions(506);
   setHistTTJets808611320->GetYaxis()->SetLabelFont(43);
   setHistTTJets808611320->GetYaxis()->SetLabelOffset(0.0087);
   setHistTTJets808611320->GetYaxis()->SetLabelSize(32);
   setHistTTJets808611320->GetYaxis()->SetTitleSize(35);
   setHistTTJets808611320->GetYaxis()->SetTitleOffset(1.32);
   setHistTTJets808611320->GetYaxis()->SetTitleFont(43);
   setHistTTJets808611320->GetZaxis()->SetLabelFont(43);
   setHistTTJets808611320->GetZaxis()->SetLabelOffset(0.0087);
   setHistTTJets808611320->GetZaxis()->SetLabelSize(32);
   setHistTTJets808611320->GetZaxis()->SetTitleSize(35);
   setHistTTJets808611320->GetZaxis()->SetTitleOffset(1.32);
   setHistTTJets808611320->GetZaxis()->SetTitleFont(43);
   ->Add(setHistTTJets80861,"HIST F");
   Double_t xAxis1016[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHistWJetsAMCexHF951281321 = new TH1F("setHistWJetsAMCexHF951281321","",25, xAxis1016);
   setHistWJetsAMCexHF951281321->SetBinContent(1,15.88179);
   setHistWJetsAMCexHF951281321->SetBinContent(2,0.5687749);
   setHistWJetsAMCexHF951281321->SetBinContent(4,95.33545);
   setHistWJetsAMCexHF951281321->SetBinContent(6,44.47264);
   setHistWJetsAMCexHF951281321->SetBinContent(7,98.37617);
   setHistWJetsAMCexHF951281321->SetBinContent(8,23.14617);
   setHistWJetsAMCexHF951281321->SetBinContent(10,38.64265);
   setHistWJetsAMCexHF951281321->SetBinContent(11,65.40715);
   setHistWJetsAMCexHF951281321->SetBinContent(12,54.92752);
   setHistWJetsAMCexHF951281321->SetBinContent(13,21.2116);
   setHistWJetsAMCexHF951281321->SetBinContent(14,19.03292);
   setHistWJetsAMCexHF951281321->SetBinContent(15,27.34345);
   setHistWJetsAMCexHF951281321->SetBinContent(16,54.99612);
   setHistWJetsAMCexHF951281321->SetBinContent(17,54.71799);
   setHistWJetsAMCexHF951281321->SetBinContent(18,62.43914);
   setHistWJetsAMCexHF951281321->SetBinContent(19,1.813938);
   setHistWJetsAMCexHF951281321->SetBinContent(20,9.029519);
   setHistWJetsAMCexHF951281321->SetBinContent(21,14.76434);
   setHistWJetsAMCexHF951281321->SetBinContent(22,17.02481);
   setHistWJetsAMCexHF951281321->SetBinContent(24,13.52286);
   setHistWJetsAMCexHF951281321->SetBinContent(25,98.8728);
   setHistWJetsAMCexHF951281321->SetBinError(1,10.47598);
   setHistWJetsAMCexHF951281321->SetBinError(2,10.55834);
   setHistWJetsAMCexHF951281321->SetBinError(3,25.04894);
   setHistWJetsAMCexHF951281321->SetBinError(4,33.56823);
   setHistWJetsAMCexHF951281321->SetBinError(5,30.8473);
   setHistWJetsAMCexHF951281321->SetBinError(6,33.12142);
   setHistWJetsAMCexHF951281321->SetBinError(7,40.82739);
   setHistWJetsAMCexHF951281321->SetBinError(8,35.7332);
   setHistWJetsAMCexHF951281321->SetBinError(9,31.86895);
   setHistWJetsAMCexHF951281321->SetBinError(10,34.35188);
   setHistWJetsAMCexHF951281321->SetBinError(11,33.61263);
   setHistWJetsAMCexHF951281321->SetBinError(12,32.80909);
   setHistWJetsAMCexHF951281321->SetBinError(13,22.91577);
   setHistWJetsAMCexHF951281321->SetBinError(14,22.69617);
   setHistWJetsAMCexHF951281321->SetBinError(15,26.73799);
   setHistWJetsAMCexHF951281321->SetBinError(16,31.74738);
   setHistWJetsAMCexHF951281321->SetBinError(17,22.55803);
   setHistWJetsAMCexHF951281321->SetBinError(18,27.37402);
   setHistWJetsAMCexHF951281321->SetBinError(19,21.6105);
   setHistWJetsAMCexHF951281321->SetBinError(20,14.71271);
   setHistWJetsAMCexHF951281321->SetBinError(21,20.18284);
   setHistWJetsAMCexHF951281321->SetBinError(22,11.95233);
   setHistWJetsAMCexHF951281321->SetBinError(23,13.71986);
   setHistWJetsAMCexHF951281321->SetBinError(24,16.05658);
   setHistWJetsAMCexHF951281321->SetBinError(25,8.128432);
   setHistWJetsAMCexHF951281321->SetBinError(26,44.59858);
   setHistWJetsAMCexHF951281321->SetEntries(315);
   setHistWJetsAMCexHF951281321->SetDirectory(0);

   ci = TColor::GetColor("#1bb320");
   setHistWJetsAMCexHF951281321->SetFillColor(ci);

   ci = TColor::GetColor("#106b13");
   setHistWJetsAMCexHF951281321->SetLineColor(ci);
   setHistWJetsAMCexHF951281321->SetLineWidth(2);
   setHistWJetsAMCexHF951281321->SetMarkerStyle(20);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexHF951281321->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF951281321->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexHF951281321->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF951281321->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF951281321->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF951281321->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF951281321->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF951281321->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexHF951281321->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexHF951281321->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexHF951281321->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexHF951281321->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexHF951281321->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexHF951281321->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexHF95128,"HIST F");
   Double_t xAxis1017[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHistWJetsAMCexLF765421322 = new TH1F("setHistWJetsAMCexLF765421322","",25, xAxis1017);
   setHistWJetsAMCexLF765421322->SetBinContent(1,8.710208);
   setHistWJetsAMCexLF765421322->SetBinContent(3,32.5434);
   setHistWJetsAMCexLF765421322->SetBinContent(4,26.70115);
   setHistWJetsAMCexLF765421322->SetBinContent(5,40.30844);
   setHistWJetsAMCexLF765421322->SetBinContent(6,43.21213);
   setHistWJetsAMCexLF765421322->SetBinContent(7,55.2972);
   setHistWJetsAMCexLF765421322->SetBinContent(8,84.38322);
   setHistWJetsAMCexLF765421322->SetBinContent(9,11.25167);
   setHistWJetsAMCexLF765421322->SetBinContent(10,30.12867);
   setHistWJetsAMCexLF765421322->SetBinContent(11,28.8538);
   setHistWJetsAMCexLF765421322->SetBinContent(12,8.972366);
   setHistWJetsAMCexLF765421322->SetBinContent(13,8.872295);
   setHistWJetsAMCexLF765421322->SetBinContent(15,12.01643);
   setHistWJetsAMCexLF765421322->SetBinContent(16,6.944733);
   setHistWJetsAMCexLF765421322->SetBinContent(24,9.731256);
   setHistWJetsAMCexLF765421322->SetBinContent(25,6.973793);
   setHistWJetsAMCexLF765421322->SetBinError(1,8.710208);
   setHistWJetsAMCexLF765421322->SetBinError(2,12.73003);
   setHistWJetsAMCexLF765421322->SetBinError(3,18.12363);
   setHistWJetsAMCexLF765421322->SetBinError(4,15.44292);
   setHistWJetsAMCexLF765421322->SetBinError(5,22.99868);
   setHistWJetsAMCexLF765421322->SetBinError(6,19.84309);
   setHistWJetsAMCexLF765421322->SetBinError(7,26.01475);
   setHistWJetsAMCexLF765421322->SetBinError(8,32.45609);
   setHistWJetsAMCexLF765421322->SetBinError(9,20.88585);
   setHistWJetsAMCexLF765421322->SetBinError(10,15.27919);
   setHistWJetsAMCexLF765421322->SetBinError(11,19.45406);
   setHistWJetsAMCexLF765421322->SetBinError(12,20.2809);
   setHistWJetsAMCexLF765421322->SetBinError(13,8.899858);
   setHistWJetsAMCexLF765421322->SetBinError(15,16.27338);
   setHistWJetsAMCexLF765421322->SetBinError(16,14.54109);
   setHistWJetsAMCexLF765421322->SetBinError(17,9.754517);
   setHistWJetsAMCexLF765421322->SetBinError(18,12.9667);
   setHistWJetsAMCexLF765421322->SetBinError(19,12.27178);
   setHistWJetsAMCexLF765421322->SetBinError(21,12.90658);
   setHistWJetsAMCexLF765421322->SetBinError(24,9.731257);
   setHistWJetsAMCexLF765421322->SetBinError(26,10.72061);
   setHistWJetsAMCexLF765421322->SetEntries(86);
   setHistWJetsAMCexLF765421322->SetDirectory(0);

   ci = TColor::GetColor("#4dff97");
   setHistWJetsAMCexLF765421322->SetFillColor(ci);

   ci = TColor::GetColor("#2e995a");
   setHistWJetsAMCexLF765421322->SetLineColor(ci);
   setHistWJetsAMCexLF765421322->SetLineWidth(2);
   setHistWJetsAMCexLF765421322->SetMarkerStyle(20);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetNdivisions(1005);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetLabelOffset(0.0105);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetTickLength(0.05);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetTitleOffset(1.135);
   setHistWJetsAMCexLF765421322->GetXaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF765421322->GetYaxis()->SetNdivisions(506);
   setHistWJetsAMCexLF765421322->GetYaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF765421322->GetYaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF765421322->GetYaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF765421322->GetYaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF765421322->GetYaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF765421322->GetYaxis()->SetTitleFont(43);
   setHistWJetsAMCexLF765421322->GetZaxis()->SetLabelFont(43);
   setHistWJetsAMCexLF765421322->GetZaxis()->SetLabelOffset(0.0087);
   setHistWJetsAMCexLF765421322->GetZaxis()->SetLabelSize(32);
   setHistWJetsAMCexLF765421322->GetZaxis()->SetTitleSize(35);
   setHistWJetsAMCexLF765421322->GetZaxis()->SetTitleOffset(1.32);
   setHistWJetsAMCexLF765421322->GetZaxis()->SetTitleFont(43);
   ->Add(setHistWJetsAMCexLF76542,"HIST F");
   Double_t xAxis1018[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHistDY502791323 = new TH1F("setHistDY502791323","",25, xAxis1018);
   setHistDY502791323->SetBinContent(2,10.5526);
   setHistDY502791323->SetBinContent(3,7.131197);
   setHistDY502791323->SetBinContent(4,14.1929);
   setHistDY502791323->SetBinContent(5,10.97404);
   setHistDY502791323->SetBinContent(6,10.89988);
   setHistDY502791323->SetBinContent(7,12.7934);
   setHistDY502791323->SetBinContent(8,35.17815);
   setHistDY502791323->SetBinContent(9,17.1606);
   setHistDY502791323->SetBinContent(10,40.01559);
   setHistDY502791323->SetBinContent(11,16.33975);
   setHistDY502791323->SetBinContent(12,18.42658);
   setHistDY502791323->SetBinContent(13,12.27995);
   setHistDY502791323->SetBinContent(14,7.244862);
   setHistDY502791323->SetBinContent(16,4.089623);
   setHistDY502791323->SetBinContent(18,3.620147);
   setHistDY502791323->SetBinContent(19,3.565662);
   setHistDY502791323->SetBinContent(20,3.651598);
   setHistDY502791323->SetBinContent(23,7.780353);
   setHistDY502791323->SetBinContent(25,9.03923);
   setHistDY502791323->SetBinError(2,6.101194);
   setHistDY502791323->SetBinError(3,5.045415);
   setHistDY502791323->SetBinError(4,7.1102);
   setHistDY502791323->SetBinError(5,6.375216);
   setHistDY502791323->SetBinError(6,5.92257);
   setHistDY502791323->SetBinError(7,6.643932);
   setHistDY502791323->SetBinError(8,15.49541);
   setHistDY502791323->SetBinError(9,7.707713);
   setHistDY502791323->SetBinError(10,19.64135);
   setHistDY502791323->SetBinError(11,7.499269);
   setHistDY502791323->SetBinError(12,8.25642);
   setHistDY502791323->SetBinError(13,7.156013);
   setHistDY502791323->SetBinError(14,5.124029);
   setHistDY502791323->SetBinError(16,4.089623);
   setHistDY502791323->SetBinError(18,3.620147);
   setHistDY502791323->SetBinError(19,3.565662);
   setHistDY502791323->SetBinError(20,3.651598);
   setHistDY502791323->SetBinError(23,5.508557);
   setHistDY502791323->SetBinError(26,5.45214);
   setHistDY502791323->SetEntries(64);
   setHistDY502791323->SetDirectory(0);

   ci = TColor::GetColor("#3d7bea");
   setHistDY502791323->SetFillColor(ci);

   ci = TColor::GetColor("#24498c");
   setHistDY502791323->SetLineColor(ci);
   setHistDY502791323->SetLineWidth(2);
   setHistDY502791323->SetMarkerStyle(20);
   setHistDY502791323->GetXaxis()->SetNdivisions(1005);
   setHistDY502791323->GetXaxis()->SetLabelFont(43);
   setHistDY502791323->GetXaxis()->SetLabelOffset(0.0105);
   setHistDY502791323->GetXaxis()->SetLabelSize(32);
   setHistDY502791323->GetXaxis()->SetTitleSize(35);
   setHistDY502791323->GetXaxis()->SetTickLength(0.05);
   setHistDY502791323->GetXaxis()->SetTitleOffset(1.135);
   setHistDY502791323->GetXaxis()->SetTitleFont(43);
   setHistDY502791323->GetYaxis()->SetNdivisions(506);
   setHistDY502791323->GetYaxis()->SetLabelFont(43);
   setHistDY502791323->GetYaxis()->SetLabelOffset(0.0087);
   setHistDY502791323->GetYaxis()->SetLabelSize(32);
   setHistDY502791323->GetYaxis()->SetTitleSize(35);
   setHistDY502791323->GetYaxis()->SetTitleOffset(1.32);
   setHistDY502791323->GetYaxis()->SetTitleFont(43);
   setHistDY502791323->GetZaxis()->SetLabelFont(43);
   setHistDY502791323->GetZaxis()->SetLabelOffset(0.0087);
   setHistDY502791323->GetZaxis()->SetLabelSize(32);
   setHistDY502791323->GetZaxis()->SetTitleSize(35);
   setHistDY502791323->GetZaxis()->SetTitleOffset(1.32);
   setHistDY502791323->GetZaxis()->SetTitleFont(43);
   ->Add(setHistDY50279,"HIST F");
   Double_t xAxis1019[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHistQCD_DD881161324 = new TH1F("setHistQCD_DD881161324","",25, xAxis1019);
   setHistQCD_DD881161324->SetBinContent(1,18.14844);
   setHistQCD_DD881161324->SetBinContent(2,60.2008);
   setHistQCD_DD881161324->SetBinContent(3,178.0567);
   setHistQCD_DD881161324->SetBinContent(4,243.6259);
   setHistQCD_DD881161324->SetBinContent(5,123.4729);
   setHistQCD_DD881161324->SetBinContent(6,206.8476);
   setHistQCD_DD881161324->SetBinContent(7,256.9032);
   setHistQCD_DD881161324->SetBinContent(8,86.68674);
   setHistQCD_DD881161324->SetBinContent(9,116.9253);
   setHistQCD_DD881161324->SetBinContent(10,101.1467);
   setHistQCD_DD881161324->SetBinContent(11,126.0328);
   setHistQCD_DD881161324->SetBinContent(12,101.0192);
   setHistQCD_DD881161324->SetBinContent(13,86.03364);
   setHistQCD_DD881161324->SetBinContent(14,55.26315);
   setHistQCD_DD881161324->SetBinContent(15,75.94085);
   setHistQCD_DD881161324->SetBinContent(16,57.3574);
   setHistQCD_DD881161324->SetBinContent(17,50.48151);
   setHistQCD_DD881161324->SetBinContent(18,28.47009);
   setHistQCD_DD881161324->SetBinContent(19,29.1843);
   setHistQCD_DD881161324->SetBinContent(20,8.226535);
   setHistQCD_DD881161324->SetBinContent(21,10.68128);
   setHistQCD_DD881161324->SetBinContent(23,18.09603);
   setHistQCD_DD881161324->SetBinContent(24,16.88538);
   setHistQCD_DD881161324->SetBinContent(25,69.95071);
   setHistQCD_DD881161324->SetBinError(1,8.74758);
   setHistQCD_DD881161324->SetBinError(2,18.99406);
   setHistQCD_DD881161324->SetBinError(3,31.52575);
   setHistQCD_DD881161324->SetBinError(4,41.01259);
   setHistQCD_DD881161324->SetBinError(5,40.64095);
   setHistQCD_DD881161324->SetBinError(6,40.45042);
   setHistQCD_DD881161324->SetBinError(7,46.71093);
   setHistQCD_DD881161324->SetBinError(8,40.79238);
   setHistQCD_DD881161324->SetBinError(9,28.79538);
   setHistQCD_DD881161324->SetBinError(10,27.66776);
   setHistQCD_DD881161324->SetBinError(11,24.34516);
   setHistQCD_DD881161324->SetBinError(12,24.37105);
   setHistQCD_DD881161324->SetBinError(13,35.47671);
   setHistQCD_DD881161324->SetBinError(14,18.667);
   setHistQCD_DD881161324->SetBinError(15,19.14445);
   setHistQCD_DD881161324->SetBinError(16,17.72802);
   setHistQCD_DD881161324->SetBinError(17,15.39163);
   setHistQCD_DD881161324->SetBinError(18,13.19114);
   setHistQCD_DD881161324->SetBinError(19,14.05551);
   setHistQCD_DD881161324->SetBinError(20,11.11417);
   setHistQCD_DD881161324->SetBinError(21,11.59258);
   setHistQCD_DD881161324->SetBinError(22,26.36674);
   setHistQCD_DD881161324->SetBinError(23,10.03083);
   setHistQCD_DD881161324->SetBinError(24,9.491735);
   setHistQCD_DD881161324->SetBinError(25,8.90407);
   setHistQCD_DD881161324->SetBinError(26,35.25416);
   setHistQCD_DD881161324->SetEntries(3798);
   setHistQCD_DD881161324->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD881161324->SetFillColor(ci);

   ci = TColor::GetColor("#7a7a7a");
   setHistQCD_DD881161324->SetLineColor(ci);
   setHistQCD_DD881161324->SetLineWidth(2);
   setHistQCD_DD881161324->SetMarkerStyle(20);
   setHistQCD_DD881161324->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD881161324->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD881161324->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD881161324->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD881161324->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD881161324->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD881161324->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD881161324->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD881161324->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD881161324->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD881161324->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD881161324->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD881161324->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD881161324->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD881161324->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD881161324->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD881161324->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD881161324->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD881161324->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD881161324->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD881161324->GetZaxis()->SetTitleFont(43);
   ->Add(setHistQCD_DD88116,"HIST F");
   ->Draw("same");
   Double_t xAxis1020[26] = {100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 260, 276, 292, 308, 324, 340, 356, 372, 388, 404, 420, 436, 452, 468, 484, 500}; 
   
   TH1F *setHistdata778051325 = new TH1F("setHistdata778051325","",25, xAxis1020);
   setHistdata778051325->SetBinContent(1,272);
   setHistdata778051325->SetBinContent(2,1289);
   setHistdata778051325->SetBinContent(3,3324);
   setHistdata778051325->SetBinContent(4,6281);
   setHistdata778051325->SetBinContent(5,7798);
   setHistdata778051325->SetBinContent(6,6740);
   setHistdata778051325->SetBinContent(7,5039);
   setHistdata778051325->SetBinContent(8,3915);
   setHistdata778051325->SetBinContent(9,3073);
   setHistdata778051325->SetBinContent(10,2631);
   setHistdata778051325->SetBinContent(11,2189);
   setHistdata778051325->SetBinContent(12,1820);
   setHistdata778051325->SetBinContent(13,1583);
   setHistdata778051325->SetBinContent(14,1357);
   setHistdata778051325->SetBinContent(15,1086);
   setHistdata778051325->SetBinContent(16,975);
   setHistdata778051325->SetBinContent(17,805);
   setHistdata778051325->SetBinContent(18,669);
   setHistdata778051325->SetBinContent(19,574);
   setHistdata778051325->SetBinContent(20,480);
   setHistdata778051325->SetBinContent(21,408);
   setHistdata778051325->SetBinContent(22,340);
   setHistdata778051325->SetBinContent(23,296);
   setHistdata778051325->SetBinContent(24,258);
   setHistdata778051325->SetBinContent(25,1580);
   setHistdata778051325->SetBinError(0,2.645751);
   setHistdata778051325->SetBinError(1,16.27882);
   setHistdata778051325->SetBinError(2,35.90265);
   setHistdata778051325->SetBinError(3,57.65414);
   setHistdata778051325->SetBinError(4,79.25276);
   setHistdata778051325->SetBinError(5,88.30629);
   setHistdata778051325->SetBinError(6,82.0975);
   setHistdata778051325->SetBinError(7,70.98591);
   setHistdata778051325->SetBinError(8,62.56996);
   setHistdata778051325->SetBinError(9,55.43465);
   setHistdata778051325->SetBinError(10,51.29327);
   setHistdata778051325->SetBinError(11,46.78675);
   setHistdata778051325->SetBinError(12,42.66146);
   setHistdata778051325->SetBinError(13,39.78693);
   setHistdata778051325->SetBinError(14,36.83748);
   setHistdata778051325->SetBinError(15,32.95451);
   setHistdata778051325->SetBinError(16,31.22499);
   setHistdata778051325->SetBinError(17,28.37252);
   setHistdata778051325->SetBinError(18,25.86503);
   setHistdata778051325->SetBinError(19,23.9583);
   setHistdata778051325->SetBinError(20,21.9089);
   setHistdata778051325->SetBinError(21,20.19901);
   setHistdata778051325->SetBinError(22,18.43909);
   setHistdata778051325->SetBinError(23,17.20465);
   setHistdata778051325->SetBinError(24,16.06238);
   setHistdata778051325->SetBinError(25,14.56022);
   setHistdata778051325->SetBinError(26,36.98648);
   setHistdata778051325->SetEntries(54782);
   setHistdata778051325->SetFillStyle(0);
   setHistdata778051325->SetMarkerStyle(20);
   setHistdata778051325->SetMarkerSize(1.15);
   setHistdata778051325->GetXaxis()->SetNdivisions(1005);
   setHistdata778051325->GetXaxis()->SetLabelFont(43);
   setHistdata778051325->GetXaxis()->SetLabelOffset(0.0105);
   setHistdata778051325->GetXaxis()->SetLabelSize(32);
   setHistdata778051325->GetXaxis()->SetTitleSize(35);
   setHistdata778051325->GetXaxis()->SetTickLength(0.05);
   setHistdata778051325->GetXaxis()->SetTitleOffset(1.135);
   setHistdata778051325->GetXaxis()->SetTitleFont(43);
   setHistdata778051325->GetYaxis()->SetNdivisions(506);
   setHistdata778051325->GetYaxis()->SetLabelFont(43);
   setHistdata778051325->GetYaxis()->SetLabelOffset(0.0087);
   setHistdata778051325->GetYaxis()->SetLabelSize(32);
   setHistdata778051325->GetYaxis()->SetTitleSize(35);
   setHistdata778051325->GetYaxis()->SetTitleOffset(1.32);
   setHistdata778051325->GetYaxis()->SetTitleFont(43);
   setHistdata778051325->GetZaxis()->SetLabelFont(43);
   setHistdata778051325->GetZaxis()->SetLabelOffset(0.0087);
   setHistdata778051325->GetZaxis()->SetLabelSize(32);
   setHistdata778051325->GetZaxis()->SetTitleSize(35);
   setHistdata778051325->GetZaxis()->SetTitleOffset(1.32);
   setHistdata778051325->GetZaxis()->SetTitleFont(43);
   setHistdata778051325->Draw("PESame");
   
   TH2F *axis34724_copy1326 = new TH2F("axis34724_copy1326","",50,100,500,50,0,11151.14);
   axis34724_copy1326->SetDirectory(0);
   axis34724_copy1326->SetMarkerStyle(20);
   axis34724_copy1326->GetXaxis()->SetNdivisions(1005);
   axis34724_copy1326->GetXaxis()->SetLabelFont(43);
   axis34724_copy1326->GetXaxis()->SetLabelOffset(0.0105);
   axis34724_copy1326->GetXaxis()->SetLabelSize(0);
   axis34724_copy1326->GetXaxis()->SetTitleSize(35);
   axis34724_copy1326->GetXaxis()->SetTickLength(0.025);
   axis34724_copy1326->GetXaxis()->SetTitleOffset(1.135);
   axis34724_copy1326->GetXaxis()->SetTitleFont(43);
   axis34724_copy1326->GetYaxis()->SetTitle("Events / bin");
   axis34724_copy1326->GetYaxis()->SetNdivisions(506);
   axis34724_copy1326->GetYaxis()->SetLabelFont(43);
   axis34724_copy1326->GetYaxis()->SetLabelOffset(0.0087);
   axis34724_copy1326->GetYaxis()->SetLabelSize(32);
   axis34724_copy1326->GetYaxis()->SetTitleSize(35);
   axis34724_copy1326->GetYaxis()->SetTickLength(0.02631579);
   axis34724_copy1326->GetYaxis()->SetTitleOffset(1.32);
   axis34724_copy1326->GetYaxis()->SetTitleFont(43);
   axis34724_copy1326->GetZaxis()->SetLabelFont(43);
   axis34724_copy1326->GetZaxis()->SetLabelOffset(0.0087);
   axis34724_copy1326->GetZaxis()->SetLabelSize(32);
   axis34724_copy1326->GetZaxis()->SetTitleSize(35);
   axis34724_copy1326->GetZaxis()->SetTitleOffset(1.32);
   axis34724_copy1326->GetZaxis()->SetTitleFont(43);
   axis34724_copy1326->Draw("sameaxis");
   
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
   AText = pt->AddText("e#kern[-0.5]{ }+#kern[-0.5]{ }3j2t, 36#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13TeV)");
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
   TLegendEntry *entry=leg->AddEntry("setHistdata77805","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(43);
   entry=leg->AddEntry("setHistQCD_DD88116","Multijet","F");

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
   entry=leg->AddEntry("setHistDY50279","Z/#gamma+jets","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexLF76542","W+LF","F");

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
   entry=leg->AddEntry("setHistWJetsAMCexHF95128","W+HF","F");

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
   entry=leg->AddEntry("setHistTTJets80861","t#bar{t}","F");

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
   entry=leg->AddEntry("setHisttWChannel39329","tW","F");

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
   entry=leg->AddEntry("setHisttChannel56823","#it{t}-channel","F");

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
   cvelectron_3j2t_top_mass_qcdnone47602_2->Modified();
   cvelectron_3j2t_top_mass_qcdnone47602->cd();
   cvelectron_3j2t_top_mass_qcdnone47602->Modified();
   cvelectron_3j2t_top_mass_qcdnone47602->cd();
   cvelectron_3j2t_top_mass_qcdnone47602->SetSelected(cvelectron_3j2t_top_mass_qcdnone47602);
}
