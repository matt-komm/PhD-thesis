void neyman_t_tbar_nol()
{
//=========Macro generated from canvas: cv/
//=========  (Mon Apr 24 18:17:35 2017) by ROOT version6.04/16
   TCanvas *cv = new TCanvas("cv", "",0,0,900,650);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cv->SetHighLightColor(2);
   cv->Range(-0.1296296,-0.08974359,0.7962963,0.551282);
   cv->SetFillColor(0);
   cv->SetBorderMode(0);
   cv->SetBorderSize(2);
   cv->SetGridx();
   cv->SetGridy();
   cv->SetTickx(1);
   cv->SetTicky(1);
   cv->SetLeftMargin(0.14);
   cv->SetRightMargin(0.32);
   cv->SetTopMargin(0.08);
   cv->SetBottomMargin(0.14);
   cv->SetFrameFillStyle(0);
   cv->SetFrameLineWidth(0);
   cv->SetFrameBorderMode(0);
   cv->SetFrameBorderSize(0);
   cv->SetFrameFillStyle(0);
   cv->SetFrameLineWidth(0);
   cv->SetFrameBorderMode(0);
   cv->SetFrameBorderSize(0);
   
   TH2F *axis__1 = new TH2F("axis__1","",50,0,0.5,50,0,0.5);
   axis__1->SetMarkerStyle(20);
   axis__1->GetXaxis()->SetTitle("Unfolded asymmetry");
   axis__1->GetXaxis()->SetNdivisions(1005);
   axis__1->GetXaxis()->SetLabelFont(43);
   axis__1->GetXaxis()->SetLabelOffset(0.0105);
   axis__1->GetXaxis()->SetLabelSize(32);
   axis__1->GetXaxis()->SetTitleSize(35);
   axis__1->GetXaxis()->SetTickLength(0.04629629);
   axis__1->GetXaxis()->SetTitleOffset(1.135);
   axis__1->GetXaxis()->SetTitleFont(43);
   axis__1->GetYaxis()->SetTitle("Generated asymmetry");
   axis__1->GetYaxis()->SetNdivisions(506);
   axis__1->GetYaxis()->SetLabelFont(43);
   axis__1->GetYaxis()->SetLabelOffset(0.0087);
   axis__1->GetYaxis()->SetLabelSize(32);
   axis__1->GetYaxis()->SetTitleSize(35);
   axis__1->GetYaxis()->SetTickLength(0.03205128);
   axis__1->GetYaxis()->SetTitleOffset(1.28);
   axis__1->GetYaxis()->SetTitleFont(43);
   axis__1->GetZaxis()->SetLabelFont(43);
   axis__1->GetZaxis()->SetLabelOffset(0.0087);
   axis__1->GetZaxis()->SetLabelSize(32);
   axis__1->GetZaxis()->SetTitleSize(35);
   axis__1->GetZaxis()->SetTitleOffset(1.28);
   axis__1->GetZaxis()->SetTitleFont(43);
   axis__1->Draw("AXIS");
   
   Double_t *dum = 0;
   TPolyLine *pline = new TPolyLine(23,dum,dum,"");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   pline->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   pline->SetLineColor(ci);
   pline->SetLineWidth(2);
   pline->SetPoint(0,0.0655248,0.0586416);
   pline->SetPoint(1,0.0993197,0.100564);
   pline->SetPoint(2,0.1405315,0.148507);
   pline->SetPoint(3,0.1887017,0.201009);
   pline->SetPoint(4,0.2420515,0.255466);
   pline->SetPoint(5,0.2974398,0.308405);
   pline->SetPoint(6,0.3507459,0.356133);
   pline->SetPoint(7,0.397634,0.395522);
   pline->SetPoint(8,0.4342434,0.424508);
   pline->SetPoint(9,0.4575525,0.442093);
   pline->SetPoint(10,0.4655625,0.447969);
   pline->SetPoint(11,0.4305455,0.447969);
   pline->SetPoint(12,0.4223875,0.442093);
   pline->SetPoint(13,0.3987166,0.424508);
   pline->SetPoint(14,0.361734,0.395522);
   pline->SetPoint(15,0.3146881,0.356133);
   pline->SetPoint(16,0.2616102,0.308405);
   pline->SetPoint(17,0.2069085,0.255466);
   pline->SetPoint(18,0.1546723,0.201009);
   pline->SetPoint(19,0.1079405,0.148507);
   pline->SetPoint(20,0.0683609,0.100564);
   pline->SetPoint(21,0.0362742,0.0586416);
   pline->SetPoint(22,0.0655248,0.0586416);
   pline->Draw("FSame");
   
   pline = new TPolyLine(23,dum,dum,"");

   ci = TColor::GetColor("#cccccc");
   pline->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   pline->SetLineColor(ci);
   pline->SetLineWidth(2);
   pline->SetPoint(0,0.0655248,0.0586416);
   pline->SetPoint(1,0.0993197,0.100564);
   pline->SetPoint(2,0.1405315,0.148507);
   pline->SetPoint(3,0.1887017,0.201009);
   pline->SetPoint(4,0.2420515,0.255466);
   pline->SetPoint(5,0.2974398,0.308405);
   pline->SetPoint(6,0.3507459,0.356133);
   pline->SetPoint(7,0.397634,0.395522);
   pline->SetPoint(8,0.4342434,0.424508);
   pline->SetPoint(9,0.4575525,0.442093);
   pline->SetPoint(10,0.4655625,0.447969);
   pline->SetPoint(11,0.4305455,0.447969);
   pline->SetPoint(12,0.4223875,0.442093);
   pline->SetPoint(13,0.3987166,0.424508);
   pline->SetPoint(14,0.361734,0.395522);
   pline->SetPoint(15,0.3146881,0.356133);
   pline->SetPoint(16,0.2616102,0.308405);
   pline->SetPoint(17,0.2069085,0.255466);
   pline->SetPoint(18,0.1546723,0.201009);
   pline->SetPoint(19,0.1079405,0.148507);
   pline->SetPoint(20,0.0683609,0.100564);
   pline->SetPoint(21,0.0362742,0.0586416);
   pline->SetPoint(22,0.0655248,0.0586416);
   pline->Draw("LSame");
   
   TF1 *bisector1 = new TF1("bisector","x",-1,1);
   bisector1->SetFillColor(19);
   bisector1->SetFillStyle(0);
   bisector1->SetMarkerStyle(20);
   bisector1->SetLineWidth(1);
   bisector1->SetLineStyle(2);
   bisector1->GetXaxis()->SetNdivisions(1005);
   bisector1->GetXaxis()->SetLabelFont(43);
   bisector1->GetXaxis()->SetLabelOffset(0.0105);
   bisector1->GetXaxis()->SetLabelSize(32);
   bisector1->GetXaxis()->SetTitleSize(35);
   bisector1->GetXaxis()->SetTickLength(0.05);
   bisector1->GetXaxis()->SetTitleOffset(1.135);
   bisector1->GetXaxis()->SetTitleFont(43);
   bisector1->GetYaxis()->SetNdivisions(506);
   bisector1->GetYaxis()->SetLabelFont(43);
   bisector1->GetYaxis()->SetLabelOffset(0.0087);
   bisector1->GetYaxis()->SetLabelSize(32);
   bisector1->GetYaxis()->SetTitleSize(35);
   bisector1->GetYaxis()->SetTitleOffset(1.28);
   bisector1->GetYaxis()->SetTitleFont(43);
   bisector1->Draw("Same");
   
   Double_t Graph0_fx1[11] = {
   0.0508995,
   0.0838403,
   0.124236,
   0.171687,
   0.22448,
   0.279525,
   0.332717,
   0.379684,
   0.41648,
   0.43997,
   0.448054};
   Double_t Graph0_fy1[11] = {
   0.0586416,
   0.100564,
   0.148507,
   0.201009,
   0.255466,
   0.308405,
   0.356133,
   0.395522,
   0.424508,
   0.442093,
   0.447969};
   TGraph *graph = new TGraph(11,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.01118405,0.4877694);
   Graph_Graph1->SetMinimum(0.01970886);
   Graph_Graph1->SetMaximum(0.4869017);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetNdivisions(1005);
   Graph_Graph1->GetXaxis()->SetLabelFont(43);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.0105);
   Graph_Graph1->GetXaxis()->SetLabelSize(32);
   Graph_Graph1->GetXaxis()->SetTitleSize(35);
   Graph_Graph1->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.135);
   Graph_Graph1->GetXaxis()->SetTitleFont(43);
   Graph_Graph1->GetYaxis()->SetNdivisions(506);
   Graph_Graph1->GetYaxis()->SetLabelFont(43);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.0087);
   Graph_Graph1->GetYaxis()->SetLabelSize(32);
   Graph_Graph1->GetYaxis()->SetTitleSize(35);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.28);
   Graph_Graph1->GetYaxis()->SetTitleFont(43);
   Graph_Graph1->GetZaxis()->SetLabelFont(43);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.0087);
   Graph_Graph1->GetZaxis()->SetLabelSize(32);
   Graph_Graph1->GetZaxis()->SetTitleSize(35);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1.28);
   Graph_Graph1->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("l");
   TMarker *marker = new TMarker(0.0508995,0.0586416,21);

   ci = TColor::GetColor("#0000b5");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.0838403,0.100564,21);

   ci = TColor::GetColor("#0044cd");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.124236,0.148507,21);

   ci = TColor::GetColor("#0089e6");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.171687,0.201009,21);

   ci = TColor::GetColor("#00ceff");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.22448,0.255466,21);

   ci = TColor::GetColor("#49deb4");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.279525,0.308405,21);

   ci = TColor::GetColor("#93ee69");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.332717,0.356133,21);

   ci = TColor::GetColor("#ddff1e");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.379684,0.395522,21);

   ci = TColor::GetColor("#e8bb14");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.41648,0.424508,21);

   ci = TColor::GetColor("#f3770a");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.43997,0.442093,21);

   ci = TColor::GetColor("#ff3300");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.448054,0.447969,21);

   ci = TColor::GetColor("#da1900");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   
   TH2F *axis_copy__2 = new TH2F("axis_copy__2","",50,0,0.5,50,0,0.5);
   axis_copy__2->SetDirectory(0);
   axis_copy__2->SetMarkerStyle(20);
   axis_copy__2->GetXaxis()->SetTitle("Unfolded asymmetry");
   axis_copy__2->GetXaxis()->SetNdivisions(1005);
   axis_copy__2->GetXaxis()->SetLabelFont(43);
   axis_copy__2->GetXaxis()->SetLabelOffset(0.0105);
   axis_copy__2->GetXaxis()->SetLabelSize(32);
   axis_copy__2->GetXaxis()->SetTitleSize(35);
   axis_copy__2->GetXaxis()->SetTickLength(0.04629629);
   axis_copy__2->GetXaxis()->SetTitleOffset(1.135);
   axis_copy__2->GetXaxis()->SetTitleFont(43);
   axis_copy__2->GetYaxis()->SetTitle("Generated asymmetry");
   axis_copy__2->GetYaxis()->SetNdivisions(506);
   axis_copy__2->GetYaxis()->SetLabelFont(43);
   axis_copy__2->GetYaxis()->SetLabelOffset(0.0087);
   axis_copy__2->GetYaxis()->SetLabelSize(32);
   axis_copy__2->GetYaxis()->SetTitleSize(35);
   axis_copy__2->GetYaxis()->SetTickLength(0.03205128);
   axis_copy__2->GetYaxis()->SetTitleOffset(1.28);
   axis_copy__2->GetYaxis()->SetTitleFont(43);
   axis_copy__2->GetZaxis()->SetLabelFont(43);
   axis_copy__2->GetZaxis()->SetLabelOffset(0.0087);
   axis_copy__2->GetZaxis()->SetLabelSize(32);
   axis_copy__2->GetZaxis()->SetTitleSize(35);
   axis_copy__2->GetZaxis()->SetTitleOffset(1.28);
   axis_copy__2->GetZaxis()->SetTitleFont(43);
   axis_copy__2->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.165,0.8,0.415,0.88,"brNDC");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetTextFont(43);
   pt->SetTextSize(34);
   TText *AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }jets, t#kern[-0.5]{ }+#kern[-0.5]{ }#bar{t}");
   pt->Draw();
   
   pt = new TPaveText(0.14,0.94,0.14,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(63);
   pt->SetTextSize(35);
   AText = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.24,0.94,0.24,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(53);
   pt->SetTextSize(35);
   AText = pt->AddText("Simulation");
   pt->Draw();
   cv->Modified();
   cv->cd();
   cv->SetSelected(cv);
}
