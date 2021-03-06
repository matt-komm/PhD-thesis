void plots/comp_2j1t_mtw_mtwinv_nol()
{
//=========Macro generated from canvas: cv2j1t_mtw_mtwinv0.0238893082146/
//=========  (Tue Aug 22 21:39:30 2017) by ROOT version6.02/05
   TCanvas *cv2j1t_mtw_mtwinv0.0238893082146 = new TCanvas("cv2j1t_mtw_mtwinv0.0238893082146", "",0,0,800,650);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetHighLightColor(2);
   cv2j1t_mtw_mtwinv0.0238893082146->Range(-11.66667,-0.06963878,71.66667,0.4277811);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFillColor(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFillStyle(4000);
   cv2j1t_mtw_mtwinv0.0238893082146->SetBorderMode(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetBorderSize(2);
   cv2j1t_mtw_mtwinv0.0238893082146->SetTickx(1);
   cv2j1t_mtw_mtwinv0.0238893082146->SetTicky(1);
   cv2j1t_mtw_mtwinv0.0238893082146->SetLeftMargin(0.14);
   cv2j1t_mtw_mtwinv0.0238893082146->SetRightMargin(0.26);
   cv2j1t_mtw_mtwinv0.0238893082146->SetTopMargin(0.08);
   cv2j1t_mtw_mtwinv0.0238893082146->SetBottomMargin(0.14);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameFillStyle(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameLineWidth(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameBorderMode(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameBorderSize(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameFillStyle(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameLineWidth(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameBorderMode(0);
   cv2j1t_mtw_mtwinv0.0238893082146->SetFrameBorderSize(0);
   
   TH2F *axis0.9613119301021 = new TH2F("axis0.9613119301021","",50,0,50,50,0,0.3879875);
   axis0.9613119301021->SetMarkerStyle(20);
   axis0.9613119301021->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axis0.9613119301021->GetXaxis()->SetNdivisions(1005);
   axis0.9613119301021->GetXaxis()->SetLabelFont(43);
   axis0.9613119301021->GetXaxis()->SetLabelOffset(0.0105);
   axis0.9613119301021->GetXaxis()->SetLabelSize(32);
   axis0.9613119301021->GetXaxis()->SetTitleSize(35);
   axis0.9613119301021->GetXaxis()->SetTickLength(0.04166667);
   axis0.9613119301021->GetXaxis()->SetTitleOffset(1.135);
   axis0.9613119301021->GetXaxis()->SetTitleFont(43);
   axis0.9613119301021->GetYaxis()->SetTitle("Normalized events");
   axis0.9613119301021->GetYaxis()->SetNdivisions(506);
   axis0.9613119301021->GetYaxis()->SetLabelFont(43);
   axis0.9613119301021->GetYaxis()->SetLabelOffset(0.0087);
   axis0.9613119301021->GetYaxis()->SetLabelSize(32);
   axis0.9613119301021->GetYaxis()->SetTitleSize(35);
   axis0.9613119301021->GetYaxis()->SetTickLength(0.01923077);
   axis0.9613119301021->GetYaxis()->SetTitleOffset(1.32);
   axis0.9613119301021->GetYaxis()->SetTitleFont(43);
   axis0.9613119301021->GetZaxis()->SetLabelFont(43);
   axis0.9613119301021->GetZaxis()->SetLabelOffset(0.0087);
   axis0.9613119301021->GetZaxis()->SetLabelSize(32);
   axis0.9613119301021->GetZaxis()->SetTitleSize(35);
   axis0.9613119301021->GetZaxis()->SetTitleOffset(1.32);
   axis0.9613119301021->GetZaxis()->SetTitleFont(43);
   axis0.9613119301021->Draw("AXIS");
   Double_t xAxis1[6] = {0, 10, 20, 30, 40, 50}; 
   
   TH1F *setHistQCD_DD0.08531167344712 = new TH1F("setHistQCD_DD0.08531167344712","",5, xAxis1);
   setHistQCD_DD0.08531167344712->SetBinContent(1,0.2495959);
   setHistQCD_DD0.08531167344712->SetBinContent(2,0.2316441);
   setHistQCD_DD0.08531167344712->SetBinContent(3,0.2046797);
   setHistQCD_DD0.08531167344712->SetBinContent(4,0.1727027);
   setHistQCD_DD0.08531167344712->SetBinContent(5,0.1413776);
   setHistQCD_DD0.08531167344712->SetBinError(1,0.001164936);
   setHistQCD_DD0.08531167344712->SetBinError(2,0.001116845);
   setHistQCD_DD0.08531167344712->SetBinError(3,0.001068839);
   setHistQCD_DD0.08531167344712->SetBinError(4,0.00102343);
   setHistQCD_DD0.08531167344712->SetBinError(5,0.001000891);
   setHistQCD_DD0.08531167344712->SetEntries(250930);
   setHistQCD_DD0.08531167344712->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.08531167344712->SetFillColor(ci);
   setHistQCD_DD0.08531167344712->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   setHistQCD_DD0.08531167344712->SetLineColor(ci);
   setHistQCD_DD0.08531167344712->SetLineWidth(3);
   setHistQCD_DD0.08531167344712->SetMarkerStyle(20);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetNdivisions(1005);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetLabelFont(43);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetLabelOffset(0.0105);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetLabelSize(32);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetTitleSize(35);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetTickLength(0.05);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetTitleOffset(1.135);
   setHistQCD_DD0.08531167344712->GetXaxis()->SetTitleFont(43);
   setHistQCD_DD0.08531167344712->GetYaxis()->SetNdivisions(506);
   setHistQCD_DD0.08531167344712->GetYaxis()->SetLabelFont(43);
   setHistQCD_DD0.08531167344712->GetYaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.08531167344712->GetYaxis()->SetLabelSize(32);
   setHistQCD_DD0.08531167344712->GetYaxis()->SetTitleSize(35);
   setHistQCD_DD0.08531167344712->GetYaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.08531167344712->GetYaxis()->SetTitleFont(43);
   setHistQCD_DD0.08531167344712->GetZaxis()->SetLabelFont(43);
   setHistQCD_DD0.08531167344712->GetZaxis()->SetLabelOffset(0.0087);
   setHistQCD_DD0.08531167344712->GetZaxis()->SetLabelSize(32);
   setHistQCD_DD0.08531167344712->GetZaxis()->SetTitleSize(35);
   setHistQCD_DD0.08531167344712->GetZaxis()->SetTitleOffset(1.32);
   setHistQCD_DD0.08531167344712->GetZaxis()->SetTitleFont(43);
   setHistQCD_DD0.08531167344712->Draw("HISTSame");
   Double_t xAxis2[6] = {0, 10, 20, 30, 40, 50}; 
   
   TH1F *setHistEWK0.4610819796633 = new TH1F("setHistEWK0.4610819796633","",5, xAxis2);
   setHistEWK0.4610819796633->SetBinContent(1,0.1712473);
   setHistEWK0.4610819796633->SetBinContent(2,0.1814878);
   setHistEWK0.4610819796633->SetBinContent(3,0.1733962);
   setHistEWK0.4610819796633->SetBinContent(4,0.2135145);
   setHistEWK0.4610819796633->SetBinContent(5,0.2603542);
   setHistEWK0.4610819796633->SetBinError(1,0.008911501);
   setHistEWK0.4610819796633->SetBinError(2,0.008904192);
   setHistEWK0.4610819796633->SetBinError(3,0.009309282);
   setHistEWK0.4610819796633->SetBinError(4,0.009938957);
   setHistEWK0.4610819796633->SetBinError(5,0.01132152);
   setHistEWK0.4610819796633->SetEntries(15246);
   setHistEWK0.4610819796633->SetDirectory(0);

   ci = TColor::GetColor("#0a9128");
   setHistEWK0.4610819796633->SetFillColor(ci);
   setHistEWK0.4610819796633->SetFillStyle(0);

   ci = TColor::GetColor("#0a9128");
   setHistEWK0.4610819796633->SetLineColor(ci);
   setHistEWK0.4610819796633->SetLineWidth(3);
   setHistEWK0.4610819796633->SetMarkerStyle(20);
   setHistEWK0.4610819796633->GetXaxis()->SetNdivisions(1005);
   setHistEWK0.4610819796633->GetXaxis()->SetLabelFont(43);
   setHistEWK0.4610819796633->GetXaxis()->SetLabelOffset(0.0105);
   setHistEWK0.4610819796633->GetXaxis()->SetLabelSize(32);
   setHistEWK0.4610819796633->GetXaxis()->SetTitleSize(35);
   setHistEWK0.4610819796633->GetXaxis()->SetTickLength(0.05);
   setHistEWK0.4610819796633->GetXaxis()->SetTitleOffset(1.135);
   setHistEWK0.4610819796633->GetXaxis()->SetTitleFont(43);
   setHistEWK0.4610819796633->GetYaxis()->SetNdivisions(506);
   setHistEWK0.4610819796633->GetYaxis()->SetLabelFont(43);
   setHistEWK0.4610819796633->GetYaxis()->SetLabelOffset(0.0087);
   setHistEWK0.4610819796633->GetYaxis()->SetLabelSize(32);
   setHistEWK0.4610819796633->GetYaxis()->SetTitleSize(35);
   setHistEWK0.4610819796633->GetYaxis()->SetTitleOffset(1.32);
   setHistEWK0.4610819796633->GetYaxis()->SetTitleFont(43);
   setHistEWK0.4610819796633->GetZaxis()->SetLabelFont(43);
   setHistEWK0.4610819796633->GetZaxis()->SetLabelOffset(0.0087);
   setHistEWK0.4610819796633->GetZaxis()->SetLabelSize(32);
   setHistEWK0.4610819796633->GetZaxis()->SetTitleSize(35);
   setHistEWK0.4610819796633->GetZaxis()->SetTitleOffset(1.32);
   setHistEWK0.4610819796633->GetZaxis()->SetTitleFont(43);
   setHistEWK0.4610819796633->Draw("HISTSame");
   Double_t xAxis3[6] = {0, 10, 20, 30, 40, 50}; 
   
   TH1F *setHistTopBkg0.5638744379774 = new TH1F("setHistTopBkg0.5638744379774","",5, xAxis3);
   setHistTopBkg0.5638744379774->SetBinContent(1,0.1655623);
   setHistTopBkg0.5638744379774->SetBinContent(2,0.1738182);
   setHistTopBkg0.5638744379774->SetBinContent(3,0.1909887);
   setHistTopBkg0.5638744379774->SetBinContent(4,0.2166057);
   setHistTopBkg0.5638744379774->SetBinContent(5,0.2530251);
   setHistTopBkg0.5638744379774->SetBinError(1,0.000814517);
   setHistTopBkg0.5638744379774->SetBinError(2,0.0008352713);
   setHistTopBkg0.5638744379774->SetBinError(3,0.0008752406);
   setHistTopBkg0.5638744379774->SetBinError(4,0.0009319126);
   setHistTopBkg0.5638744379774->SetBinError(5,0.001008287);
   setHistTopBkg0.5638744379774->SetEntries(281405);
   setHistTopBkg0.5638744379774->SetDirectory(0);

   ci = TColor::GetColor("#f9910c");
   setHistTopBkg0.5638744379774->SetFillColor(ci);
   setHistTopBkg0.5638744379774->SetFillStyle(0);

   ci = TColor::GetColor("#f9910c");
   setHistTopBkg0.5638744379774->SetLineColor(ci);
   setHistTopBkg0.5638744379774->SetLineWidth(3);
   setHistTopBkg0.5638744379774->SetMarkerStyle(20);
   setHistTopBkg0.5638744379774->GetXaxis()->SetNdivisions(1005);
   setHistTopBkg0.5638744379774->GetXaxis()->SetLabelFont(43);
   setHistTopBkg0.5638744379774->GetXaxis()->SetLabelOffset(0.0105);
   setHistTopBkg0.5638744379774->GetXaxis()->SetLabelSize(32);
   setHistTopBkg0.5638744379774->GetXaxis()->SetTitleSize(35);
   setHistTopBkg0.5638744379774->GetXaxis()->SetTickLength(0.05);
   setHistTopBkg0.5638744379774->GetXaxis()->SetTitleOffset(1.135);
   setHistTopBkg0.5638744379774->GetXaxis()->SetTitleFont(43);
   setHistTopBkg0.5638744379774->GetYaxis()->SetNdivisions(506);
   setHistTopBkg0.5638744379774->GetYaxis()->SetLabelFont(43);
   setHistTopBkg0.5638744379774->GetYaxis()->SetLabelOffset(0.0087);
   setHistTopBkg0.5638744379774->GetYaxis()->SetLabelSize(32);
   setHistTopBkg0.5638744379774->GetYaxis()->SetTitleSize(35);
   setHistTopBkg0.5638744379774->GetYaxis()->SetTitleOffset(1.32);
   setHistTopBkg0.5638744379774->GetYaxis()->SetTitleFont(43);
   setHistTopBkg0.5638744379774->GetZaxis()->SetLabelFont(43);
   setHistTopBkg0.5638744379774->GetZaxis()->SetLabelOffset(0.0087);
   setHistTopBkg0.5638744379774->GetZaxis()->SetLabelSize(32);
   setHistTopBkg0.5638744379774->GetZaxis()->SetTitleSize(35);
   setHistTopBkg0.5638744379774->GetZaxis()->SetTitleOffset(1.32);
   setHistTopBkg0.5638744379774->GetZaxis()->SetTitleFont(43);
   setHistTopBkg0.5638744379774->Draw("HISTSame");
   Double_t xAxis4[6] = {0, 10, 20, 30, 40, 50}; 
   
   TH1F *setHisttChannel0.1970702043755 = new TH1F("setHisttChannel0.1970702043755","",5, xAxis4);
   setHisttChannel0.1970702043755->SetBinContent(1,0.1503507);
   setHisttChannel0.1970702043755->SetBinContent(2,0.1622035);
   setHisttChannel0.1970702043755->SetBinContent(3,0.1867503);
   setHisttChannel0.1970702043755->SetBinContent(4,0.2235616);
   setHisttChannel0.1970702043755->SetBinContent(5,0.2771339);
   setHisttChannel0.1970702043755->SetBinError(1,0.0007643463);
   setHisttChannel0.1970702043755->SetBinError(2,0.0007941388);
   setHisttChannel0.1970702043755->SetBinError(3,0.0008523633);
   setHisttChannel0.1970702043755->SetBinError(4,0.0009325715);
   setHisttChannel0.1970702043755->SetBinError(5,0.001038807);
   setHisttChannel0.1970702043755->SetEntries(275151);
   setHisttChannel0.1970702043755->SetDirectory(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.1970702043755->SetFillColor(ci);
   setHisttChannel0.1970702043755->SetFillStyle(0);

   ci = TColor::GetColor("#ff0505");
   setHisttChannel0.1970702043755->SetLineColor(ci);
   setHisttChannel0.1970702043755->SetLineWidth(3);
   setHisttChannel0.1970702043755->SetMarkerStyle(20);
   setHisttChannel0.1970702043755->GetXaxis()->SetNdivisions(1005);
   setHisttChannel0.1970702043755->GetXaxis()->SetLabelFont(43);
   setHisttChannel0.1970702043755->GetXaxis()->SetLabelOffset(0.0105);
   setHisttChannel0.1970702043755->GetXaxis()->SetLabelSize(32);
   setHisttChannel0.1970702043755->GetXaxis()->SetTitleSize(35);
   setHisttChannel0.1970702043755->GetXaxis()->SetTickLength(0.05);
   setHisttChannel0.1970702043755->GetXaxis()->SetTitleOffset(1.135);
   setHisttChannel0.1970702043755->GetXaxis()->SetTitleFont(43);
   setHisttChannel0.1970702043755->GetYaxis()->SetNdivisions(506);
   setHisttChannel0.1970702043755->GetYaxis()->SetLabelFont(43);
   setHisttChannel0.1970702043755->GetYaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.1970702043755->GetYaxis()->SetLabelSize(32);
   setHisttChannel0.1970702043755->GetYaxis()->SetTitleSize(35);
   setHisttChannel0.1970702043755->GetYaxis()->SetTitleOffset(1.32);
   setHisttChannel0.1970702043755->GetYaxis()->SetTitleFont(43);
   setHisttChannel0.1970702043755->GetZaxis()->SetLabelFont(43);
   setHisttChannel0.1970702043755->GetZaxis()->SetLabelOffset(0.0087);
   setHisttChannel0.1970702043755->GetZaxis()->SetLabelSize(32);
   setHisttChannel0.1970702043755->GetZaxis()->SetTitleSize(35);
   setHisttChannel0.1970702043755->GetZaxis()->SetTitleOffset(1.32);
   setHisttChannel0.1970702043755->GetZaxis()->SetTitleFont(43);
   setHisttChannel0.1970702043755->Draw("HISTSame");
   
   TH2F *axis0.961311930102_copy6 = new TH2F("axis0.961311930102_copy6","",50,0,50,50,0,0.3879875);
   axis0.961311930102_copy6->SetDirectory(0);
   axis0.961311930102_copy6->SetMarkerStyle(20);
   axis0.961311930102_copy6->GetXaxis()->SetTitle("m#lower[0.3]{#scale[0.7]{T}}(W) (GeV)");
   axis0.961311930102_copy6->GetXaxis()->SetNdivisions(1005);
   axis0.961311930102_copy6->GetXaxis()->SetLabelFont(43);
   axis0.961311930102_copy6->GetXaxis()->SetLabelOffset(0.0105);
   axis0.961311930102_copy6->GetXaxis()->SetLabelSize(32);
   axis0.961311930102_copy6->GetXaxis()->SetTitleSize(35);
   axis0.961311930102_copy6->GetXaxis()->SetTickLength(0.04166667);
   axis0.961311930102_copy6->GetXaxis()->SetTitleOffset(1.135);
   axis0.961311930102_copy6->GetXaxis()->SetTitleFont(43);
   axis0.961311930102_copy6->GetYaxis()->SetTitle("Normalized events");
   axis0.961311930102_copy6->GetYaxis()->SetNdivisions(506);
   axis0.961311930102_copy6->GetYaxis()->SetLabelFont(43);
   axis0.961311930102_copy6->GetYaxis()->SetLabelOffset(0.0087);
   axis0.961311930102_copy6->GetYaxis()->SetLabelSize(32);
   axis0.961311930102_copy6->GetYaxis()->SetTitleSize(35);
   axis0.961311930102_copy6->GetYaxis()->SetTickLength(0.01923077);
   axis0.961311930102_copy6->GetYaxis()->SetTitleOffset(1.32);
   axis0.961311930102_copy6->GetYaxis()->SetTitleFont(43);
   axis0.961311930102_copy6->GetZaxis()->SetLabelFont(43);
   axis0.961311930102_copy6->GetZaxis()->SetLabelOffset(0.0087);
   axis0.961311930102_copy6->GetZaxis()->SetLabelSize(32);
   axis0.961311930102_copy6->GetZaxis()->SetTitleSize(35);
   axis0.961311930102_copy6->GetZaxis()->SetTitleOffset(1.32);
   axis0.961311930102_copy6->GetZaxis()->SetTitleFont(43);
   axis0.961311930102_copy6->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.165,0.855,0.165,0.855,"brNDC");
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
   AText = pt->AddText("m#lower[0.3]{#scale[0.7]{T}}(W)#kern[-0.5]{ }<50#kern[-0.5]{ }GeV");
   pt->Draw();
   
   pt = new TPaveText(0.74,0.94,0.74,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(31);
   pt->SetTextFont(43);
   pt->SetTextSize(34);
   AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }2j1t, 2.3#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (13TeV)");
   pt->Draw();
   cv2j1t_mtw_mtwinv0.0238893082146->Modified();
   cv2j1t_mtw_mtwinv0.0238893082146->cd();
   cv2j1t_mtw_mtwinv0.0238893082146->SetSelected(cv2j1t_mtw_mtwinv0.0238893082146);
}
