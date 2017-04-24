void neyman_tbar_only()
{
//=========Macro generated from canvas: cv/
//=========  (Mon Apr 24 18:18:33 2017) by ROOT version6.04/16
   TCanvas *cv = new TCanvas("cv", "",1,1,900,626);
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
   
   TH2F *axis__3 = new TH2F("axis__3","",50,0,0.5,50,0,0.5);
   axis__3->SetMarkerStyle(20);
   axis__3->GetXaxis()->SetTitle("Unfolded asymmetry");
   axis__3->GetXaxis()->SetNdivisions(1005);
   axis__3->GetXaxis()->SetLabelFont(43);
   axis__3->GetXaxis()->SetLabelOffset(0.0105);
   axis__3->GetXaxis()->SetLabelSize(32);
   axis__3->GetXaxis()->SetTitleSize(35);
   axis__3->GetXaxis()->SetTickLength(0.04629629);
   axis__3->GetXaxis()->SetTitleOffset(1.135);
   axis__3->GetXaxis()->SetTitleFont(43);
   axis__3->GetYaxis()->SetTitle("Generated asymmetry");
   axis__3->GetYaxis()->SetNdivisions(506);
   axis__3->GetYaxis()->SetLabelFont(43);
   axis__3->GetYaxis()->SetLabelOffset(0.0087);
   axis__3->GetYaxis()->SetLabelSize(32);
   axis__3->GetYaxis()->SetTitleSize(35);
   axis__3->GetYaxis()->SetTickLength(0.03205128);
   axis__3->GetYaxis()->SetTitleOffset(1.28);
   axis__3->GetYaxis()->SetTitleFont(43);
   axis__3->GetZaxis()->SetLabelFont(43);
   axis__3->GetZaxis()->SetLabelOffset(0.0087);
   axis__3->GetZaxis()->SetLabelSize(32);
   axis__3->GetZaxis()->SetTitleSize(35);
   axis__3->GetZaxis()->SetTitleOffset(1.28);
   axis__3->GetZaxis()->SetTitleFont(43);
   axis__3->Draw("AXIS");
   
   Double_t *dum = 0;
   TPolyLine *pline = new TPolyLine(23,dum,dum,"");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   pline->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   pline->SetLineColor(ci);
   pline->SetLineWidth(2);
   pline->SetPoint(0,0.0668715,0.0586416);
   pline->SetPoint(1,0.1002528,0.100564);
   pline->SetPoint(2,0.1414266,0.148507);
   pline->SetPoint(3,0.1901762,0.201009);
   pline->SetPoint(4,0.2449225,0.255466);
   pline->SetPoint(5,0.30253,0.308405);
   pline->SetPoint(6,0.3586148,0.356133);
   pline->SetPoint(7,0.4083662,0.395522);
   pline->SetPoint(8,0.4474032,0.424508);
   pline->SetPoint(9,0.4723036,0.442093);
   pline->SetPoint(10,0.4808624,0.447969);
   pline->SetPoint(11,0.4157796,0.447969);
   pline->SetPoint(12,0.4070584,0.442093);
   pline->SetPoint(13,0.3817908,0.424508);
   pline->SetPoint(14,0.3424858,0.395522);
   pline->SetPoint(15,0.2929212,0.356133);
   pline->SetPoint(16,0.237748,0.308405);
   pline->SetPoint(17,0.1818695,0.255466);
   pline->SetPoint(18,0.1295758,0.201009);
   pline->SetPoint(19,0.0837894,0.148507);
   pline->SetPoint(20,0.0458422,0.100564);
   pline->SetPoint(21,0.0157385,0.0586416);
   pline->SetPoint(22,0.0668715,0.0586416);
   pline->Draw("FSame");
   
   pline = new TPolyLine(23,dum,dum,"");

   ci = TColor::GetColor("#cccccc");
   pline->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   pline->SetLineColor(ci);
   pline->SetLineWidth(2);
   pline->SetPoint(0,0.0668715,0.0586416);
   pline->SetPoint(1,0.1002528,0.100564);
   pline->SetPoint(2,0.1414266,0.148507);
   pline->SetPoint(3,0.1901762,0.201009);
   pline->SetPoint(4,0.2449225,0.255466);
   pline->SetPoint(5,0.30253,0.308405);
   pline->SetPoint(6,0.3586148,0.356133);
   pline->SetPoint(7,0.4083662,0.395522);
   pline->SetPoint(8,0.4474032,0.424508);
   pline->SetPoint(9,0.4723036,0.442093);
   pline->SetPoint(10,0.4808624,0.447969);
   pline->SetPoint(11,0.4157796,0.447969);
   pline->SetPoint(12,0.4070584,0.442093);
   pline->SetPoint(13,0.3817908,0.424508);
   pline->SetPoint(14,0.3424858,0.395522);
   pline->SetPoint(15,0.2929212,0.356133);
   pline->SetPoint(16,0.237748,0.308405);
   pline->SetPoint(17,0.1818695,0.255466);
   pline->SetPoint(18,0.1295758,0.201009);
   pline->SetPoint(19,0.0837894,0.148507);
   pline->SetPoint(20,0.0458422,0.100564);
   pline->SetPoint(21,0.0157385,0.0586416);
   pline->SetPoint(22,0.0668715,0.0586416);
   pline->Draw("LSame");
   
   TF1 *bisector2 = new TF1("bisector","x",-1,1);
   bisector2->SetFillColor(19);
   bisector2->SetFillStyle(0);
   bisector2->SetMarkerStyle(20);
   bisector2->SetLineWidth(1);
   bisector2->SetLineStyle(2);
   bisector2->GetXaxis()->SetNdivisions(1005);
   bisector2->GetXaxis()->SetLabelFont(43);
   bisector2->GetXaxis()->SetLabelOffset(0.0105);
   bisector2->GetXaxis()->SetLabelSize(32);
   bisector2->GetXaxis()->SetTitleSize(35);
   bisector2->GetXaxis()->SetTickLength(0.05);
   bisector2->GetXaxis()->SetTitleOffset(1.135);
   bisector2->GetXaxis()->SetTitleFont(43);
   bisector2->GetYaxis()->SetNdivisions(506);
   bisector2->GetYaxis()->SetLabelFont(43);
   bisector2->GetYaxis()->SetLabelOffset(0.0087);
   bisector2->GetYaxis()->SetLabelSize(32);
   bisector2->GetYaxis()->SetTitleSize(35);
   bisector2->GetYaxis()->SetTitleOffset(1.28);
   bisector2->GetYaxis()->SetTitleFont(43);
   bisector2->Draw("Same");
   
   Double_t Graph0_fx2[11] = {
   0.041305,
   0.0730475,
   0.112608,
   0.159876,
   0.213396,
   0.270139,
   0.325768,
   0.375426,
   0.414597,
   0.439681,
   0.448321};
   Double_t Graph0_fy2[11] = {
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
   TGraph *graph = new TGraph(11,Graph0_fx2,Graph0_fy2);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","Graph",100,0.0006034,0.4890226);
   Graph_Graph_Graph12->SetMinimum(0.01970886);
   Graph_Graph_Graph12->SetMaximum(0.4869017);
   Graph_Graph_Graph12->SetDirectory(0);
   Graph_Graph_Graph12->SetStats(0);
   Graph_Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph_Graph12->GetXaxis()->SetNdivisions(1005);
   Graph_Graph_Graph12->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph12->GetXaxis()->SetLabelOffset(0.0105);
   Graph_Graph_Graph12->GetXaxis()->SetLabelSize(32);
   Graph_Graph_Graph12->GetXaxis()->SetTitleSize(35);
   Graph_Graph_Graph12->GetXaxis()->SetTickLength(0.05);
   Graph_Graph_Graph12->GetXaxis()->SetTitleOffset(1.135);
   Graph_Graph_Graph12->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph12->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph12->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph12->GetYaxis()->SetLabelOffset(0.0087);
   Graph_Graph_Graph12->GetYaxis()->SetLabelSize(32);
   Graph_Graph_Graph12->GetYaxis()->SetTitleSize(35);
   Graph_Graph_Graph12->GetYaxis()->SetTitleOffset(1.28);
   Graph_Graph_Graph12->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph12->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph12->GetZaxis()->SetLabelOffset(0.0087);
   Graph_Graph_Graph12->GetZaxis()->SetLabelSize(32);
   Graph_Graph_Graph12->GetZaxis()->SetTitleSize(35);
   Graph_Graph_Graph12->GetZaxis()->SetTitleOffset(1.28);
   Graph_Graph_Graph12->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph12);
   
   graph->Draw("l");
   TMarker *marker = new TMarker(0.041305,0.0586416,21);

   ci = TColor::GetColor("#0000b5");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.0730475,0.100564,21);

   ci = TColor::GetColor("#0044cd");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.112608,0.148507,21);

   ci = TColor::GetColor("#0089e6");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.159876,0.201009,21);

   ci = TColor::GetColor("#00ceff");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.213396,0.255466,21);

   ci = TColor::GetColor("#49deb4");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.270139,0.308405,21);

   ci = TColor::GetColor("#93ee69");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.325768,0.356133,21);

   ci = TColor::GetColor("#ddff1e");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.375426,0.395522,21);

   ci = TColor::GetColor("#e8bb14");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.414597,0.424508,21);

   ci = TColor::GetColor("#f3770a");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.439681,0.442093,21);

   ci = TColor::GetColor("#ff3300");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   marker = new TMarker(0.448321,0.447969,21);

   ci = TColor::GetColor("#da1900");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(1.2);
   marker->Draw();
   
   TH2F *axis_copy__4 = new TH2F("axis_copy__4","",50,0,0.5,50,0,0.5);
   axis_copy__4->SetDirectory(0);
   axis_copy__4->SetMarkerStyle(20);
   axis_copy__4->GetXaxis()->SetTitle("Unfolded asymmetry");
   axis_copy__4->GetXaxis()->SetNdivisions(1005);
   axis_copy__4->GetXaxis()->SetLabelFont(43);
   axis_copy__4->GetXaxis()->SetLabelOffset(0.0105);
   axis_copy__4->GetXaxis()->SetLabelSize(32);
   axis_copy__4->GetXaxis()->SetTitleSize(35);
   axis_copy__4->GetXaxis()->SetTickLength(0.04629629);
   axis_copy__4->GetXaxis()->SetTitleOffset(1.135);
   axis_copy__4->GetXaxis()->SetTitleFont(43);
   axis_copy__4->GetYaxis()->SetTitle("Generated asymmetry");
   axis_copy__4->GetYaxis()->SetNdivisions(506);
   axis_copy__4->GetYaxis()->SetLabelFont(43);
   axis_copy__4->GetYaxis()->SetLabelOffset(0.0087);
   axis_copy__4->GetYaxis()->SetLabelSize(32);
   axis_copy__4->GetYaxis()->SetTitleSize(35);
   axis_copy__4->GetYaxis()->SetTickLength(0.03205128);
   axis_copy__4->GetYaxis()->SetTitleOffset(1.28);
   axis_copy__4->GetYaxis()->SetTitleFont(43);
   axis_copy__4->GetZaxis()->SetLabelFont(43);
   axis_copy__4->GetZaxis()->SetLabelOffset(0.0087);
   axis_copy__4->GetZaxis()->SetLabelSize(32);
   axis_copy__4->GetZaxis()->SetTitleSize(35);
   axis_copy__4->GetZaxis()->SetTitleOffset(1.28);
   axis_copy__4->GetZaxis()->SetTitleFont(43);
   axis_copy__4->Draw("sameaxis");
   
   TPaveText *pt = new TPaveText(0.165,0.8,0.415,0.88,"brNDC");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetTextFont(43);
   pt->SetTextSize(34);
   TText *AText = pt->AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }jets, #bar{t} only");
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
   
   TLegend *leg = new TLegend(0.7,0.14,0.99,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(32);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=1.0","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000b5");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.9","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0044cd");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.8","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0089e6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.7","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ceff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.6","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#49deb4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.5","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#93ee69");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.4","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ddff1e");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.3","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#e8bb14");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.2","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#f3770a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.1","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff3300");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TMarker","V_{L}=1.0, V_{R}=0.0","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#da1900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   entry=leg->AddEntry("TPolyLine","stat. unc.","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   cv->Modified();
   cv->cd();
   cv->SetSelected(cv);
}
